#ifndef SWITCHES_H
#define SWITCHES_H

#include "Arduino.h"
#include "ArduinoJson.h"
#include "FS.h"
#include "constants.h"
static const String STATES_POLL[] = {constanstsSwitch::payloadOff, constanstsSwitch::payloadOn, constanstsSwitch::payloadStop, constanstsSwitch::payloadOpen, constanstsSwitch::payloadStop, constanstsSwitch::payloadClose, constanstsSwitch::payloadReleased, constanstsSwitch::payloadUnlock, constanstsSwitch::payloadLock};
class Bounce;
enum SwitchMode
{
    SWITCH = 1,
    PUSH = 2,
    DUAL_SWITCH = 4,
    DUAL_PUSH = 5
};
enum SwitchSlaveMode
{
    S_MQTT_PUB,
    S_MQTT_SUB,
    S_HTTP_POST,
    S_HTTP_GET,
};
enum SwitchControlType
{
    RELAY_AND_MQTT = 1,
    MQTT = 2
};
struct SwitchStatePool
{
    char id[32];
    char state[10];
};
struct SwitchT
{
    double firmware = VERSION;
    char id[32]; //Generated from name without spaces and no special characters
    char name[24];
    char family[10];                      //switch, light, cover, lock

    SwitchMode mode = SWITCH;             // MODE_SWITCH, MODE_PUSH, MODE_DUAL_SWITCH, MODE_DUAL_PUSH
    SwitchControlType typeControl = MQTT; //MQTT OR RELAY
    bool alexaSupport = true;
    bool haSupport = false;
    bool knxSupport = false;
    bool childLock = false;
    //GPIOS INPUT
    unsigned int primaryGpio = constantsConfig::noGPIO;
    unsigned int secondaryGpio = constantsConfig::noGPIO;
    bool pullup = false; //USE INTERNAL RESISTOR

    //GPIOS OUTPUT
    unsigned int primaryGpioControl = constantsConfig::noGPIO;
    unsigned int secondaryGpioControl = constantsConfig::noGPIO;
    bool inverted = false;

    //KNX
    uint8_t knxLevelOne = 0;
    uint8_t knxLevelTwo = 0;
    uint8_t knxLevelThree = 0;
    uint8_t knxIdRegister = 0;
    uint8_t knxIdAssign = 0;
    bool knxNotifyGroup = true;

    //AUTOMATIONS
    unsigned long autoStateDelay = 0;
    char autoStateValue[10];
    unsigned long timeBetweenStates = 0;

    //MQTT
    char mqttCommandTopic[128];
    char mqttStateTopic[128];
    char mqttPositionStateTopic[128];
    char mqttPositionCommandTopic[128];
    char mqttPayload[10];
    bool mqttRetain = false;
    bool isCover = false;
    //CONTROL VARIABLES
    char stateControl[10];    //ON, OFF, STOP, CLOSE, OPEN, LOCK, UNLOCK
    int positionControlCover; //COVER PERCENTAGE 100% = open, 0% close

    int lastPercentage = 0;
    bool lastPrimaryGpioState = false;
    bool lastSecondaryGpioState = false;
    Bounce *debouncerPrimary;
    Bounce *debouncerSecondary;
    int percentageRequest = -1;
    int statePoolIdx = 0;
    unsigned int statePoolStart = 0;
    unsigned int statePoolEnd = 0;
    unsigned long lastChangeState = 0;

    //CLOUDIO
    char mqttCloudCommandTopic[128];
    char mqttCloudStateTopic[128];
    bool cloudIOSupport = true;
    //METHODS
    void load(File &file);
    void save(File &file) const;
    const char *getCurrentState() const;
    void updateFromJson(JsonObject doc);
    void changeState(const char *state);
    void reloadMqttTopics();
};
struct Switches
{
    std::vector<SwitchT> items;
    unsigned long lastChange = 0ul;
    void load(File &file);
    void save(File &file) const;
    bool remove(const char *id);

    size_t serializeToJson(Print &output);
};
void stateSwitchByName(Switches &switches, const char *name, const char *state, const char *value);
void loop(Switches &switches);
void load(Switches &switches);
void remove(Switches &switches, const char *id);
void update(Switches &switches, const String &id, JsonObject doc);
void mqttSwitchControl(Switches &switches, const char *topic, const char *payload);
void mqttCloudSwitchControl(Switches &switches, const char *topic, const char *payload);
void sendToServerEvents(const String &topic, const String &payload);
void stateSwitchById(Switches &switches, const char *id, const char *state);
struct Switches &getAtualSwitchesConfig();
void reloadSwitches();
#endif