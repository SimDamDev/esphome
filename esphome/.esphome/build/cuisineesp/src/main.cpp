// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace display;
using namespace text_sensor;
using namespace binary_sensor;
using namespace switch_;
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
template_::TemplateTextSensor *bright_text;
homeassistant::HomeassistantBinarySensor *cuisine_state;
nextion::NextionBinarySensor *cuisine_light;
nextion::NextionBinarySensor *bar_minuterie;
binary_sensor::PressTrigger *binary_sensor_presstrigger;
Automation<> *automation_2;
LambdaAction<> *lambdaaction_2;
nextion::NextionBinarySensor *bar_on_off;
binary_sensor::PressTrigger *binary_sensor_presstrigger_2;
Automation<> *automation_3;
LambdaAction<> *lambdaaction_3;
nextion::NextionBinarySensor *bar_light;
nextion::NextionBinarySensor *b0;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger;
Automation<> *automation_4;
LambdaCondition<> *lambdacondition;
IfAction<> *ifaction_2;
nextion::NextionBinarySensor *b1;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger_2;
Automation<> *automation_5;
LambdaCondition<> *lambdacondition_3;
IfAction<> *ifaction_4;
nextion::NextionBinarySensor *b2;
binary_sensor::PressTrigger *binary_sensor_presstrigger_3;
Automation<> *automation_6;
LambdaCondition<> *lambdacondition_5;
IfAction<> *ifaction_5;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_5;
nextion::NextionBinarySensor *b3;
binary_sensor::PressTrigger *binary_sensor_presstrigger_4;
Automation<> *automation_7;
LambdaCondition<> *lambdacondition_6;
IfAction<> *ifaction_6;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_6;
nextion::NextionBinarySensor *b4;
binary_sensor::PressTrigger *binary_sensor_presstrigger_5;
Automation<> *automation_8;
LambdaCondition<> *lambdacondition_7;
IfAction<> *ifaction_7;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_7;
nextion::NextionBinarySensor *b5;
binary_sensor::PressTrigger *binary_sensor_presstrigger_6;
Automation<> *automation_9;
LambdaCondition<> *lambdacondition_8;
IfAction<> *ifaction_8;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_8;
template_::TemplateSwitch *switch_cuisine;
Automation<> *automation_11;
template_::TemplateSwitch *switch_bar;
Automation<> *automation_13;
LambdaAction<> *lambdaaction_9;
Automation<> *automation_12;
LambdaAction<> *lambdaaction_8;
binary::BinaryLightOutput *binary_binarylightoutput;
light::LightState *light_lightstate;
using namespace output;
gpio::GPIOBinaryOutput *bar_output;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
script::SingleScript<std::string> *minus_13;
script::SingleScript<std::string> *plus_13;
script::SingleScript<> *text_bright;
Automation<std::string> *automation_14;
LambdaAction<std::string> *lambdaaction_10;
Automation<std::string> *automation_15;
LambdaAction<std::string> *lambdaaction_11;
Automation<> *automation_16;
LambdaCondition<> *lambdacondition_9;
IfAction<> *ifaction_9;
dht::DHT *dht_dht;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_4;
sensor::Sensor *temp;
sensor::Sensor *humid;
homeassistant::HomeassistantSensor *cuisine_planfond_bright;
LambdaAction<> *lambdaaction;
using namespace api;
LambdaAction<> *lambdaaction_4;
LambdaCondition<> *lambdacondition_2;
IfAction<> *ifaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_2;
LambdaAction<> *lambdaaction_5;
LambdaCondition<> *lambdacondition_4;
IfAction<> *ifaction_3;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_3;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_4;
LambdaAction<> *lambdaaction_7;
Automation<> *automation_10;
LambdaAction<> *lambdaaction_6;
LambdaAction<> *lambdaaction_12;
LambdaAction<> *lambdaaction_13;
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
  // text_sensor:
  // binary_sensor:
  // switch:
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
  //     id: esphome_esp8266_esp8266gpiopin
  //     inverted: false
  //   tx_pin:
  //     number: 1
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //     inverted: false
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
  //   brightness: 1.0
  //   auto_wake_on_touch: true
  //   update_interval: 5s
  cuisinenx = new nextion::Nextion();
  cuisinenx->set_update_interval(5000);
  cuisinenx->set_component_source("nextion.display");
  App.register_component(cuisinenx);
  cuisinenx->set_uart_parent(uart_2);
  cuisinenx->set_brightness(1.0f);
  cuisinenx->set_tft_url("http://192.168.1.124:8123/local/tft/cuisinenx.tft");
  cuisinenx->set_auto_wake_on_touch_internal(true);
  // text_sensor.template:
  //   platform: template
  //   id: bright_text
  //   name: bright_Ha_in_hex
  //   lambda: !lambda |-
  //     std::string text = "";
  //     text = to_string(int(id(cuisine_planfond_bright).state));
  //     return {text};
  //   update_interval: 5s
  //   disabled_by_default: false
  bright_text = new template_::TemplateTextSensor();
  App.register_text_sensor(bright_text);
  bright_text->set_name("bright_Ha_in_hex");
  bright_text->set_disabled_by_default(false);
  bright_text->set_update_interval(5000);
  bright_text->set_component_source("template.text_sensor");
  App.register_component(bright_text);
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   entity_id: light.planfond
  //   id: cuisine_state
  //   disabled_by_default: false
  //   internal: true
  //   name: cuisine_state
  cuisine_state = new homeassistant::HomeassistantBinarySensor();
  App.register_binary_sensor(cuisine_state);
  cuisine_state->set_name("cuisine_state");
  cuisine_state->set_disabled_by_default(false);
  cuisine_state->set_internal(true);
  cuisine_state->set_component_source("homeassistant.binary_sensor");
  App.register_component(cuisine_state);
  cuisine_state->set_entity_id("light.planfond");
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 1
  //   component_name: page0.bt0
  //   id: cuisine_light
  //   update_interval: 1s
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   name: cuisine_light
  //   internal: true
  cuisine_light = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(cuisine_light);
  cuisine_light->set_name("cuisine_light");
  cuisine_light->set_disabled_by_default(false);
  cuisine_light->set_internal(true);
  cuisine_light->set_update_interval(1000);
  cuisine_light->set_component_source("nextion.binary_sensor");
  App.register_component(cuisine_light);
  cuisinenx->register_touch_component(cuisine_light);
  cuisine_light->set_component_id(1);
  cuisine_light->set_page_id(0);
  cuisine_light->set_variable_name("page0.bt0", "page0.bt0.val");
  cuisine_light->set_visible(true);
  cuisinenx->register_binarysensor_component(cuisine_light);
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
  //         tag: main
  //         level: DEBUG
  //         args: []
  //       type_id: lambdaaction_2
  //     automation_id: automation_2
  //     trigger_id: binary_sensor_presstrigger
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
  binary_sensor_presstrigger = new binary_sensor::PressTrigger(bar_minuterie);
  automation_2 = new Automation<>(binary_sensor_presstrigger);
  lambdaaction_2 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "bar minuterie");
  });
  automation_2->add_actions({lambdaaction_2});
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
  //         tag: main
  //         level: DEBUG
  //         args: []
  //       type_id: lambdaaction_3
  //     automation_id: automation_3
  //     trigger_id: binary_sensor_presstrigger_2
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
  binary_sensor_presstrigger_2 = new binary_sensor::PressTrigger(bar_on_off);
  automation_3 = new Automation<>(binary_sensor_presstrigger_2);
  lambdaaction_3 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "bar on_off");
  });
  automation_3->add_actions({lambdaaction_3});
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
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 3
  //   component_name: page0.b0
  //   id: b0
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
  //           type_id: lambdacondition
  //         then:
  //         - lambda: !lambda |-
  //             id(minus_13)->execute(id(bright_text).state);
  //             id(text_bright)->execute();
  //           type_id: lambdaaction_4
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return stoi(id(bright_text).state) < 13;
  //               type_id: lambdacondition_2
  //             then:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness: '10'
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction
  //             else:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness: !lambda |-
  //                     return id(cuisine_planfond_bright).state;
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction_2
  //           type_id: ifaction
  //       type_id: ifaction_2
  //     automation_id: automation_4
  //     trigger_id: binary_sensor_clicktrigger
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b0
  //   internal: true
  b0 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b0);
  b0->set_name("b0");
  b0->set_disabled_by_default(false);
  b0->set_internal(true);
  binary_sensor_clicktrigger = new binary_sensor::ClickTrigger(b0, 50, 350);
  automation_4 = new Automation<>(binary_sensor_clicktrigger);
  lambdacondition = new LambdaCondition<>([=]() -> bool {
      #line 59 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_2 = new IfAction<>(lambdacondition);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 4
  //   component_name: page0.b1
  //   id: b1
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
  //           type_id: lambdacondition_3
  //         then:
  //         - lambda: !lambda |-
  //             id(plus_13)->execute(id(bright_text).state);
  //             id(text_bright)->execute();
  //           type_id: lambdaaction_5
  //         - if:
  //             condition:
  //               lambda: !lambda |-
  //                 return stoi(id(bright_text).state) > 250;
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
  //               type_id: api_homeassistantservicecallaction_3
  //             else:
  //             - homeassistant.service:
  //                 service: light.turn_on
  //                 data:
  //                   entity_id: light.planfond
  //                   brightness: !lambda |-
  //                     return id(cuisine_planfond_bright).state;
  //                 id: api_apiserver
  //                 data_template: {}
  //                 variables: {}
  //               type_id: api_homeassistantservicecallaction_4
  //           type_id: ifaction_3
  //       type_id: ifaction_4
  //     automation_id: automation_5
  //     trigger_id: binary_sensor_clicktrigger_2
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b1
  //   internal: true
  b1 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b1);
  b1->set_name("b1");
  b1->set_disabled_by_default(false);
  b1->set_internal(true);
  binary_sensor_clicktrigger_2 = new binary_sensor::ClickTrigger(b1, 50, 350);
  automation_5 = new Automation<>(binary_sensor_clicktrigger_2);
  lambdacondition_3 = new LambdaCondition<>([=]() -> bool {
      #line 89 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_4 = new IfAction<>(lambdacondition_3);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 6
  //   component_name: page0.b2
  //   id: b2
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
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
  //           type_id: api_homeassistantservicecallaction_5
  //       type_id: ifaction_5
  //     automation_id: automation_6
  //     trigger_id: binary_sensor_presstrigger_3
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b2
  //   internal: true
  b2 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b2);
  b2->set_name("b2");
  b2->set_disabled_by_default(false);
  b2->set_internal(true);
  binary_sensor_presstrigger_3 = new binary_sensor::PressTrigger(b2);
  automation_6 = new Automation<>(binary_sensor_presstrigger_3);
  lambdacondition_5 = new LambdaCondition<>([=]() -> bool {
      #line 120 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_5 = new IfAction<>(lambdacondition_5);
  api_homeassistantservicecallaction_5 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_5->set_service("light.turn_on");
  api_homeassistantservicecallaction_5->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_5->add_data("brightness", "64");
  ifaction_5->add_then({api_homeassistantservicecallaction_5});
  automation_6->add_actions({ifaction_5});
  b2->set_update_interval(4294967295UL);
  b2->set_component_source("nextion.binary_sensor");
  App.register_component(b2);
  cuisinenx->register_touch_component(b2);
  b2->set_component_id(6);
  b2->set_page_id(0);
  b2->set_variable_name("page0.b2", "page0.b2.val");
  b2->set_visible(true);
  cuisinenx->register_binarysensor_component(b2);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 7
  //   component_name: page0.b3
  //   id: b3
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
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
  //           type_id: api_homeassistantservicecallaction_6
  //       type_id: ifaction_6
  //     automation_id: automation_7
  //     trigger_id: binary_sensor_presstrigger_4
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b3
  //   internal: true
  b3 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b3);
  b3->set_name("b3");
  b3->set_disabled_by_default(false);
  b3->set_internal(true);
  binary_sensor_presstrigger_4 = new binary_sensor::PressTrigger(b3);
  automation_7 = new Automation<>(binary_sensor_presstrigger_4);
  lambdacondition_6 = new LambdaCondition<>([=]() -> bool {
      #line 138 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_6 = new IfAction<>(lambdacondition_6);
  api_homeassistantservicecallaction_6 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_6->set_service("light.turn_on");
  api_homeassistantservicecallaction_6->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_6->add_data("brightness", "128");
  ifaction_6->add_then({api_homeassistantservicecallaction_6});
  automation_7->add_actions({ifaction_6});
  b3->set_update_interval(4294967295UL);
  b3->set_component_source("nextion.binary_sensor");
  App.register_component(b3);
  cuisinenx->register_touch_component(b3);
  b3->set_component_id(7);
  b3->set_page_id(0);
  b3->set_variable_name("page0.b3", "page0.b3.val");
  b3->set_visible(true);
  cuisinenx->register_binarysensor_component(b3);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 8
  //   component_name: page0.b4
  //   id: b4
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
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
  //           type_id: api_homeassistantservicecallaction_7
  //       type_id: ifaction_7
  //     automation_id: automation_8
  //     trigger_id: binary_sensor_presstrigger_5
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b4
  //   internal: true
  b4 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b4);
  b4->set_name("b4");
  b4->set_disabled_by_default(false);
  b4->set_internal(true);
  binary_sensor_presstrigger_5 = new binary_sensor::PressTrigger(b4);
  automation_8 = new Automation<>(binary_sensor_presstrigger_5);
  lambdacondition_7 = new LambdaCondition<>([=]() -> bool {
      #line 156 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_7 = new IfAction<>(lambdacondition_7);
  api_homeassistantservicecallaction_7 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_7->set_service("light.turn_on");
  api_homeassistantservicecallaction_7->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_7->add_data("brightness", "192");
  ifaction_7->add_then({api_homeassistantservicecallaction_7});
  automation_8->add_actions({ifaction_7});
  b4->set_update_interval(4294967295UL);
  b4->set_component_source("nextion.binary_sensor");
  App.register_component(b4);
  cuisinenx->register_touch_component(b4);
  b4->set_component_id(8);
  b4->set_page_id(0);
  b4->set_variable_name("page0.b4", "page0.b4.val");
  b4->set_visible(true);
  cuisinenx->register_binarysensor_component(b4);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 9
  //   component_name: page0.b5
  //   id: b5
  //   on_press:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
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
  //           type_id: api_homeassistantservicecallaction_8
  //       type_id: ifaction_8
  //     automation_id: automation_9
  //     trigger_id: binary_sensor_presstrigger_6
  //   disabled_by_default: false
  //   nextion_id: cuisinenx
  //   visible: true
  //   update_interval: 4294967295
  //   name: b5
  //   internal: true
  b5 = new nextion::NextionBinarySensor(cuisinenx);
  App.register_binary_sensor(b5);
  b5->set_name("b5");
  b5->set_disabled_by_default(false);
  b5->set_internal(true);
  binary_sensor_presstrigger_6 = new binary_sensor::PressTrigger(b5);
  automation_9 = new Automation<>(binary_sensor_presstrigger_6);
  lambdacondition_8 = new LambdaCondition<>([=]() -> bool {
      #line 174 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_8 = new IfAction<>(lambdacondition_8);
  api_homeassistantservicecallaction_8 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_8->set_service("light.turn_on");
  api_homeassistantservicecallaction_8->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_8->add_data("brightness", "255");
  ifaction_8->add_then({api_homeassistantservicecallaction_8});
  automation_9->add_actions({ifaction_8});
  b5->set_update_interval(4294967295UL);
  b5->set_component_source("nextion.binary_sensor");
  App.register_component(b5);
  cuisinenx->register_touch_component(b5);
  b5->set_component_id(9);
  b5->set_page_id(0);
  b5->set_variable_name("page0.b5", "page0.b5.val");
  b5->set_visible(true);
  cuisinenx->register_binarysensor_component(b5);
  // switch.template:
  //   platform: template
  //   name: switch cuisine
  //   id: switch_cuisine
  //   lambda: !lambda |-
  //     if (id(cuisine_light).state) {
  //       return true;
  //     } else{
  //       return false;
  //     }
  //   turn_on_action:
  //     then:
  //     - lambda: !lambda |-
  //         id(cuisinenx).send_command_printf("bt0.val=1");
  //         id(text_bright)->execute();
  //       type_id: lambdaaction_6
  //     trigger_id: trigger
  //     automation_id: automation_10
  //   turn_off_action:
  //     then:
  //     - lambda: !lambda |-
  //         id(cuisinenx).send_command_printf("bt0.val=0");
  //         id(text_bright)->execute();
  //       type_id: lambdaaction_7
  //     trigger_id: trigger_2
  //     automation_id: automation_11
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  switch_cuisine = new template_::TemplateSwitch();
  App.register_switch(switch_cuisine);
  switch_cuisine->set_name("switch cuisine");
  switch_cuisine->set_disabled_by_default(false);
  switch_cuisine->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  switch_cuisine->set_component_source("template.switch");
  App.register_component(switch_cuisine);
  switch_cuisine->set_state_lambda([=]() -> optional<bool> {
      #line 188 "/config/esphome/test.yaml"
      if (cuisine_light->state) {
        return true;
      } else{
        return false;
      }
  });
  automation_11 = new Automation<>(switch_cuisine->get_turn_off_trigger());
  // switch.template:
  //   platform: template
  //   name: switch bar
  //   id: switch_bar
  //   lambda: !lambda |-
  //     if (id(bar_light).state) {
  //       return true;
  //     } else{
  //       return false;
  //     }
  //   turn_on_action:
  //     then:
  //     - lambda: !lambda |-
  //         if(id(bar_on_off).state){
  //         id(cuisinenx).send_command_printf("bt1.val=1");
  //         }
  //         if(id(bar_minuterie).state){
  //         id(timer)->execute();
  //         }
  //       type_id: lambdaaction_8
  //     trigger_id: trigger_3
  //     automation_id: automation_12
  //   turn_off_action:
  //     then:
  //     - lambda: !lambda |-
  //         if(id(bar_on_off).state){
  //         id(cuisinenx).send_command_printf("bt1.val=0");
  //         }
  //       type_id: lambdaaction_9
  //     trigger_id: trigger_4
  //     automation_id: automation_13
  //   disabled_by_default: false
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  switch_bar = new template_::TemplateSwitch();
  App.register_switch(switch_bar);
  switch_bar->set_name("switch bar");
  switch_bar->set_disabled_by_default(false);
  switch_bar->set_restore_mode(switch_::SWITCH_RESTORE_DEFAULT_OFF);
  switch_bar->set_component_source("template.switch");
  App.register_component(switch_bar);
  switch_bar->set_state_lambda([=]() -> optional<bool> {
      #line 206 "/config/esphome/test.yaml"
      if (bar_light->state) {
        return true;
      } else{
        return false;
      }
  });
  automation_13 = new Automation<>(switch_bar->get_turn_off_trigger());
  lambdaaction_9 = new LambdaAction<>([=]() -> void {
      #line 221 "/config/esphome/test.yaml"
      if(bar_on_off->state){
      cuisinenx->send_command_printf("bt1.val=0");
      }
  });
  automation_13->add_actions({lambdaaction_9});
  automation_12 = new Automation<>(switch_bar->get_turn_on_trigger());
  lambdaaction_8 = new LambdaAction<>([=]() -> void {
      #line 213 "/config/esphome/test.yaml"
      if(bar_on_off->state){
      cuisinenx->send_command_printf("bt1.val=1");
      }
      if(bar_minuterie->state){
       
      }
  });
  automation_12->add_actions({lambdaaction_8});
  switch_bar->set_optimistic(false);
  switch_bar->set_assumed_state(false);
  switch_bar->set_restore_state(false);
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
  //     id: esphome_esp8266_esp8266gpiopin_3
  //     inverted: false
  bar_output = new gpio::GPIOBinaryOutput();
  bar_output->set_component_source("gpio.output");
  App.register_component(bar_output);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(5);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  bar_output->set_pin(esphome_esp8266_esp8266gpiopin_3);
  // script:
  //   - id: minus_13
  //     parameters:
  //       bright: std::string
  //     then:
  //     - lambda: !lambda |-
  //         int temp = 0;
  //         temp = (stoi(bright))-13;
  //         id(bright_text).publish_state(to_string(temp));
  //       type_id: lambdaaction_10
  //     trigger_id: trigger_5
  //     automation_id: automation_14
  //     mode: single
  //   - id: plus_13
  //     parameters:
  //       bright: std::string
  //     then:
  //     - lambda: !lambda |-
  //         int temp = 0;
  //         temp = (stoi(bright))+13;
  //         id(bright_text).publish_state(to_string(temp));
  //       type_id: lambdaaction_11
  //     trigger_id: trigger_6
  //     automation_id: automation_15
  //     mode: single
  //   - id: text_bright
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(cuisine_light).state;
  //           type_id: lambdacondition_9
  //         then:
  //         - lambda: !lambda |-
  //             id(cuisinenx).set_component_text_printf("page0.bright","%i %%", int(id(cuisine_planfond_bright).state)*100/255);
  //           type_id: lambdaaction_12
  //         else:
  //         - lambda: !lambda |-
  //             id(cuisinenx).set_component_text_printf("page0.bright", "0%%");
  //           type_id: lambdaaction_13
  //       type_id: ifaction_9
  //     trigger_id: trigger_7
  //     automation_id: automation_16
  //     mode: single
  //     parameters: {}
  minus_13 = new script::SingleScript<std::string>();
  minus_13->set_name("minus_13");
  plus_13 = new script::SingleScript<std::string>();
  plus_13->set_name("plus_13");
  text_bright = new script::SingleScript<>();
  text_bright->set_name("text_bright");
  automation_14 = new Automation<std::string>(minus_13);
  lambdaaction_10 = new LambdaAction<std::string>([=](std::string bright) -> void {
      #line 242 "/config/esphome/test.yaml"
      int temp = 0;
      temp = (stoi(bright))-13;
      bright_text->publish_state(to_string(temp));
  });
  automation_14->add_actions({lambdaaction_10});
  automation_15 = new Automation<std::string>(plus_13);
  lambdaaction_11 = new LambdaAction<std::string>([=](std::string bright) -> void {
      #line 251 "/config/esphome/test.yaml"
      int temp = 0;
      temp = (stoi(bright))+13;
      bright_text->publish_state(to_string(temp));
  });
  automation_15->add_actions({lambdaaction_11});
  automation_16 = new Automation<>(text_bright);
  lambdacondition_9 = new LambdaCondition<>([=]() -> bool {
      #line 260 "/config/esphome/test.yaml"
      return cuisine_light->state;
  });
  ifaction_9 = new IfAction<>(lambdacondition_9);
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
  //     id: esphome_esp8266_esp8266gpiopin_4
  //     inverted: false
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
  esphome_esp8266_esp8266gpiopin_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_4->set_pin(13);
  esphome_esp8266_esp8266gpiopin_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_4->set_flags(gpio::Flags::FLAG_INPUT);
  dht_dht->set_pin(esphome_esp8266_esp8266gpiopin_4);
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
  cuisine_planfond_bright->set_component_source("homeassistant.sensor");
  App.register_component(cuisine_planfond_bright);
  cuisine_planfond_bright->set_entity_id("light.planfond");
  cuisine_planfond_bright->set_attribute("brightness");
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   {}
  lambdaaction = new LambdaAction<>([=]() -> void {
      #line 20 "/config/esphome/main.yaml"
      cuisinenx->upload_tft();
  });
  automation->add_actions({lambdaaction});
  api_apiserver->set_noise_psk({62, 100, 20, 96, 111, 112, 57, 166, 170, 103, 177, 129, 160, 33, 11, 104, 74, 66, 170, 245, 127, 232, 171, 68, 140, 248, 226, 68, 79, 109, 48, 180});
  bright_text->set_template([=]() -> optional<std::string> {
      #line 6 "/config/esphome/test.yaml"
      std::string text = "";
      text = to_string(int(cuisine_planfond_bright->state));
      return {text};
  });
  lambdaaction_4 = new LambdaAction<>([=]() -> void {
      #line 62 "/config/esphome/test.yaml"
      minus_13->execute(bright_text->state);
      text_bright->execute();
  });
  lambdacondition_2 = new LambdaCondition<>([=]() -> bool {
      #line 66 "/config/esphome/test.yaml"
      return stoi(bright_text->state) < 13;
  });
  ifaction = new IfAction<>(lambdacondition_2);
  api_homeassistantservicecallaction = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction->set_service("light.turn_on");
  api_homeassistantservicecallaction->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction->add_data("brightness", "10");
  ifaction->add_then({api_homeassistantservicecallaction});
  api_homeassistantservicecallaction_2 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_2->set_service("light.turn_on");
  api_homeassistantservicecallaction_2->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_2->add_data("brightness", [=]() {
      #line 78 "/config/esphome/test.yaml"
      return cuisine_planfond_bright->state;
  });
  ifaction->add_else({api_homeassistantservicecallaction_2});
  ifaction_2->add_then({lambdaaction_4, ifaction});
  automation_4->add_actions({ifaction_2});
  b0->set_update_interval(4294967295UL);
  b0->set_component_source("nextion.binary_sensor");
  App.register_component(b0);
  cuisinenx->register_touch_component(b0);
  b0->set_component_id(3);
  b0->set_page_id(0);
  b0->set_variable_name("page0.b0", "page0.b0.val");
  b0->set_visible(true);
  cuisinenx->register_binarysensor_component(b0);
  lambdaaction_5 = new LambdaAction<>([=]() -> void {
      #line 92 "/config/esphome/test.yaml"
      plus_13->execute(bright_text->state);
      text_bright->execute();
  });
  lambdacondition_4 = new LambdaCondition<>([=]() -> bool {
      #line 96 "/config/esphome/test.yaml"
      return stoi(bright_text->state) > 250;
  });
  ifaction_3 = new IfAction<>(lambdacondition_4);
  api_homeassistantservicecallaction_3 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_3->set_service("light.turn_on");
  api_homeassistantservicecallaction_3->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_3->add_data("brightness", "255");
  ifaction_3->add_then({api_homeassistantservicecallaction_3});
  api_homeassistantservicecallaction_4 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_4->set_service("light.turn_on");
  api_homeassistantservicecallaction_4->add_data("entity_id", "light.planfond");
  api_homeassistantservicecallaction_4->add_data("brightness", [=]() {
      #line 108 "/config/esphome/test.yaml"
      return cuisine_planfond_bright->state;
  });
  ifaction_3->add_else({api_homeassistantservicecallaction_4});
  ifaction_4->add_then({lambdaaction_5, ifaction_3});
  automation_5->add_actions({ifaction_4});
  b1->set_update_interval(4294967295UL);
  b1->set_component_source("nextion.binary_sensor");
  App.register_component(b1);
  cuisinenx->register_touch_component(b1);
  b1->set_component_id(4);
  b1->set_page_id(0);
  b1->set_variable_name("page0.b1", "page0.b1.val");
  b1->set_visible(true);
  cuisinenx->register_binarysensor_component(b1);
  lambdaaction_7 = new LambdaAction<>([=]() -> void {
      #line 199 "/config/esphome/test.yaml"
      cuisinenx->send_command_printf("bt0.val=0");
      text_bright->execute();
  });
  automation_11->add_actions({lambdaaction_7});
  automation_10 = new Automation<>(switch_cuisine->get_turn_on_trigger());
  lambdaaction_6 = new LambdaAction<>([=]() -> void {
      #line 195 "/config/esphome/test.yaml"
      cuisinenx->send_command_printf("bt0.val=1");
      text_bright->execute();
  });
  automation_10->add_actions({lambdaaction_6});
  switch_cuisine->set_optimistic(false);
  switch_cuisine->set_assumed_state(false);
  switch_cuisine->set_restore_state(false);
  binary_binarylightoutput->set_output(bar_output);
  lambdaaction_12 = new LambdaAction<>([=]() -> void {
      #line 263 "/config/esphome/test.yaml"
      cuisinenx->set_component_text_printf("page0.bright","%i %%", int(cuisine_planfond_bright->state)*100/255);
  });
  ifaction_9->add_then({lambdaaction_12});
  lambdaaction_13 = new LambdaAction<>([=]() -> void {
      #line 266 "/config/esphome/test.yaml"
      cuisinenx->set_component_text_printf("page0.bright", "0%%");
  });
  ifaction_9->add_else({lambdaaction_13});
  automation_16->add_actions({ifaction_9});
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
