#include "AsyncJson.h"
#include "ArduinoJson.h"
#include "StaticSite.h"
#include "StaticCss.h"
#include "StaticJs.h"

// SKETCH BEGIN
AsyncWebServer server(80);

void setupWebserver()
{
  MDNS.begin(getHostname().c_str());
  MDNS.addService("bhsystems", "tcp", 80);
  MDNS.addServiceTxt("bhsystems", "tcp", "nodeId", getConfigJson().getMember("nodeId").as<String>());
  MDNS.addServiceTxt("bhsystems", "tcp", "hardwareId", String(ESP.getChipId()));
  MDNS.addServiceTxt("bhsystems", "tcp", "type", String(FACTORY_TYPE));
  MDNS.addServiceTxt("bhsystems", "tcp", "wifiSignal", String(WiFi.RSSI()));
  MDNS.addServiceTxt("bhsystems", "tcp", "ssid", getApName());
  MDNS.addServiceTxt("bhsystems", "tcp", "firmware", getConfigJson().getMember("firmware").as<String>());
  server.addHandler(&events);
  /** HTML  **/
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", index_html, sizeof(index_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });

  server.on("/scan", HTTP_GET, [](AsyncWebServerRequest *request) {
    requestWifiScan();
    request->send(200, "application/json", "{\"result\":\"OK\"}");
  });


  server.on("/firmware.html", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", firmware_html, sizeof(firmware_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });

  server.on("/mqtt.html", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", mqtt_html, sizeof(mqtt_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });
  server.on("/node.html", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", node_html, sizeof(node_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });
  server.on("/wifi.html", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", wifi_html, sizeof(wifi_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });
  server.on("/state-switch", HTTP_POST, [](AsyncWebServerRequest *request) {
    if (request->hasArg("id") && request->hasArg("state"))
    {
      JsonArray &_devices = getStoredSwitchs();
      for (int i = 0; i < _devices.size(); i++)
      {
        JsonObject &switchJson = _devices[i];
        if (switchJson.getMember("id").as<String>().equals(request->arg("id")))
        {
          stateSwitch(switchJson, request->arg("state"));
          break;
        }
      }
    }
    request->send(200);
  });
  server.on("/devices.html", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", devices_html, sizeof(devices_html));
    response->addHeader("Content-Encoding", "gzip");
    request->send(response);
  });
  /** JS    **/

  server.on("/js/index.js", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "application/js", index_js, sizeof(index_js));
    response->addHeader("Content-Encoding", "gzip");
    response->addHeader("Expires", "Mon, 1 Jan 2222 10:10:10 GMT");
    request->send(response);
  });
  server.on("/js/jquery.min.js", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "application/js", jquery_min_js, sizeof(jquery_min_js));
    response->addHeader("Content-Encoding", "gzip");
    response->addHeader("Expires", "Mon, 1 Jan 2222 10:10:10 GMT");
    request->send(response);
  });

  /** CSS   **/
  server.on("/css/AdminLTE.min.css", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/css", AdminLTE_min_css, sizeof(AdminLTE_min_css));
    response->addHeader("Content-Encoding", "gzip");
    response->addHeader("Expires", "Mon, 1 Jan 2222 10:10:10 GMT");
    request->send(response);
  });

  server.on("/config", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getConfigJson().printTo(*response);
    request->send(response);
  });

  server.on("/wifi-status", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    if (!request->host().equals("192.168.4.1") && WiFi.getMode() & WIFI_AP)
    {
      dissableAP();
    }
    wifiJSONStatus().printTo(*response);
    request->send(response);
  });
  server.on("/switchs", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredSwitchs().printTo(*response);
    request->send(response);
  });
  server.on("/relays", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredRelays().printTo(*response);
    request->send(response);
  });
  server.on("/dissableAP", HTTP_GET, [](AsyncWebServerRequest *request) {
    dissableAP();
    request->send(200);
  });
  server.on("/sensors", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredSensors().printTo(*response);
    request->send(response);
  });

  server.on("/features", HTTP_GET, [](AsyncWebServerRequest *request) {
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredSensors().printTo(*response);
    request->send(response);
  });

  server.on("/remove-relay", HTTP_GET, [](AsyncWebServerRequest *request) {
    if (request->hasArg("id"))
    {
      removeRelay(request->arg("id"));
    }
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredRelays().printTo(*response);
    request->send(response);
  });
  server.on("/remove-sensor", HTTP_GET, [](AsyncWebServerRequest *request) {
    if (request->hasArg("id"))
    {
      removeSensor(request->arg("id"));
    }
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredSensors().printTo(*response);
    request->send(response);
  });

  server.on("/remove-switch", HTTP_GET, [](AsyncWebServerRequest *request) {
    if (request->hasArg("id"))
    {
      removeSwitch(request->arg("id"));
    }
    AsyncResponseStream *response = request->beginResponseStream("application/json");
    getStoredSwitchs().printTo(*response);
    request->send(response);
  });
  server.on("/reboot", HTTP_GET, [](AsyncWebServerRequest *request) {
   requestReboot();
    request->redirect("/");
  });


  server.on("/loaddefaults", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200);
   requestLoadDefaults();
  });
  server.on("/auto-update", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200);
    requestAutoUpdate();
  });

  AsyncCallbackJsonWebHandler *handlerSwitch = new AsyncCallbackJsonWebHandler("/save-switch", [](AsyncWebServerRequest *request, JsonVariant &json) {
   
      AsyncResponseStream *response = request->beginResponseStream("application/json");
      storeSwitch(json.as<JsonObject>()).printTo(*response);
      request->send(response);
   
  });
  server.addHandler(handlerSwitch);

  AsyncCallbackJsonWebHandler *handlerNode = new AsyncCallbackJsonWebHandler("/save-node", [](AsyncWebServerRequest *request, JsonVariant &json) {
  
      AsyncResponseStream *response = request->beginResponseStream("application/json");
      //SAVE CONFIG
      saveNode(json.as<JsonObject>()).printTo(*response);
      request->send(response);
    
  });
  server.addHandler(handlerNode);

  AsyncCallbackJsonWebHandler *handlerWifi = new AsyncCallbackJsonWebHandler("/save-wifi", [](AsyncWebServerRequest *request, JsonVariant &json) {
    JsonObject &jsonObj = json.as<JsonObject>();

      AsyncResponseStream *response = request->beginResponseStream("application/json");
      //SAVE CONFIG
      saveWifi(json.as<JsonObject>()).printTo(*response);

      request->send(response);
    
  });
  server.addHandler(handlerWifi);

  AsyncCallbackJsonWebHandler *handlerAdopt = new AsyncCallbackJsonWebHandler("/adopt-controller-config", [](AsyncWebServerRequest *request, JsonVariant &json) {
    logger("ADOPT");
    if (request->hasHeader("configkey"))
    {
      AsyncWebHeader *h = request->getHeader("configkey");
      Serial.printf("configkey: %s\n", h->value().c_str());
      String configkey = String(h->value().c_str());
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        //SAVE CONFIG
        adoptControllerConfig(json.as<JsonObject>(), configkey).printTo(*response);
        request->send(response);
    }
    else
    {
      logger("MISSING CONFIG KEY");
    }
  });
  server.addHandler(handlerAdopt);

  AsyncCallbackJsonWebHandler *handlermqtt = new AsyncCallbackJsonWebHandler("/save-mqtt", [](AsyncWebServerRequest *request, JsonVariant &json) {
      AsyncResponseStream *response = request->beginResponseStream("application/json");
      saveMqtt(json.as<JsonObject>()).printTo(*response);
      request->send(response);
  });
  server.addHandler(handlermqtt);

  AsyncCallbackJsonWebHandler *handlerRelay = new AsyncCallbackJsonWebHandler("/save-relay", [](AsyncWebServerRequest *request, JsonVariant &json) {
   
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        saveRelay(json.as<JsonObject>()).printTo(*response);
        request->send(response);
      
    
  });
  server.addHandler(handlerRelay);

  AsyncCallbackJsonWebHandler *handlerSensor = new AsyncCallbackJsonWebHandler("/save-sensor", [](AsyncWebServerRequest *request, JsonVariant &json) {
   
        AsyncResponseStream *response = request->beginResponseStream("application/json");
        storeSensor(json.as<JsonObject>()).printTo(*response);
        request->send(response);
   
  });
  server.addHandler(handlerSensor);
  server.on("/update", HTTP_POST, [](AsyncWebServerRequest *request) {
    bool error = Update.hasError();
    if(error){
      requestReboot();
      }
    AsyncWebServerResponse *response = request->beginResponse(200, "text/html", error? "<!DOCTYPE html><html lang=\"en\"><head> <meta charset=\"UTF-8\"> <title>Atualização</title> <style>body{background-color: rgb(34, 34, 34); color: white; font-size: 18px; padding: 10px; font-weight: lighter;}</style> <script type=\"text/javascript\">function Redirect(){window.location=\"/\";}document.write(\"Atualização com sucesso, vai ser redirecionado automaticamente daqui a 20 segundos. Aguarde...\"); setTimeout('Redirect()', 20000); </script></head><body></body></html>":"<!DOCTYPE html><html lang=\"en\"><head> <meta charset=\"UTF-8\"> <title>Atualização</title> <style>body{background-color: #cc0000; color: white; font-size: 18px; padding: 10px; font-weight: lighter;}</style> <script type=\"text/javascript\">function Redirect(){window.location=\"/\";}document.write(\"Atualização falhou, poderá ser necessário fazer reset manualmente ao equipamento e tentar novamente.\"); setTimeout('Redirect()', 10000); </script></head><body></body></html>");
    response->addHeader("Connection", "close");
    request->send(response); }, [](AsyncWebServerRequest *request, String filename, size_t index, uint8_t *data, size_t len, bool final) {
    if(!index){
      logger("[FIRMWARE] Update Start:"+ filename);
      Update.runAsync(true);
      if(!Update.begin((ESP.getFreeSketchSpace() - 0x1000) & 0xFFFFF000)){
       // Update.printError(Serial);
      }
    }
    if(!Update.hasError()){
      if(Update.write(data, len) != len){
        //Update.printError(Serial);
      }
    }
    if(final){
      if(Update.end(true)){
        logger("[FIRMWARE] Update Success: "+String( index+len));
      } else {
        //Update.printError(Serial);
      }
    } });

  server.onRequestBody([](AsyncWebServerRequest *request, uint8_t *data, size_t len, size_t index, size_t total) {
    if (fauxmo.process(request->client(), request->method() == HTTP_GET, request->url(), String((char *)data)))
      return;
  });

  server.onNotFound([](AsyncWebServerRequest *request) {
    String body = (request->hasParam("body", true)) ? request->getParam("body", true)->value() : String();
    if (fauxmo.process(request->client(), request->method() == HTTP_GET, request->url(), body))
      return;

    if (request->method() == HTTP_OPTIONS)
    {
      request->send(200);
    }
    else
    {
      request->send(404);
    }
  });
  DefaultHeaders::Instance().addHeader(F("Access-Control-Allow-Origin"), F("*"));
  DefaultHeaders::Instance().addHeader(F("Access-Control-Allow-Methods"), F("PUT, GET"));
  DefaultHeaders::Instance().addHeader(F("Access-Control-Allow-Headers"), F("Content-Type, Origin, Referer, User-Agent"));
  server.begin();
}

void publishOnEventSource(String topic, String payload)
{
  events.send(payload.c_str(), topic.c_str());
}
void publishOnEventSource(String topic, JsonObject &payloadJson)
{
  String payload = "";
  payloadJson.printTo(payload);
  events.send(payload.c_str(), topic.c_str());
}
