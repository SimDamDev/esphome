// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace display;
using namespace binary_sensor;
using namespace switch_;
using namespace text_sensor;
using namespace light;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
api::UserServiceTrigger<> *api_userservicetrigger;
Automation<> *automation;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
using namespace uart;
uart::ESP8266UartComponent *uart_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
nextion::Nextion *cuisinenx;
dht::DHT *dht_dht;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
sensor::Sensor *temp;
sensor::Sensor *humid;
homeassistant::HomeassistantSensor *cuisine_planfond_bright;
sensor::SensorStateTrigger *sensor_sensorstatetrigger;
Automation<float> *automation_2;
homeassistant::HomeassistantBinarySensor *cuisine_planfond_state;
binary_sensor::StateTrigger *binary_sensor_statetrigger;
Automation<bool> *automation_3;
nextion::NextionBinarySensor *page0back;
binary_sensor::PressTrigger *binary_sensor_presstrigger;
Automation<> *automation_4;
nextion::NextionBinarySensor *page0next;
binary_sensor::PressTrigger *binary_sensor_presstrigger_2;
Automation<> *automation_5;
nextion::NextionBinarySensor *page1back;
binary_sensor::PressTrigger *binary_sensor_presstrigger_3;
Automation<> *automation_6;
nextion::NextionBinarySensor *page1next;
binary_sensor::PressTrigger *binary_sensor_presstrigger_4;
Automation<> *automation_7;
nextion::NextionBinarySensor *page1home;
binary_sensor::PressTrigger *binary_sensor_presstrigger_5;
Automation<> *automation_8;
nextion::NextionBinarySensor *page2back;
binary_sensor::PressTrigger *binary_sensor_presstrigger_6;
Automation<> *automation_9;
nextion::NextionBinarySensor *page2next;
binary_sensor::PressTrigger *binary_sensor_presstrigger_7;
Automation<> *automation_10;
nextion::NextionBinarySensor *page2home;
binary_sensor::PressTrigger *binary_sensor_presstrigger_8;
Automation<> *automation_11;
nextion::NextionBinarySensor *page3back;
binary_sensor::PressTrigger *binary_sensor_presstrigger_9;
Automation<> *automation_12;
nextion::NextionBinarySensor *page3next;
binary_sensor::PressTrigger *binary_sensor_presstrigger_10;
Automation<> *automation_13;
nextion::NextionBinarySensor *page3home;
binary_sensor::PressTrigger *binary_sensor_presstrigger_11;
Automation<> *automation_14;
nextion::NextionBinarySensor *home_b0;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger;
Automation<> *automation_15;
nextion::NextionBinarySensor *planfond_b0;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger_2;
Automation<> *automation_16;
nextion::NextionBinarySensor *bright_minus;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger_3;
Automation<> *automation_17;
LambdaCondition<> *lambdacondition;
IfAction<> *ifaction_2;
nextion::NextionBinarySensor *bright_plus;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger_4;
Automation<> *automation_18;
LambdaCondition<> *lambdacondition_3;
IfAction<> *ifaction_4;
nextion::NextionBinarySensor *bright_25;
binary_sensor::PressTrigger *binary_sensor_presstrigger_12;
Automation<> *automation_19;
LambdaCondition<> *lambdacondition_5;
IfAction<> *ifaction_5;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_4;
nextion::NextionBinarySensor *bright_50;
binary_sensor::PressTrigger *binary_sensor_presstrigger_13;
Automation<> *automation_20;
LambdaCondition<> *lambdacondition_6;
IfAction<> *ifaction_6;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_5;
nextion::NextionBinarySensor *bright_75;
binary_sensor::PressTrigger *binary_sensor_presstrigger_14;
Automation<> *automation_21;
LambdaCondition<> *lambdacondition_7;
IfAction<> *ifaction_7;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_6;
nextion::NextionBinarySensor *bright_100;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger_5;
Automation<> *automation_22;
LambdaCondition<> *lambdacondition_8;
IfAction<> *ifaction_8;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_7;
nextion::NextionBinarySensor *bar_minuterie;
binary_sensor::PressTrigger *binary_sensor_presstrigger_15;
Automation<> *automation_23;
LambdaAction<> *lambdaaction_27;
nextion::NextionBinarySensor *bar_on_off;
binary_sensor::PressTrigger *binary_sensor_presstrigger_16;
Automation<> *automation_24;
LambdaAction<> *lambdaaction_28;
nextion::NextionBinarySensor *bar_light;
script::SingleScript<int> *page_next;
script::SingleScript<int> *page_back;
script::SingleScript<> *update_planfond_state;
script::SingleScript<> *update_planfond_state_from_home;
script::SingleScript<> *update_all;
script::SingleScript<> *turn_on_planfond;
script::SingleScript<> *turn_off_planfond;
script::SingleScript<> *text_bright;
Automation<int> *automation_25;
template_::TemplateSwitch *switch_planfond;
template_::TemplateTextSensor *bright_text;
binary::BinaryLightOutput *binary_binarylightoutput;
light::LightState *light_lightstate;
using namespace output;
gpio::GPIOBinaryOutput *bar_output;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_4;
LambdaAction<> *lambdaaction;
using namespace api;
LambdaAction<float> *lambdaaction_2;
LambdaAction<bool> *lambdaaction_3;
LambdaCondition<> *lambdacondition_2;
IfAction<> *ifaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction;
LambdaCondition<> *lambdacondition_4;
IfAction<> *ifaction_3;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_2;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_3;
globals::GlobalsComponent<std::vector<std::string>> *current_page_list;
globals::GlobalsComponent<int> *current_page_int;
globals::GlobalsComponent<std::string> *page;
globals::GlobalsComponent<int> *max_page;
globals::GlobalsComponent<bool> *planfond_state;
Automation<> *automation_34;
LambdaAction<> *lambdaaction_37;
Automation<> *automation_33;
LambdaAction<> *lambdaaction_36;
LambdaAction<> *lambdaaction_4;
LambdaAction<> *lambdaaction_5;
LambdaAction<> *lambdaaction_6;
LambdaAction<> *lambdaaction_7;
LambdaAction<> *lambdaaction_8;
LambdaAction<> *lambdaaction_9;
LambdaAction<> *lambdaaction_10;
LambdaAction<> *lambdaaction_11;
LambdaAction<> *lambdaaction_12;
LambdaAction<> *lambdaaction_13;
LambdaAction<> *lambdaaction_14;
LambdaAction<> *lambdaaction_15;
LambdaAction<> *lambdaaction_16;
LambdaAction<> *lambdaaction_17;
LambdaAction<> *lambdaaction_18;
LambdaAction<> *lambdaaction_19;
LambdaAction<> *lambdaaction_20;
LambdaAction<> *lambdaaction_21;
LambdaAction<> *lambdaaction_22;
LambdaAction<> *lambdaaction_23;
LambdaAction<> *lambdaaction_24;
LambdaAction<> *lambdaaction_25;
LambdaAction<> *lambdaaction_26;
LambdaAction<int> *lambdaaction_29;
Automation<int> *automation_26;
LambdaAction<int> *lambdaaction_30;
Automation<> *automation_27;
LambdaAction<> *lambdaaction_31;
Automation<> *automation_28;
LambdaAction<> *lambdaaction_32;
Automation<> *automation_29;
LambdaAction<> *lambdaaction_33;
Automation<> *automation_30;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_8;
Automation<> *automation_31;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_9;
Automation<> *automation_32;
LambdaCondition<> *lambdacondition_9;
IfAction<> *ifaction_9;
LambdaAction<> *lambdaaction_34;
LambdaAction<> *lambdaaction_35;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, OUTPUT, 255, INPUT, 255, OUTPUT, 255, 255, 255, 255, 255, 255, 255, INPUT, 255, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 0, 255, 255, 255, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board: nodemcu
  //   framework:
  //     version: 3.0.2
  //     source: ~3.30002.0
  //     platform_version: platformio/espressif8266 @ 3.2.0
  //   restore_from_flash: false
  //   early_pin_init: true
  //   board_flash_mode: dout
  esphome::esp8266::setup_preferences();
  // esphome:
  //   name: cuisineesp
  //   build_path: .esphome/build/cuisineesp
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2022.12.8
  App.pre_setup("cuisineesp", __DATE__ ", " __TIME__, false);
  // display:
  // binary_sensor:
  // switch:
  // text_sensor:
  // light:
  // logger:
  //   baud_rate: 0
  //   id: logger_logger
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(0, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: !secret 'ip_static_1'
  //     gateway: 192.168.1.1
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   ap:
  //     ssid: Test-Nodemcu Fallback Hotspot
  //     password: VBYqL086beIb
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   networks:
  //   - ssid: !secret 'wifi_ssid'
  //     password: !secret 'wifi_password'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: 192.168.1.125
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.1.125");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("OIKEN-ac07b7");
  wifi_wifiap_2.set_password("227-58c-f98");
  wifi_wifiap_2.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 1, 125),
      .gateway = network::IPAddress(192, 168, 1, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Test-Nodemcu Fallback Hotspot");
  wifi_wifiap.set_password("VBYqL086beIb");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   password: 2933efd587609f09d4a9dd9d0ac38e59
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("2933efd587609f09d4a9dd9d0ac38e59");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: PmQUYG9wOaaqZ7GBoCELaEpCqvV/6KtEjPjiRE9tMLQ=
  //   services:
  //   - service: update_nextion
  //     then:
  //     - lambda: !lambda |-
  //         id(cuisinenx)->upload_tft();
  //       type_id: lambdaaction
  //     automation_id: automation
  //     trigger_id: api_userservicetrigger
  //     variables: {}
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_userservicetrigger = new api::UserServiceTrigger<>("update_nextion", {});
  api_apiserver->register_user_service(api_userservicetrigger);
  automation = new Automation<>(api_userservicetrigger);
  // sensor:
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // uart:
  //   id: uart_2
  //   rx_pin:
  //     number: 3
  //     mode:
  //       input: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin
  //   tx_pin:
  //     number: 1
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //   baud_rate: 9600
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_2 = new uart::ESP8266UartComponent();
  uart_2->set_component_source("uart");
  App.register_component(uart_2);
  uart_2->set_baud_rate(9600);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(1);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_2->set_tx_pin(esphome_esp8266_esp8266gpiopin_2);
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(3);
  esphome_esp8266_esp8266gpiopin->set_inverted(false);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_INPUT);
  uart_2->set_rx_pin(esphome_esp8266_esp8266gpiopin);
  uart_2->set_rx_buffer_size(256);
  uart_2->set_stop_bits(1);
  uart_2->set_data_bits(8);
  uart_2->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // display.nextion:
  //   platform: nextion
  //   id: cuisinenx
  //   uart_id: uart_2
  //   tft_url: http:192.168.1.124:8123/local/tft/cuisinenx.tft
  //   lambda: !lambda "it.set_component_value(\"temperature.temp\", (id(temp).state)*10);\n
  //     it.set_component_value(\"temperature.humid\", (id(humid).state)*10);\n\n    "
  //   brightness: 1.0
  //   auto_wake_on_touch: true
  //   update_interval: 5s
  cuisinenx = new nextion::Nextion();
  cuisinenx->set_update_interval(5000);
  cuisinenx->set_component_source("nextion.display");
  App.register_component(cuisinenx);
  cuisinenx->set_uart_parent(uart_2);
  cuisinenx->set_brightness(1.0f);
  // sensor.dht:
  //   platform: dht
  //   pin:
  //     number: 13
  //     mode:
  //       input: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_3
  //   model: DHT11
  //   temperature:
  //     name: Temperature
  //     id: temp
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Humidite
  //     id: humid
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: humidity
  //     state_class: measurement
  //   update_interval: 30s
  //   id: dht_dht
  dht_dht = new dht::DHT();
  dht_dht->set_update_interval(30000);
  dht_dht->set_component_source("dht.sensor");
  App.register_component(dht_dht);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(13);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_INPUT);
  dht_dht->set_pin(esphome_esp8266_esp8266gpiopin_3);
  temp = new sensor::Sensor();
  App.register_sensor(temp);
  temp->set_name("Temperature");
  temp->set_disabled_by_default(false);
  temp->set_device_class("temperature");
  temp->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  temp->set_unit_of_measurement("\302\260C");
  temp->set_accuracy_decimals(1);
  temp->set_force_update(false);
  dht_dht->set_temperature_sensor(temp);
  humid = new sensor::Sensor();
  App.register_sensor(humid);
  humid->set_name("Humidite");
  humid->set_disabled_by_default(false);
  humid->set_device_class("humidity");
  humid->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  humid->set_unit_of_measurement("%");
  humid->set_accuracy_decimals(0);
  humid->set_force_update(false);
  dht_dht->set_humidity_sensor(humid);
  dht_dht->set_dht_model(dht::DHT_MODEL_DHT11);
  // sensor.homeassistant:
  //   platform: homeassistant
  //   entity_id: light.planfond
  //   id: cuisine_planfond_bright
  //   attribute: brightness
  //   on_value:
  //   - then:
  //     - lambda: !lambda |-
  //         id(text_bright)->execute();
  //       type_id: lambdaaction_2
  //     automation_id: automation_2
  //     trigger_id: sensor_sensorstatetrigger
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   internal: true
  //   name: cuisine_planfond_bright
  cuisine_planfond_bright = new homeassistant::HomeassistantSensor();
  App.register_sensor(cuisine_planfond_bright);
  cuisine_planfond_bright->set_name("cuisine_planfond_bright");
  cuisine_planfond_bright->set_disabled_by_default(false);
  cuisine_planfond_bright->set_internal(true);
  cuisine_planfond_bright->set_accuracy_decimals(1);
  cuisine_planfond_bright->set_force_update(false);
  sensor_sensorstatetrigger = new sensor::SensorStateTrigger(cuisine_planfond_bright);
  automation_2 = new Automation<float>(sensor_sensorstatetrigger);
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   entity_id: light.planfond
  //   id: cuisine_planfond_state
  //   on_state:
  //   - then:
  //     - lambda: !lambda |-
  //         id(text_bright)->execute();
  //       type_id: lambdaaction_3
  //     automation_id: automation_3
  //     trigger_id: binary_sensor_statetrigger
  //   disabled_by_default: false
  //   internal: true
  //   name: cuisine_planfond_state
  cuisine_planfond_state = new homeassistant::HomeassistantBinarySensor();
  App.register_binary_sensor(cuisine_planfond_state);
  cuisine_planfond_state->set_name("cuisine_planfond_state");
  cuisine_planfond_state->set_disabled_by_default(false);
  cuisine_planfond_state->set_internal(true);
  binary_sensor_statetrigger = new binary_sensor::StateTrigger(cuisine_planfond_state);
  automation_3 = new Automation<bool>(binary_sensor_statetrigger);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 1
  //   id: page0back
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_back)->execute(id(current_page_int));
  //       type_id: lambdaaction_4
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_5
  //     automation_id: automation_4
  //     trigger_id: binary_sensor_presstrigger
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page0back
  //   internal: true
  page0back = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page0back);
  page0back->set_name("page0back");
  page0back->set_disabled_by_default(false);
  page0back->set_internal(true);
  binary_sensor_presstrigger = new binary_sensor::PressTrigger(page0back);
  automation_4 = new Automation<>(binary_sensor_presstrigger);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 2
  //   id: page0next
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_next)->execute(id(current_page_int));
  //       type_id: lambdaaction_6
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_7
  //     automation_id: automation_5
  //     trigger_id: binary_sensor_presstrigger_2
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page0next
  //   internal: true
  page0next = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page0next);
  page0next->set_name("page0next");
  page0next->set_disabled_by_default(false);
  page0next->set_internal(true);
  binary_sensor_presstrigger_2 = new binary_sensor::PressTrigger(page0next);
  automation_5 = new Automation<>(binary_sensor_presstrigger_2);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 10
  //   id: page1back
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_back)->execute(id(current_page_int));
  //       type_id: lambdaaction_8
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_9
  //     automation_id: automation_6
  //     trigger_id: binary_sensor_presstrigger_3
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page1back
  //   internal: true
  page1back = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page1back);
  page1back->set_name("page1back");
  page1back->set_disabled_by_default(false);
  page1back->set_internal(true);
  binary_sensor_presstrigger_3 = new binary_sensor::PressTrigger(page1back);
  automation_6 = new Automation<>(binary_sensor_presstrigger_3);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 9
  //   id: page1next
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_next)->execute(id(current_page_int));
  //       type_id: lambdaaction_10
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_11
  //     automation_id: automation_7
  //     trigger_id: binary_sensor_presstrigger_4
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page1next
  //   internal: true
  page1next = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page1next);
  page1next->set_name("page1next");
  page1next->set_disabled_by_default(false);
  page1next->set_internal(true);
  binary_sensor_presstrigger_4 = new binary_sensor::PressTrigger(page1next);
  automation_7 = new Automation<>(binary_sensor_presstrigger_4);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 11
  //   id: page1home
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(cuisinenx).send_command_printf("page home");
  //         id(current_page_int) = 0;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_12
  //     automation_id: automation_8
  //     trigger_id: binary_sensor_presstrigger_5
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page1home
  //   internal: true
  page1home = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page1home);
  page1home->set_name("page1home");
  page1home->set_disabled_by_default(false);
  page1home->set_internal(true);
  binary_sensor_presstrigger_5 = new binary_sensor::PressTrigger(page1home);
  automation_8 = new Automation<>(binary_sensor_presstrigger_5);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 2
  //   component_id: 1
  //   id: page2back
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_back)->execute(id(current_page_int));
  //       type_id: lambdaaction_13
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_14
  //     automation_id: automation_9
  //     trigger_id: binary_sensor_presstrigger_6
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page2back
  //   internal: true
  page2back = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page2back);
  page2back->set_name("page2back");
  page2back->set_disabled_by_default(false);
  page2back->set_internal(true);
  binary_sensor_presstrigger_6 = new binary_sensor::PressTrigger(page2back);
  automation_9 = new Automation<>(binary_sensor_presstrigger_6);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 2
  //   component_id: 2
  //   id: page2next
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_next)->execute(id(current_page_int));
  //       type_id: lambdaaction_15
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_16
  //     automation_id: automation_10
  //     trigger_id: binary_sensor_presstrigger_7
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page2next
  //   internal: true
  page2next = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page2next);
  page2next->set_name("page2next");
  page2next->set_disabled_by_default(false);
  page2next->set_internal(true);
  binary_sensor_presstrigger_7 = new binary_sensor::PressTrigger(page2next);
  automation_10 = new Automation<>(binary_sensor_presstrigger_7);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 2
  //   component_id: 3
  //   id: page2home
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(cuisinenx).send_command_printf("page home");
  //         id(current_page_int) = 0;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_17
  //     automation_id: automation_11
  //     trigger_id: binary_sensor_presstrigger_8
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page2home
  //   internal: true
  page2home = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page2home);
  page2home->set_name("page2home");
  page2home->set_disabled_by_default(false);
  page2home->set_internal(true);
  binary_sensor_presstrigger_8 = new binary_sensor::PressTrigger(page2home);
  automation_11 = new Automation<>(binary_sensor_presstrigger_8);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 3
  //   component_id: 5
  //   id: page3back
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_back)->execute(id(current_page_int));
  //       type_id: lambdaaction_18
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_19
  //     automation_id: automation_12
  //     trigger_id: binary_sensor_presstrigger_9
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page3back
  //   internal: true
  page3back = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page3back);
  page3back->set_name("page3back");
  page3back->set_disabled_by_default(false);
  page3back->set_internal(true);
  binary_sensor_presstrigger_9 = new binary_sensor::PressTrigger(page3back);
  automation_12 = new Automation<>(binary_sensor_presstrigger_9);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 3
  //   component_id: 6
  //   id: page3next
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(page_next)->execute(id(current_page_int));
  //       type_id: lambdaaction_20
  //     - logger.log:
  //         level: INFO
  //         format: page %i, %s
  //         args:
  //         - !lambda |-
  //           id(current_page_int)
  //         - !lambda |-
  //           id(page).c_str()
  //         tag: main
  //       type_id: lambdaaction_21
  //     automation_id: automation_13
  //     trigger_id: binary_sensor_presstrigger_10
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page3next
  //   internal: true
  page3next = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page3next);
  page3next->set_name("page3next");
  page3next->set_disabled_by_default(false);
  page3next->set_internal(true);
  binary_sensor_presstrigger_10 = new binary_sensor::PressTrigger(page3next);
  automation_13 = new Automation<>(binary_sensor_presstrigger_10);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 3
  //   component_id: 7
  //   id: page3home
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - lambda: !lambda |-
  //         id(cuisinenx).send_command_printf("page home");
  //         id(current_page_int) = 0;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_22
  //     automation_id: automation_14
  //     trigger_id: binary_sensor_presstrigger_11
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: page3home
  //   internal: true
  page3home = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(page3home);
  page3home->set_name("page3home");
  page3home->set_disabled_by_default(false);
  page3home->set_internal(true);
  binary_sensor_presstrigger_11 = new binary_sensor::PressTrigger(page3home);
  automation_14 = new Automation<>(binary_sensor_presstrigger_11);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 4
  //   component_name: home.b0
  //   id: home_b0
  //   on_click:
  //   - then:
  //     - lambda: !lambda |-
  //         id(planfond_state) = !id(planfond_state);
  //         id(update_planfond_state_from_home)->execute();
  //       type_id: lambdaaction_23
  //     - logger.log:
  //         level: INFO
  //         format: planfond_state %i
  //         args:
  //         - !lambda |-
  //           id(planfond_state)
  //         tag: main
  //       type_id: lambdaaction_24
  //     automation_id: automation_15
  //     trigger_id: binary_sensor_clicktrigger
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: home_b0
  //   internal: true
  home_b0 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(home_b0);
  home_b0->set_name("home_b0");
  home_b0->set_disabled_by_default(false);
  home_b0->set_internal(true);
  binary_sensor_clicktrigger = new binary_sensor::ClickTrigger(home_b0, 50, 350);
  automation_15 = new Automation<>(binary_sensor_clicktrigger);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 12
  //   component_name: planfond.b0
  //   id: planfond_b0
  //   update_interval: 1s
  //   on_click:
  //   - then:
  //     - lambda: !lambda |-
  //         id(planfond_state) = !id(planfond_state);
  //         id(update_planfond_state)->execute();
  //       type_id: lambdaaction_25
  //     - logger.log:
  //         level: INFO
  //         format: planfond_state %i
  //         args:
  //         - !lambda |-
  //           id(planfond_state)
  //         tag: main
  //       type_id: lambdaaction_26
  //     automation_id: automation_16
  //     trigger_id: binary_sensor_clicktrigger_2
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: planfond_b0
  //   internal: true
  planfond_b0 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(planfond_b0);
  planfond_b0->set_name("planfond_b0");
  planfond_b0->set_disabled_by_default(false);
  planfond_b0->set_internal(true);
  binary_sensor_clicktrigger_2 = new binary_sensor::ClickTrigger(planfond_b0, 50, 350);
  automation_16 = new Automation<>(binary_sensor_clicktrigger_2);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 2
  //   id: bright_minus
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_planfond_state).state;
  //           type_id: lambdacondition
  //         then:
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return stoi(id(bright_text).state) > 13;
  //               type_id: lambdacondition_2
  //             then:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness_step: '-13'
  //                   transition: '2'
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction
  //           type_id: ifaction
  //       type_id: ifaction_2
  //     automation_id: automation_17
  //     trigger_id: binary_sensor_clicktrigger_3
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_minus
  //   internal: true
  bright_minus = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_minus);
  bright_minus->set_name("bright_minus");
  bright_minus->set_disabled_by_default(false);
  bright_minus->set_internal(true);
  binary_sensor_clicktrigger_3 = new binary_sensor::ClickTrigger(bright_minus, 50, 350);
  automation_17 = new Automation<>(binary_sensor_clicktrigger_3);
  lambdacondition = new LambdaCondition<>([=]() -> bool {
      #line 209 "/config/esphome/binary_sensor.yaml"
      return cuisine_planfond_state->state;
  });
  ifaction_2 = new IfAction<>(lambdacondition);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 3
  //   id: bright_plus
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_planfond_state).state;
  //           type_id: lambdacondition_3
  //         then:
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return stoi(id(bright_text).state) > 255;
  //               type_id: lambdacondition_4
  //             then:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness: '255'
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction_2
  //             else:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness_step: '+13'
  //                   transition: '2'
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction_3
  //           type_id: ifaction_3
  //       type_id: ifaction_4
  //     automation_id: automation_18
  //     trigger_id: binary_sensor_clicktrigger_4
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_plus
  //   internal: true
  bright_plus = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_plus);
  bright_plus->set_name("bright_plus");
  bright_plus->set_disabled_by_default(false);
  bright_plus->set_internal(true);
  binary_sensor_clicktrigger_4 = new binary_sensor::ClickTrigger(bright_plus, 50, 350);
  automation_18 = new Automation<>(binary_sensor_clicktrigger_4);
  lambdacondition_3 = new LambdaCondition<>([=]() -> bool {
      #line 232 "/config/esphome/binary_sensor.yaml"
      return cuisine_planfond_state->state;
  });
  ifaction_4 = new IfAction<>(lambdacondition_3);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 5
  //   id: bright_25
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return true;
  //           type_id: lambdacondition_5
  //         then:
  //         - homeassistant.service:
  //             service: light.turn_on
  //             data:
  //               entity_id: light.planfond
  //               brightness: '64'
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction_4
  //       type_id: ifaction_5
  //     automation_id: automation_19
  //     trigger_id: binary_sensor_presstrigger_12
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_25
  //   internal: true
  bright_25 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_25);
  bright_25->set_name("bright_25");
  bright_25->set_disabled_by_default(false);
  bright_25->set_internal(true);
  binary_sensor_presstrigger_12 = new binary_sensor::PressTrigger(bright_25);
  automation_19 = new Automation<>(binary_sensor_presstrigger_12);
  lambdacondition_5 = new LambdaCondition<>([=]() -> bool {
      #line 264 "/config/esphome/binary_sensor.yaml"
      return true;
  });
  ifaction_5 = new IfAction<>(lambdacondition_5);
  api_homeassistantservicecallaction_4 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_4->set_service("light.turn_on");
  api_homeassistantservicecallaction_4->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_4->add_data("brightness", "64");
  ifaction_5->add_then({api_homeassistantservicecallaction_4});
  automation_19->add_actions({ifaction_5});
  bright_25->set_update_interval(4294967295UL);
  bright_25->set_component_source("nextion.binary_sensor");
  App.register_component(bright_25);
  cuisinenx->register_touch_component(bright_25);
  bright_25->set_component_id(5);
  bright_25->set_page_id(1);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 6
  //   id: bright_50
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return true;
  //           type_id: lambdacondition_6
  //         then:
  //         - homeassistant.service:
  //             service: light.turn_on
  //             data:
  //               entity_id: light.planfond
  //               brightness: '128'
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction_5
  //       type_id: ifaction_6
  //     automation_id: automation_20
  //     trigger_id: binary_sensor_presstrigger_13
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_50
  //   internal: true
  bright_50 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_50);
  bright_50->set_name("bright_50");
  bright_50->set_disabled_by_default(false);
  bright_50->set_internal(true);
  binary_sensor_presstrigger_13 = new binary_sensor::PressTrigger(bright_50);
  automation_20 = new Automation<>(binary_sensor_presstrigger_13);
  lambdacondition_6 = new LambdaCondition<>([=]() -> bool {
      #line 281 "/config/esphome/binary_sensor.yaml"
      return true;
  });
  ifaction_6 = new IfAction<>(lambdacondition_6);
  api_homeassistantservicecallaction_5 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_5->set_service("light.turn_on");
  api_homeassistantservicecallaction_5->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_5->add_data("brightness", "128");
  ifaction_6->add_then({api_homeassistantservicecallaction_5});
  automation_20->add_actions({ifaction_6});
  bright_50->set_update_interval(4294967295UL);
  bright_50->set_component_source("nextion.binary_sensor");
  App.register_component(bright_50);
  cuisinenx->register_touch_component(bright_50);
  bright_50->set_component_id(6);
  bright_50->set_page_id(1);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 7
  //   id: bright_75
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return true;
  //           type_id: lambdacondition_7
  //         then:
  //         - homeassistant.service:
  //             service: light.turn_on
  //             data:
  //               entity_id: light.planfond
  //               brightness: '192'
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction_6
  //       type_id: ifaction_7
  //     automation_id: automation_21
  //     trigger_id: binary_sensor_presstrigger_14
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_75
  //   internal: true
  bright_75 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_75);
  bright_75->set_name("bright_75");
  bright_75->set_disabled_by_default(false);
  bright_75->set_internal(true);
  binary_sensor_presstrigger_14 = new binary_sensor::PressTrigger(bright_75);
  automation_21 = new Automation<>(binary_sensor_presstrigger_14);
  lambdacondition_7 = new LambdaCondition<>([=]() -> bool {
      #line 298 "/config/esphome/binary_sensor.yaml"
      return true;
  });
  ifaction_7 = new IfAction<>(lambdacondition_7);
  api_homeassistantservicecallaction_6 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_6->set_service("light.turn_on");
  api_homeassistantservicecallaction_6->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_6->add_data("brightness", "192");
  ifaction_7->add_then({api_homeassistantservicecallaction_6});
  automation_21->add_actions({ifaction_7});
  bright_75->set_update_interval(4294967295UL);
  bright_75->set_component_source("nextion.binary_sensor");
  App.register_component(bright_75);
  cuisinenx->register_touch_component(bright_75);
  bright_75->set_component_id(7);
  bright_75->set_page_id(1);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 8
  //   id: bright_100
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return true;
  //           type_id: lambdacondition_8
  //         then:
  //         - homeassistant.service:
  //             service: light.turn_on
  //             data:
  //               entity_id: light.planfond
  //               brightness: '255'
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction_7
  //       type_id: ifaction_8
  //     automation_id: automation_22
  //     trigger_id: binary_sensor_clicktrigger_5
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: bright_100
  //   internal: true
  bright_100 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bright_100);
  bright_100->set_name("bright_100");
  bright_100->set_disabled_by_default(false);
  bright_100->set_internal(true);
  binary_sensor_clicktrigger_5 = new binary_sensor::ClickTrigger(bright_100, 50, 350);
  automation_22 = new Automation<>(binary_sensor_clicktrigger_5);
  lambdacondition_8 = new LambdaCondition<>([=]() -> bool {
      #line 315 "/config/esphome/binary_sensor.yaml"
      return true;
  });
  ifaction_8 = new IfAction<>(lambdacondition_8);
  api_homeassistantservicecallaction_7 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_7->set_service("light.turn_on");
  api_homeassistantservicecallaction_7->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_7->add_data("brightness", "255");
  ifaction_8->add_then({api_homeassistantservicecallaction_7});
  automation_22->add_actions({ifaction_8});
  bright_100->set_update_interval(4294967295UL);
  bright_100->set_component_source("nextion.binary_sensor");
  App.register_component(bright_100);
  cuisinenx->register_touch_component(bright_100);
  bright_100->set_component_id(8);
  bright_100->set_page_id(1);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 7
  //   component_name: page1.r0
  //   id: bar_minuterie
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - logger.log:
  //         format: bar minuterie
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_27
  //     automation_id: automation_23
  //     trigger_id: binary_sensor_presstrigger_15
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: bar_minuterie
  //   internal: true
  bar_minuterie = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bar_minuterie);
  bar_minuterie->set_name("bar_minuterie");
  bar_minuterie->set_disabled_by_default(false);
  bar_minuterie->set_internal(true);
  binary_sensor_presstrigger_15 = new binary_sensor::PressTrigger(bar_minuterie);
  automation_23 = new Automation<>(binary_sensor_presstrigger_15);
  lambdaaction_27 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "bar minuterie");
  });
  automation_23->add_actions({lambdaaction_27});
  bar_minuterie->set_update_interval(1000);
  bar_minuterie->set_component_source("nextion.binary_sensor");
  App.register_component(bar_minuterie);
  cuisinenx->register_touch_component(bar_minuterie);
  bar_minuterie->set_component_id(7);
  bar_minuterie->set_page_id(1);
  bar_minuterie->set_variable_name("page1.r0", "page1.r0.val");
  bar_minuterie->set_visible(true);
  cuisinenx->register_binarysensor_component(bar_minuterie);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 7
  //   component_name: page1.r1
  //   id: bar_on_off
  //   update_interval: 1s
  //   on_press:
  //   - then:
  //     - logger.log:
  //         format: bar on_off
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_28
  //     automation_id: automation_24
  //     trigger_id: binary_sensor_presstrigger_16
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: bar_on_off
  //   internal: true
  bar_on_off = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bar_on_off);
  bar_on_off->set_name("bar_on_off");
  bar_on_off->set_disabled_by_default(false);
  bar_on_off->set_internal(true);
  binary_sensor_presstrigger_16 = new binary_sensor::PressTrigger(bar_on_off);
  automation_24 = new Automation<>(binary_sensor_presstrigger_16);
  lambdaaction_28 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "bar on_off");
  });
  automation_24->add_actions({lambdaaction_28});
  bar_on_off->set_update_interval(1000);
  bar_on_off->set_component_source("nextion.binary_sensor");
  App.register_component(bar_on_off);
  cuisinenx->register_touch_component(bar_on_off);
  bar_on_off->set_component_id(7);
  bar_on_off->set_page_id(1);
  bar_on_off->set_variable_name("page1.r1", "page1.r1.val");
  bar_on_off->set_visible(true);
  cuisinenx->register_binarysensor_component(bar_on_off);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 1
  //   component_id: 5
  //   component_name: page1.bt1
  //   id: bar_light
  //   update_interval: 1s
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: bar_light
  //   internal: true
  bar_light = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(bar_light);
  bar_light->set_name("bar_light");
  bar_light->set_disabled_by_default(false);
  bar_light->set_internal(true);
  bar_light->set_update_interval(1000);
  bar_light->set_component_source("nextion.binary_sensor");
  App.register_component(bar_light);
  cuisinenx->register_touch_component(bar_light);
  bar_light->set_component_id(5);
  bar_light->set_page_id(1);
  bar_light->set_variable_name("page1.bt1", "page1.bt1.val");
  bar_light->set_visible(true);
  cuisinenx->register_binarysensor_component(bar_light);
  // script:
  //   - id: page_next
  //     parameters:
  //       p: int
  //     then:
  //     - lambda: !lambda |-
  //         int maxpage = id(max_page);
  //         p = p + 1;
  //         if (p > maxpage-1) {
  //           p = 0;
  //         }
  //         id(page) = (id(current_page_list)[p].c_str());
  //         id(cuisinenx).send_command_printf("page %s", id(page).c_str());
  //         id(current_page_int) = p;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_29
  //     trigger_id: trigger
  //     automation_id: automation_25
  //     mode: single
  //   - id: page_back
  //     parameters:
  //       p: int
  //     then:
  //     - lambda: !lambda |-
  //         int maxpage = id(max_page);
  //         p = p - 1;
  //         if (p < 0) {
  //           p = maxpage-1;
  //         }
  //         id(page) = (id(current_page_list)[p].c_str());
  //         id(cuisinenx).send_command_printf("page %s", id(page).c_str());
  //         id(current_page_int) = p;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_30
  //     trigger_id: trigger_2
  //     automation_id: automation_26
  //     mode: single
  //   - id: update_planfond_state
  //     then:
  //     - lambda: !lambda |-
  //         if(id(planfond_state) == 0){
  //           id(cuisinenx).send_command_printf("planfond.b0.pic=1");
  //           id(turn_off_planfond)->execute();
  //         }
  //         if(id(planfond_state) == 1){
  //           id(cuisinenx).send_command_printf("planfond.b0.pic=2");
  //           id(turn_on_planfond)->execute();
  //         }
  //       type_id: lambdaaction_31
  //     trigger_id: trigger_3
  //     automation_id: automation_27
  //     mode: single
  //     parameters: {}
  //   - id: update_planfond_state_from_home
  //     then:
  //     - lambda: !lambda |-
  //         if(id(planfond_state) == 0){
  //           id(planfond_state) = 0;
  //           id(cuisinenx).send_command_printf("home.b0.pic=1");
  //           id(turn_off_planfond)->execute();
  //         }
  //         if(id(planfond_state) == 1){
  //           id(planfond_state) = 1;
  //           id(cuisinenx).send_command_printf("home.b0.pic=2");
  //           id(turn_on_planfond)->execute();
  //         }
  //       type_id: lambdaaction_32
  //     trigger_id: trigger_4
  //     automation_id: automation_28
  //     mode: single
  //     parameters: {}
  //   - id: update_all
  //     then:
  //     - lambda: !lambda |-
  //         if (id(current_page_int)==0){
  //             id(planfond_state) = id(cuisine_planfond_state).state;
  //             id(update_planfond_state_from_home)->execute();
  //   
  //           }
  //           if (id(current_page_int)==1){
  //             id(planfond_state) = id(cuisine_planfond_state).state;
  //             id(update_planfond_state)->execute();
  //   
  //           }
  //           if (id(current_page_int)==2){
  //   
  //           }
  //           if (id(current_page_int)==3){
  //   
  //           }
  //       type_id: lambdaaction_33
  //     trigger_id: trigger_5
  //     automation_id: automation_29
  //     mode: single
  //     parameters: {}
  //   - id: turn_on_planfond
  //     then:
  //     - homeassistant.service:
  //         service: light.turn_on
  //         data:
  //           entity_id: light.planfond
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_8
  //     trigger_id: trigger_6
  //     automation_id: automation_30
  //     mode: single
  //     parameters: {}
  //   - id: turn_off_planfond
  //     then:
  //     - homeassistant.service:
  //         service: light.turn_off
  //         data:
  //           entity_id: light.planfond
  //         id: api_apiserver
  //         data_template: {}
  //         variables: {}
  //       type_id: api_homeassistantservicecallaction_9
  //     trigger_id: trigger_7
  //     automation_id: automation_31
  //     mode: single
  //     parameters: {}
  //   - id: text_bright
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_planfond_state).state;
  //           type_id: lambdacondition_9
  //         then:
  //         - lambda: !lambda |-
  //             id(cuisinenx).set_component_text_printf("planfond.bright","%i %%", int(id(cuisine_planfond_bright).state)*100/255);
  //           type_id: lambdaaction_34
  //         else:
  //         - lambda: !lambda |-
  //             id(cuisinenx).set_component_text_printf("planfond.bright", "0%%");
  //           type_id: lambdaaction_35
  //       type_id: ifaction_9
  //     trigger_id: trigger_8
  //     automation_id: automation_32
  //     mode: single
  //     parameters: {}
  page_next = new script::SingleScript<int>();
  page_next->set_name("page_next");
  page_back = new script::SingleScript<int>();
  page_back->set_name("page_back");
  update_planfond_state = new script::SingleScript<>();
  update_planfond_state->set_name("update_planfond_state");
  update_planfond_state_from_home = new script::SingleScript<>();
  update_planfond_state_from_home->set_name("update_planfond_state_from_home");
  update_all = new script::SingleScript<>();
  update_all->set_name("update_all");
  turn_on_planfond = new script::SingleScript<>();
  turn_on_planfond->set_name("turn_on_planfond");
  turn_off_planfond = new script::SingleScript<>();
  turn_off_planfond->set_name("turn_off_planfond");
  text_bright = new script::SingleScript<>();
  text_bright->set_name("text_bright");
  automation_25 = new Automation<int>(page_next);
  // switch.template:
  //   platform: template
  //   id: switch_planfond
  //   name: switch planfond
  //   lambda: !lambda |-
  //     if (id(planfond_state)) {
  //       return true;
  //     } else {
  //       return false;
  //     }
  //   turn_on_action:
  //     then:
  //     - lambda: !lambda |-
  //         id(planfond_state) = true;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_36
  //     trigger_id: trigger_9
  //     automation_id: automation_33
  //   turn_off_action:
  //     then:
  //     - lambda: !lambda |-
  //         id(planfond_state) = false;
  //         id(update_all)->execute();
  //       type_id: lambdaaction_37
  //     trigger_id: trigger_10
  //     automation_id: automation_34
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  switch_planfond = new template_::TemplateSwitch();
  App.register_switch(switch_planfond);
  switch_planfond->set_name("switch planfond");
  switch_planfond->set_disabled_by_default(false);
  switch_planfond->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  switch_planfond->set_component_source("template.switch");
  App.register_component(switch_planfond);
  // text_sensor.template:
  //   platform: template
  //   id: bright_text
  //   name: bright
  //   lambda: !lambda |-
  //     std::string text = "";
  //     text = to_string(int(id(cuisine_planfond_bright).state));
  //     return {text};
  //   update_interval: 5s
  //   disabled_by_default: false
  bright_text = new template_::TemplateTextSensor();
  App.register_text_sensor(bright_text);
  bright_text->set_name("bright");
  bright_text->set_disabled_by_default(false);
  bright_text->set_update_interval(5000);
  bright_text->set_component_source("template.text_sensor");
  App.register_component(bright_text);
  bright_text->set_template([=]() -> optional<std::string> {
      #line 6 "/config/esphome/text_sensor.yaml"
      std::string text = "";
      text = to_string(int(cuisine_planfond_bright->state));
      return {text};
  });
  // light.binary:
  //   platform: binary
  //   name: bar
  //   output: bar_output
  //   disabled_by_default: false
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   output_id: binary_binarylightoutput
  binary_binarylightoutput = new binary::BinaryLightOutput();
  light_lightstate = new light::LightState(binary_binarylightoutput);
  App.register_light(light_lightstate);
  light_lightstate->set_component_source("light");
  App.register_component(light_lightstate);
  light_lightstate->set_name("bar");
  light_lightstate->set_disabled_by_default(false);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->add_effects({});
  // output:
  // output.gpio:
  //   platform: gpio
  //   id: bar_output
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_4
  bar_output = new gpio::GPIOBinaryOutput();
  bar_output->set_component_source("gpio.output");
  App.register_component(bar_output);
  esphome_esp8266_esp8266gpiopin_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_4->set_pin(5);
  esphome_esp8266_esp8266gpiopin_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  bar_output->set_pin(esphome_esp8266_esp8266gpiopin_4);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   {}
  lambdaaction = new LambdaAction<>([=]() -> void {
      #line 27 "/config/esphome/main.yaml"
      cuisinenx->upload_tft();
  });
  automation->add_actions({lambdaaction});
  api_apiserver->set_noise_psk({62, 100, 20, 96, 111, 112, 57, 166, 170, 103, 177, 129, 160, 33, 11, 104, 74, 66, 170, 245, 127, 232, 171, 68, 140, 248, 226, 68, 79, 109, 48, 180});
  cuisinenx->set_writer([=](nextion::Nextion & it) -> void {
      #line 58 "/config/esphome/main.yaml"
      it.set_component_value("temperature.temp", (temp->state)*10);
      it.set_component_value("temperature.humid", (humid->state)*10);
      
          
  });
  cuisinenx->set_tft_url("http://192.168.1.124:8123/local/tft/cuisinenx.tft");
  cuisinenx->set_auto_wake_on_touch_internal(true);
  lambdaaction_2 = new LambdaAction<float>([=](float x) -> void {
      #line 20 "/config/esphome/sensor.yaml"
      text_bright->execute();
  });
  automation_2->add_actions({lambdaaction_2});
  cuisine_planfond_bright->set_component_source("homeassistant.sensor");
  App.register_component(cuisine_planfond_bright);
  cuisine_planfond_bright->set_entity_id("light.planfond");
  cuisine_planfond_bright->set_attribute("brightness");
  lambdaaction_3 = new LambdaAction<bool>([=](bool x) -> void {
      #line 9 "/config/esphome/binary_sensor.yaml"
      text_bright->execute();
  });
  automation_3->add_actions({lambdaaction_3});
  cuisine_planfond_state->set_component_source("homeassistant.binary_sensor");
  App.register_component(cuisine_planfond_state);
  cuisine_planfond_state->set_entity_id("light.planfond");
  lambdacondition_2 = new LambdaCondition<>([=]() -> bool {
      #line 213 "/config/esphome/binary_sensor.yaml"
      return stoi(bright_text->state) > 13;
  });
  ifaction = new IfAction<>(lambdacondition_2);
  api_homeassistantservicecallaction = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction->set_service("light.turn_on");
  api_homeassistantservicecallaction->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction->add_data("brightness_step", "-13");
  api_homeassistantservicecallaction->add_data("transition", "2");
  ifaction->add_then({api_homeassistantservicecallaction});
  ifaction_2->add_then({ifaction});
  automation_17->add_actions({ifaction_2});
  bright_minus->set_update_interval(4294967295UL);
  bright_minus->set_component_source("nextion.binary_sensor");
  App.register_component(bright_minus);
  cuisinenx->register_touch_component(bright_minus);
  bright_minus->set_component_id(2);
  bright_minus->set_page_id(1);
  lambdacondition_4 = new LambdaCondition<>([=]() -> bool {
      #line 236 "/config/esphome/binary_sensor.yaml"
      return stoi(bright_text->state) > 255;
  });
  ifaction_3 = new IfAction<>(lambdacondition_4);
  api_homeassistantservicecallaction_2 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_2->set_service("light.turn_on");
  api_homeassistantservicecallaction_2->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_2->add_data("brightness", "255");
  ifaction_3->add_then({api_homeassistantservicecallaction_2});
  api_homeassistantservicecallaction_3 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_3->set_service("light.turn_on");
  api_homeassistantservicecallaction_3->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_3->add_data("brightness_step", "+13");
  api_homeassistantservicecallaction_3->add_data("transition", "2");
  ifaction_3->add_else({api_homeassistantservicecallaction_3});
  ifaction_4->add_then({ifaction_3});
  automation_18->add_actions({ifaction_4});
  bright_plus->set_update_interval(4294967295UL);
  bright_plus->set_component_source("nextion.binary_sensor");
  App.register_component(bright_plus);
  cuisinenx->register_touch_component(bright_plus);
  bright_plus->set_component_id(3);
  bright_plus->set_page_id(1);
  binary_binarylightoutput->set_output(bar_output);
  // globals:
  //   id: current_page_list
  //   type: std::vector<std::string>
  //   initial_value: '{"home", "planfond", "bar", "temperature"}'
  //   restore_value: false
  current_page_list = new globals::GlobalsComponent<std::vector<std::string>>({"home", "planfond", "bar", "temperature"});
  current_page_list->set_component_source("globals");
  App.register_component(current_page_list);
  // globals:
  //   id: current_page_int
  //   type: int
  //   initial_value: '0'
  //   restore_value: false
  current_page_int = new globals::GlobalsComponent<int>(0);
  current_page_int->set_component_source("globals");
  App.register_component(current_page_int);
  // globals:
  //   id: page
  //   type: std::string
  //   restore_value: false
  page = new globals::GlobalsComponent<std::string>();
  page->set_component_source("globals");
  App.register_component(page);
  // globals:
  //   id: max_page
  //   type: int
  //   initial_value: '4'
  //   restore_value: false
  max_page = new globals::GlobalsComponent<int>(4);
  max_page->set_component_source("globals");
  App.register_component(max_page);
  // globals:
  //   id: planfond_state
  //   type: bool
  //   initial_value: 'false'
  //   restore_value: false
  planfond_state = new globals::GlobalsComponent<bool>(false);
  planfond_state->set_component_source("globals");
  App.register_component(planfond_state);
  switch_planfond->set_state_lambda([=]() -> optional<bool> {
      #line 6 "/config/esphome/switch.yaml"
      if (planfond_state->value()) {
        return true;
      } else {
        return false;
      }
  });
  automation_34 = new Automation<>(switch_planfond->get_turn_off_trigger());
  lambdaaction_37 = new LambdaAction<>([=]() -> void {
      #line 17 "/config/esphome/switch.yaml"
      planfond_state->value() = false;
      update_all->execute();
  });
  automation_34->add_actions({lambdaaction_37});
  automation_33 = new Automation<>(switch_planfond->get_turn_on_trigger());
  lambdaaction_36 = new LambdaAction<>([=]() -> void {
      #line 13 "/config/esphome/switch.yaml"
      planfond_state->value() = true;
      update_all->execute();
  });
  automation_33->add_actions({lambdaaction_36});
  switch_planfond->set_optimistic(false);
  switch_planfond->set_assumed_state(false);
  switch_planfond->set_restore_state(false);
  lambdaaction_4 = new LambdaAction<>([=]() -> void {
      #line 21 "/config/esphome/binary_sensor.yaml"
      page_back->execute(current_page_int->value());
  });
  lambdaaction_5 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_4->add_actions({lambdaaction_4, lambdaaction_5});
  page0back->set_update_interval(1000);
  page0back->set_component_source("nextion.binary_sensor");
  App.register_component(page0back);
  cuisinenx->register_touch_component(page0back);
  page0back->set_component_id(1);
  page0back->set_page_id(0);
  lambdaaction_6 = new LambdaAction<>([=]() -> void {
      #line 35 "/config/esphome/binary_sensor.yaml"
      page_next->execute(current_page_int->value());
  });
  lambdaaction_7 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_5->add_actions({lambdaaction_6, lambdaaction_7});
  page0next->set_update_interval(1000);
  page0next->set_component_source("nextion.binary_sensor");
  App.register_component(page0next);
  cuisinenx->register_touch_component(page0next);
  page0next->set_component_id(2);
  page0next->set_page_id(0);
  lambdaaction_8 = new LambdaAction<>([=]() -> void {
      #line 49 "/config/esphome/binary_sensor.yaml"
      page_back->execute(current_page_int->value());
  });
  lambdaaction_9 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_6->add_actions({lambdaaction_8, lambdaaction_9});
  page1back->set_update_interval(1000);
  page1back->set_component_source("nextion.binary_sensor");
  App.register_component(page1back);
  cuisinenx->register_touch_component(page1back);
  page1back->set_component_id(10);
  page1back->set_page_id(1);
  lambdaaction_10 = new LambdaAction<>([=]() -> void {
      #line 63 "/config/esphome/binary_sensor.yaml"
      page_next->execute(current_page_int->value());
  });
  lambdaaction_11 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_7->add_actions({lambdaaction_10, lambdaaction_11});
  page1next->set_update_interval(1000);
  page1next->set_component_source("nextion.binary_sensor");
  App.register_component(page1next);
  cuisinenx->register_touch_component(page1next);
  page1next->set_component_id(9);
  page1next->set_page_id(1);
  lambdaaction_12 = new LambdaAction<>([=]() -> void {
      #line 77 "/config/esphome/binary_sensor.yaml"
      cuisinenx->send_command_printf("page home");
      current_page_int->value() = 0;
      update_all->execute();
  });
  automation_8->add_actions({lambdaaction_12});
  page1home->set_update_interval(1000);
  page1home->set_component_source("nextion.binary_sensor");
  App.register_component(page1home);
  cuisinenx->register_touch_component(page1home);
  page1home->set_component_id(11);
  page1home->set_page_id(1);
  lambdaaction_13 = new LambdaAction<>([=]() -> void {
      #line 89 "/config/esphome/binary_sensor.yaml"
      page_back->execute(current_page_int->value());
  });
  lambdaaction_14 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_9->add_actions({lambdaaction_13, lambdaaction_14});
  page2back->set_update_interval(1000);
  page2back->set_component_source("nextion.binary_sensor");
  App.register_component(page2back);
  cuisinenx->register_touch_component(page2back);
  page2back->set_component_id(1);
  page2back->set_page_id(2);
  lambdaaction_15 = new LambdaAction<>([=]() -> void {
      #line 103 "/config/esphome/binary_sensor.yaml"
      page_next->execute(current_page_int->value());
  });
  lambdaaction_16 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_10->add_actions({lambdaaction_15, lambdaaction_16});
  page2next->set_update_interval(1000);
  page2next->set_component_source("nextion.binary_sensor");
  App.register_component(page2next);
  cuisinenx->register_touch_component(page2next);
  page2next->set_component_id(2);
  page2next->set_page_id(2);
  lambdaaction_17 = new LambdaAction<>([=]() -> void {
      #line 117 "/config/esphome/binary_sensor.yaml"
      cuisinenx->send_command_printf("page home");
      current_page_int->value() = 0;
      update_all->execute();
  });
  automation_11->add_actions({lambdaaction_17});
  page2home->set_update_interval(1000);
  page2home->set_component_source("nextion.binary_sensor");
  App.register_component(page2home);
  cuisinenx->register_touch_component(page2home);
  page2home->set_component_id(3);
  page2home->set_page_id(2);
  lambdaaction_18 = new LambdaAction<>([=]() -> void {
      #line 129 "/config/esphome/binary_sensor.yaml"
      page_back->execute(current_page_int->value());
  });
  lambdaaction_19 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_12->add_actions({lambdaaction_18, lambdaaction_19});
  page3back->set_update_interval(1000);
  page3back->set_component_source("nextion.binary_sensor");
  App.register_component(page3back);
  cuisinenx->register_touch_component(page3back);
  page3back->set_component_id(5);
  page3back->set_page_id(3);
  lambdaaction_20 = new LambdaAction<>([=]() -> void {
      #line 143 "/config/esphome/binary_sensor.yaml"
      page_next->execute(current_page_int->value());
  });
  lambdaaction_21 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "page %i, %s", current_page_int->value(), page->value().c_str());
  });
  automation_13->add_actions({lambdaaction_20, lambdaaction_21});
  page3next->set_update_interval(1000);
  page3next->set_component_source("nextion.binary_sensor");
  App.register_component(page3next);
  cuisinenx->register_touch_component(page3next);
  page3next->set_component_id(6);
  page3next->set_page_id(3);
  lambdaaction_22 = new LambdaAction<>([=]() -> void {
      #line 157 "/config/esphome/binary_sensor.yaml"
      cuisinenx->send_command_printf("page home");
      current_page_int->value() = 0;
      update_all->execute();
  });
  automation_14->add_actions({lambdaaction_22});
  page3home->set_update_interval(1000);
  page3home->set_component_source("nextion.binary_sensor");
  App.register_component(page3home);
  cuisinenx->register_touch_component(page3home);
  page3home->set_component_id(7);
  page3home->set_page_id(3);
  lambdaaction_23 = new LambdaAction<>([=]() -> void {
      #line 173 "/config/esphome/binary_sensor.yaml"
      planfond_state->value() = !planfond_state->value();
      update_planfond_state_from_home->execute();
  });
  lambdaaction_24 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "planfond_state %i", planfond_state->value());
  });
  automation_15->add_actions({lambdaaction_23, lambdaaction_24});
  home_b0->set_update_interval(4294967295UL);
  home_b0->set_component_source("nextion.binary_sensor");
  App.register_component(home_b0);
  cuisinenx->register_touch_component(home_b0);
  home_b0->set_component_id(4);
  home_b0->set_page_id(0);
  home_b0->set_variable_name("home.b0", "home.b0.val");
  home_b0->set_visible(true);
  cuisinenx->register_binarysensor_component(home_b0);
  lambdaaction_25 = new LambdaAction<>([=]() -> void {
      #line 189 "/config/esphome/binary_sensor.yaml"
      planfond_state->value() = !planfond_state->value();
      update_planfond_state->execute();
  });
  lambdaaction_26 = new LambdaAction<>([=]() -> void {
      ESP_LOGI("main", "planfond_state %i", planfond_state->value());
  });
  automation_16->add_actions({lambdaaction_25, lambdaaction_26});
  planfond_b0->set_update_interval(1000);
  planfond_b0->set_component_source("nextion.binary_sensor");
  App.register_component(planfond_b0);
  cuisinenx->register_touch_component(planfond_b0);
  planfond_b0->set_component_id(12);
  planfond_b0->set_page_id(1);
  planfond_b0->set_variable_name("planfond.b0", "planfond.b0.val");
  planfond_b0->set_visible(true);
  cuisinenx->register_binarysensor_component(planfond_b0);
  lambdaaction_29 = new LambdaAction<int>([=](int p) -> void {
      #line 8 "/config/esphome/script.yaml"
      int maxpage = max_page->value();
      p = p + 1;
      if (p > maxpage-1) {
        p = 0;
      }
      page->value() = (current_page_list->value()[p].c_str());
      cuisinenx->send_command_printf("page %s", page->value().c_str());
      current_page_int->value() = p;
      update_all->execute();
  });
  automation_25->add_actions({lambdaaction_29});
  automation_26 = new Automation<int>(page_back);
  lambdaaction_30 = new LambdaAction<int>([=](int p) -> void {
      #line 23 "/config/esphome/script.yaml"
      int maxpage = max_page->value();
      p = p - 1;
      if (p < 0) {
        p = maxpage-1;
      }
      page->value() = (current_page_list->value()[p].c_str());
      cuisinenx->send_command_printf("page %s", page->value().c_str());
      current_page_int->value() = p;
      update_all->execute();
  });
  automation_26->add_actions({lambdaaction_30});
  automation_27 = new Automation<>(update_planfond_state);
  lambdaaction_31 = new LambdaAction<>([=]() -> void {
      #line 36 "/config/esphome/script.yaml"
      if(planfond_state->value() == 0){
        cuisinenx->send_command_printf("planfond.b0.pic=1");
        turn_off_planfond->execute();
      }
      if(planfond_state->value() == 1){
        cuisinenx->send_command_printf("planfond.b0.pic=2");
        turn_on_planfond->execute();
      }
  });
  automation_27->add_actions({lambdaaction_31});
  automation_28 = new Automation<>(update_planfond_state_from_home);
  lambdaaction_32 = new LambdaAction<>([=]() -> void {
      #line 48 "/config/esphome/script.yaml"
      if(planfond_state->value() == 0){
        planfond_state->value() = 0;
        cuisinenx->send_command_printf("home.b0.pic=1");
        turn_off_planfond->execute();
      }
      if(planfond_state->value() == 1){
        planfond_state->value() = 1;
        cuisinenx->send_command_printf("home.b0.pic=2");
        turn_on_planfond->execute();
      }
  });
  automation_28->add_actions({lambdaaction_32});
  automation_29 = new Automation<>(update_all);
  lambdaaction_33 = new LambdaAction<>([=]() -> void {
      #line 62 "/config/esphome/script.yaml"
      if (current_page_int->value()==0){
          planfond_state->value() = cuisine_planfond_state->state;
          update_planfond_state_from_home->execute();
      
        }
        if (current_page_int->value()==1){
          planfond_state->value() = cuisine_planfond_state->state;
          update_planfond_state->execute();
      
        }
        if (current_page_int->value()==2){
      
        }
        if (current_page_int->value()==3){
      
        }
  });
  automation_29->add_actions({lambdaaction_33});
  automation_30 = new Automation<>(turn_on_planfond);
  api_homeassistantservicecallaction_8 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_8->set_service("light.turn_on");
  api_homeassistantservicecallaction_8->add_data("entity_id", "light.planfond");
  automation_30->add_actions({api_homeassistantservicecallaction_8});
  automation_31 = new Automation<>(turn_off_planfond);
  api_homeassistantservicecallaction_9 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_9->set_service("light.turn_off");
  api_homeassistantservicecallaction_9->add_data("entity_id", "light.planfond");
  automation_31->add_actions({api_homeassistantservicecallaction_9});
  automation_32 = new Automation<>(text_bright);
  lambdacondition_9 = new LambdaCondition<>([=]() -> bool {
      #line 98 "/config/esphome/script.yaml"
      return cuisine_planfond_state->state;
  });
  ifaction_9 = new IfAction<>(lambdacondition_9);
  lambdaaction_34 = new LambdaAction<>([=]() -> void {
      #line 101 "/config/esphome/script.yaml"
      cuisinenx->set_component_text_printf("planfond.bright","%i %%", int(cuisine_planfond_bright->state)*100/255);
  });
  ifaction_9->add_then({lambdaaction_34});
  lambdaaction_35 = new LambdaAction<>([=]() -> void {
      #line 104 "/config/esphome/script.yaml"
      cuisinenx->set_component_text_printf("planfond.bright", "0%%");
  });
  ifaction_9->add_else({lambdaaction_35});
  automation_32->add_actions({ifaction_9});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
