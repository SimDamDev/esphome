// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
using namespace display;
using namespace switch_;
using namespace text_sensor;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
homeassistant::HomeassistantBinarySensor *bureau_state;
binary_sensor::StateTrigger *binary_sensor_statetrigger;
Automation<bool> *automation_2;
dht::DHT *dht_dht;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
sensor::Sensor *temp;
sensor::Sensor *humid;
homeassistant::HomeassistantSensor *bureau_light;
using namespace uart;
uart::ESP8266UartComponent *uart_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
nextion::Nextion *nextion1;
nextion::NextionBinarySensor *bt0;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger;
Automation<> *automation;
LambdaCondition<> *lambdacondition;
IfAction<> *ifaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction;
UpdateComponentAction<> *updatecomponentaction;
api::HomeAssistantServiceCallAction<> *api_homeassistantservicecallaction_2;
UpdateComponentAction<> *updatecomponentaction_2;
LambdaAction<bool> *lambdaaction;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, OUTPUT, 255, INPUT, 255, 255, 255, 255, 255, 255, 255, 255, 255, INPUT, 255, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
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
  //   name: testnodemcu
  //   build_path: .esphome/build/testnodemcu
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2022.12.8
  App.pre_setup("testnodemcu", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // display:
  // switch:
  // text_sensor:
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
  //     static_ip: 192.168.1.125
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
  api_apiserver->set_noise_psk({62, 100, 20, 96, 111, 112, 57, 166, 170, 103, 177, 129, 160, 33, 11, 104, 74, 66, 170, 245, 127, 232, 171, 68, 140, 248, 226, 68, 79, 109, 48, 180});
  // sensor:
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // binary_sensor.nextion:
  //   platform: nextion
  //   page_id: 0
  //   component_id: 6
  //   component_name: page0.bt0
  //   id: bt0
  //   on_click:
  //   - then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(bureau_state).state;
  //           type_id: lambdacondition
  //         then:
  //         - homeassistant.service:
  //             service: light.turn_off
  //             data:
  //               entity_id: light.bureau
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction
  //         - component.update:
  //             id: nextion1
  //           type_id: updatecomponentaction
  //         else:
  //         - homeassistant.service:
  //             service: light.turn_on
  //             data:
  //               entity_id: light.bureau
  //             id: api_apiserver
  //             data_template: {}
  //             variables: {}
  //           type_id: api_homeassistantservicecallaction_2
  //         - component.update:
  //             id: nextion1
  //           type_id: updatecomponentaction_2
  //       type_id: ifaction
  //     automation_id: automation
  //     trigger_id: binary_sensor_clicktrigger
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: nextion1
  //   visible: true
  //   update_interval: 4294967295
  //   name: bt0
  //   internal: true
  // binary_sensor.homeassistant:
  //   platform: homeassistant
  //   entity_id: light.bureau
  //   id: bureau_state
  //   on_state:
  //   - then:
  //     - lambda: !lambda |-
  //         if (id(bureau_state).state) {
  //         id(nextion1).send_command_printf("lampeState.pic=2");
  //         } else {
  //         id(nextion1).send_command_printf("lampeState.pic=1");
  //         }
  //       type_id: lambdaaction
  //     automation_id: automation_2
  //     trigger_id: binary_sensor_statetrigger
  //   disabled_by_default: false
  //   internal: true
  //   name: bureau_state
  bureau_state = new homeassistant::HomeassistantBinarySensor();
  App.register_binary_sensor(bureau_state);
  bureau_state->set_name("bureau_state");
  bureau_state->set_disabled_by_default(false);
  bureau_state->set_internal(true);
  binary_sensor_statetrigger = new binary_sensor::StateTrigger(bureau_state);
  automation_2 = new Automation<bool>(binary_sensor_statetrigger);
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
  //     id: esphome_esp8266_esp8266gpiopin
  //   model: DHT11
  //   temperature:
  //     name: Station Temperature
  //     id: temp
  //     disabled_by_default: false
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Station Humidite
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
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(13);
  esphome_esp8266_esp8266gpiopin->set_inverted(false);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_INPUT);
  dht_dht->set_pin(esphome_esp8266_esp8266gpiopin);
  temp = new sensor::Sensor();
  App.register_sensor(temp);
  temp->set_name("Station Temperature");
  temp->set_disabled_by_default(false);
  temp->set_device_class("temperature");
  temp->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  temp->set_unit_of_measurement("\302\260C");
  temp->set_accuracy_decimals(1);
  temp->set_force_update(false);
  dht_dht->set_temperature_sensor(temp);
  humid = new sensor::Sensor();
  App.register_sensor(humid);
  humid->set_name("Station Humidite");
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
  //   entity_id: light.bureau
  //   id: bureau_light
  //   attribute: brightness
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   internal: true
  //   name: bureau_light
  bureau_light = new homeassistant::HomeassistantSensor();
  App.register_sensor(bureau_light);
  bureau_light->set_name("bureau_light");
  bureau_light->set_disabled_by_default(false);
  bureau_light->set_internal(true);
  bureau_light->set_accuracy_decimals(1);
  bureau_light->set_force_update(false);
  bureau_light->set_component_source("homeassistant.sensor");
  App.register_component(bureau_light);
  bureau_light->set_entity_id("light.bureau");
  bureau_light->set_attribute("brightness");
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
  //     id: esphome_esp8266_esp8266gpiopin_2
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
  //     id: esphome_esp8266_esp8266gpiopin_3
  //   baud_rate: 9600
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_2 = new uart::ESP8266UartComponent();
  uart_2->set_component_source("uart");
  App.register_component(uart_2);
  uart_2->set_baud_rate(9600);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(1);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  uart_2->set_tx_pin(esphome_esp8266_esp8266gpiopin_3);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(3);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_INPUT);
  uart_2->set_rx_pin(esphome_esp8266_esp8266gpiopin_2);
  uart_2->set_rx_buffer_size(256);
  uart_2->set_stop_bits(1);
  uart_2->set_data_bits(8);
  uart_2->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // display.nextion:
  //   platform: nextion
  //   id: nextion1
  //   uart_id: uart_2
  //   lambda: !lambda "it.set_component_value(\"page0.temp\", (id(temp).state)*10);\nit.set_component_value(\"
  //     page0.humid\", (id(humid).state)*10);\nif((id(bureau_state).state)) {\n  it.set_component_value(\"
  //     page0.bright\", (id(bureau_light).state)/255*100);\n} else {\n  it.set_component_value(\"
  //     page0.bright\", 0);\n}\n\n  "
  //   brightness: 1.0
  //   auto_wake_on_touch: true
  //   update_interval: 5s
  nextion1 = new nextion::Nextion();
  nextion1->set_update_interval(5000);
  nextion1->set_component_source("nextion.display");
  App.register_component(nextion1);
  nextion1->set_uart_parent(uart_2);
  nextion1->set_brightness(1.0f);
  nextion1->set_writer([=](nextion::Nextion & it) -> void {
      #line 101 "/config/esphome/test-nodemcu.yaml"
      it.set_component_value("page0.temp", (temp->state)*10);
      it.set_component_value("page0.humid", (humid->state)*10);
      if((bureau_state->state)) {
        it.set_component_value("page0.bright", (bureau_light->state)/255*100);
      } else {
        it.set_component_value("page0.bright", 0);
      }
      
        
  });
  nextion1->set_auto_wake_on_touch_internal(true);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   {}
  bt0 = new nextion::NextionBinarySensor(nextion1);
  App.register_binary_sensor(bt0);
  bt0->set_name("bt0");
  bt0->set_disabled_by_default(false);
  bt0->set_internal(true);
  binary_sensor_clicktrigger = new binary_sensor::ClickTrigger(bt0, 50, 350);
  automation = new Automation<>(binary_sensor_clicktrigger);
  lambdacondition = new LambdaCondition<>([=]() -> bool {
      #line 41 "/config/esphome/test-nodemcu.yaml"
      return bureau_state->state;
  });
  ifaction = new IfAction<>(lambdacondition);
  api_homeassistantservicecallaction = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction->set_service("light.turn_off");
  api_homeassistantservicecallaction->add_data("entity_id", "light.bureau");
  updatecomponentaction = new UpdateComponentAction<>(nextion1);
  ifaction->add_then({api_homeassistantservicecallaction, updatecomponentaction});
  api_homeassistantservicecallaction_2 = new api::HomeAssistantServiceCallAction<>(api_apiserver, false);
  api_homeassistantservicecallaction_2->set_service("light.turn_on");
  api_homeassistantservicecallaction_2->add_data("entity_id", "light.bureau");
  updatecomponentaction_2 = new UpdateComponentAction<>(nextion1);
  ifaction->add_else({api_homeassistantservicecallaction_2, updatecomponentaction_2});
  automation->add_actions({ifaction});
  bt0->set_update_interval(4294967295UL);
  bt0->set_component_source("nextion.binary_sensor");
  App.register_component(bt0);
  nextion1->register_touch_component(bt0);
  bt0->set_component_id(6);
  bt0->set_page_id(0);
  bt0->set_variable_name("page0.bt0", "page0.bt0.val");
  bt0->set_visible(true);
  nextion1->register_binarysensor_component(bt0);
  lambdaaction = new LambdaAction<bool>([=](bool x) -> void {
      #line 62 "/config/esphome/test-nodemcu.yaml"
      if (bureau_state->state) {
      nextion1->send_command_printf("lampeState.pic=2");
      } else {
      nextion1->send_command_printf("lampeState.pic=1");
      }
  });
  automation_2->add_actions({lambdaaction});
  bureau_state->set_component_source("homeassistant.binary_sensor");
  App.register_component(bureau_state);
  bureau_state->set_entity_id("light.bureau");
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
