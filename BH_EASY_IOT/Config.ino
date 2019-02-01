AsyncEventSource events("/events");

JsonObject& configJson = getJsonObject();
typedef struct {
    int gpio;
} gpios_t;
std::vector<gpios_t> inUseGpios;
void logger(String payload){
  if(payload.equals(""))return;
  Serial.print("Free heap:"); Serial.println(ESP.getFreeHeap(),DEC);
  // events.send(payload.c_str(), "log");
   Serial.printf((payload+"\n").c_str());
}
 

void resetToFactoryConfig(){
   SPIFFS.format();
   shouldReboot = true;
}

JsonObject& getConfigJson(){
 return configJson;
}

String getHostname(){
  //String nodeId = configJson.get<String>("nodeId");
  //if(nodeId.equals(configJson.get<String>("hostname"))){
   // return nodeId;
   // }
  //return String(HARDWARE) +"-"+nodeId;
  return  String(HARDWARE)+"-"+String(ESP.getChipId());
}
String getApName(){
  return  "bhnode-"+String(ESP.getChipId());
}
void applyUpdateConfig(double outdatedVersion){
  if(outdatedVersion < 1.4){
      JsonArray& _devices =  getStoredSensors();
      for(int i  = 0 ; i < _devices.size() ; i++){ 
        JsonObject& d = _devices[i]; 
        JsonArray& functions = d.get<JsonVariant>("functions");
        for(int i  = 0 ; i < functions.size() ; i++){
          JsonObject& f = functions[i];    
          String _name = f.get<String>("name");
          if(_name.equals("Temperatura")){
            f.set("uniqueName","temperature");
          }else if(_name.equals("Humidade")){
            f.set("uniqueName","humidity");
          }
          
        }
        rebuildSensorsMqttTopics();     
    }
  }
  if(outdatedVersion < 3.54){
    configJson.set("hardwareId", String(ESP.getChipId()));
  }
}

void loadStoredConfiguration(){
  bool configFail = true;
  if(SPIFFS.begin()){
    File cFile;   
    if(SPIFFS.exists(CONFIG_FILENAME)){
      cFile = SPIFFS.open(CONFIG_FILENAME,"r+"); 
      if(cFile){
        logger("[CONFIG] Read stored file config...");
        JsonObject& storedConfig = getJsonObject(cFile);
        if (storedConfig.success()) {
          configJson.set("nodeId",storedConfig.get<String>("nodeId"));
          configJson.set("homeAssistantAutoDiscovery",storedConfig.get<bool>("homeAssistantAutoDiscovery"));
          configJson.set("homeAssistantAutoDiscoveryPrefix",storedConfig.get<String>("homeAssistantAutoDiscoveryPrefix"));
          configJson.set("hostname",storedConfig.get<String>("hostname"));
          configJson.set("mqttIpDns",storedConfig.get<String>("mqttIpDns"));
          configJson.set("mqttUsername",storedConfig.get<String>("mqttUsername"));
          configJson.set("mqttPassword",storedConfig.get<String>("mqttPassword"));
          configJson.set("wifiSSID",storedConfig.get<String>("wifiSSID"));
          configJson.set("wifiSecret", storedConfig.get<String>("wifiSecret"));
          configJson.set("wifiIp", storedConfig.get<String>("wifiIp"));
          configJson.set("hardwareId", String(ESP.getChipId()));
          #ifdef BHPZEM
          configJson.set("notificationInterval",storedConfig.get<unsigned int>("notificationInterval"));
          configJson.set("directionCurrentDetection",storedConfig.get<bool>("directionCurrentDetection"));
          configJson.set("emoncmsApiKey",storedConfig.get<String>("emoncmsApiKey"));
          configJson.set("emoncmsPrefix",storedConfig.get<String>("emoncmsPrefix"));
          configJson.set("emoncmsUrl", storedConfig.get<String>("emoncmsUrl"));
          configJson.set("emoncmsPort", storedConfig.get<int>("emoncmsPort"));
          configJson.set("hardware", "PZEM");
          #endif
          configJson.set("wifiMask", storedConfig.get<String>("wifiMask"));
          configJson.set("wifiGw", storedConfig.get<String>("wifiGw"));
          configJson.set("staticIp", storedConfig.get<bool>("staticIp"));
          configJson.set("apSecret", storedConfig.get<String>("apSecret"));
          #ifdef BHONOFRE
            configJson.set("hardware", "ONOFRE");
          #endif
          double configVersion = storedConfig.get<double>("configVersion");
          if(configVersion < FIRMWARE_VERSION){
               logger("[CONFIG] CONFIG VERSION STARTED");
               cFile.close();
               SPIFFS.end(); 
               applyUpdateConfig(configVersion);
               logger("[CONFIG] UPDATE REQUIRED");
               applyUpdateConfig(configVersion);
               configJson.set("configVersion", FIRMWARE_VERSION);
               saveConfig();
               loadStoredConfiguration();
               return;
          }else{
                logger("[CONFIG] CONFIG UPDATED Version "+String(configVersion));
                 configJson.set("configVersion", FIRMWARE_VERSION);
            }
           
          logger("[CONFIG] Apply stored file config with success...");
          cFile.close();
          configFail = false;
        }
      }
    }
    
  if(configFail){
    logger("[CONFIG] Apply default config...");
    cFile = SPIFFS.open(CONFIG_FILENAME,"w+"); 
    configJson.set("nodeId",String(HARDWARE) +"-"+String(MODEL)+"-"+String(ESP.getChipId()));
    configJson.set("homeAssistantAutoDiscovery", true);
    configJson.set("homeAssistantAutoDiscoveryPrefix", HOME_ASSISTANT_AUTO_DISCOVERY_PREFIX);
    configJson.set("hostname",String(HARDWARE) +"-"+String(MODEL)+"-"+String(ESP.getChipId()));
    configJson.set("mqttIpDns",MQTT_BROKER_IP);
    configJson.set("mqttUsername", MQTT_USERNAME);
    configJson.set("mqttPassword",MQTT_PASSWORD);
    configJson.set("wifiSSID", WIFI_SSID);
    configJson.set("wifiSecret", WIFI_SECRET);
    configJson.set("configVersion", FIRMWARE_VERSION);
    configJson.set("apSecret", AP_SECRET);
    
    configJson.set("emoncmsPort", 80);
    configJson.set("directionCurrentDetection",false);
    #ifdef BHPZEM
       configJson.set("notificationInterval",DELAY_NOTIFICATION);
       configJson.set("hardware", "PZEM");
    #endif
    #ifdef BHONOFRE
       configJson.set("hardware", "ONOFRE");
     #endif
    configJson.printTo(cFile);
  }
  SPIFFS.end(); 
  }else{
    logger("[CONFIG] File system error...");
   }
}


JsonObject& saveNode(JsonObject& nodeConfig){
  String  nodeId = nodeConfig.get<String>("nodeId");
 
  if(nodeId != nullptr && !configJson.get<String>("nodeId").equals(nodeId)){
    nodeId.replace(" ","");
    String oldNodeId = configJson.get<String>("nodeId");
    configJson.set("nodeId",nodeId);
  
    //reloadWiFiConfig();
    reloadMqttConfig();
    rebuildSwitchMqttTopics(configJson.get<String>("homeAssistantAutoDiscoveryPrefix"),oldNodeId);
    rebuildSensorsMqttTopics();
  }else{
     #ifdef BHPZEM
      configJson.set("notificationInterval",nodeConfig.get<unsigned int>("notificationInterval"));
      configJson.set("directionCurrentDetection",nodeConfig.get<bool>("directionCurrentDetection"));
      #endif
    }
  saveConfig();
  return configJson;
} 

JsonObject& saveWifi(JsonObject& _config){
  configJson.set("wifiSSID",_config.get<String>("wifiSSID"));
  configJson.set("wifiSecret", _config.get<String>("wifiSecret"));
  configJson.set("wifiIp", _config.get<String>("wifiIp"));
  configJson.set("wifiMask", _config.get<String>("wifiMask"));
  configJson.set("wifiGw", _config.get<String>("wifiGw"));
  configJson.set("staticIp", _config.get<bool>("staticIp"));
  configJson.set("apSecret", _config.get<String>("apSecret"));
  if(_config.containsKey("mqttIpDns")){
    if(_config.containsKey("mqttEmbedded") &&  _config.get<bool>("mqttEmbedded")){
     Serial.println("Sending mDNS query");
      int n = MDNS.queryService("bhsystems", "tcp");
      Serial.println("mDNS query done");
    if (n == 0) {
      Serial.println("no services found");
    } else {
    Serial.print(n);
    Serial.println(" service(s) found");
    for (int i = 0; i < n; ++i) {
      // Print details for each service found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(MDNS.hostname(i));
      Serial.print(" (");
      Serial.print(MDNS.IP(i));
      _config.containsKey(String(MDNS.IP(i)));
      Serial.print(":");
      Serial.print(MDNS.port(i));
      Serial.println(")");
    }
  }
  }
  Serial.println();

  Serial.println("loop() next");
  saveMqtt(_config);
  }
  wifiUpdated  = true;
  return configJson;
}

void updateNetworkConfig(){
  if(!configJson.get<bool>("staticIp")){
     configJson.set("wifiIp",WiFi.localIP().toString());
     configJson.set("wifiMask",WiFi.subnetMask().toString());
     configJson.set("wifiGw", WiFi.gatewayIP().toString());
   }
  saveConfig();
}
JsonObject& saveMqtt(JsonObject& _config){
  configJson.set("mqttIpDns",_config.get<String>("mqttIpDns"));
  configJson.set("mqttUsername",_config.get<String>("mqttUsername"));
  configJson.set("mqttPassword",_config.get<String>("mqttPassword"));
  configJson.set("mqttEmbedded",_config.get<String>("mqttEmbedded"));
  saveConfig();
  _config.printTo(Serial);
  reloadMqttConfig();
  return configJson;
} 

JsonObject& saveHa(JsonObject& _config){
  configJson.set("homeAssistantAutoDiscovery",_config.get<bool>("homeAssistantAutoDiscovery"));
  configJson.set("homeAssistantAutoDiscoveryPrefix",_config.get<String>("homeAssistantAutoDiscoveryPrefix"));
  saveConfig();
  realoadHaConfig();
  return configJson;
} 

#ifdef BHPZEM
JsonObject& saveEmoncms(JsonObject& _config){
  configJson.set("emoncmsApiKey",_config.get<String>("emoncmsApiKey"));
  configJson.set("emoncmsPrefix",_config.get<String>("emoncmsPrefix"));
  configJson.set("emoncmsUrl", _config.get<String>("emoncmsUrl"));
  configJson.set("emoncmsPort", _config.get<int>("emoncmsPort"));
  saveConfig();
  return configJson;
} 
#endif
void saveConfig(){
   if(SPIFFS.begin()){
      File rFile = SPIFFS.open(CONFIG_FILENAME,"w+");
      if(!rFile){
        logger("[CONFIG] Open config file Error!");
      } else {
       
      configJson.printTo(rFile);
      }
      rFile.close();
   }else{
     logger("[CONFIG] Open file system Error!");
  }
  SPIFFS.end();
  logger("[CONFIG] New config stored.");
  
}

void releaseGpio(int gpio){
  
}

void configGpio(int gpio,int mode){
  pinMode(gpio,mode);
  inUseGpios.push_back({gpio});  
}
