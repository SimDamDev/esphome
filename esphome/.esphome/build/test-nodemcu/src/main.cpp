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
dht::DHT *dht_dht;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_2;
using namespace uart;
uart::ESP8266UartComponent *uart_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
nextion::Nextion *nextion1;
nextion::NextionBinarySensor *bOn;
binary_sensor::ClickTrigger *binary_sensor_clicktrigger;
Automation<> *automation;
LambdaAction<> *lambdaaction;
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
  //   name: test-nodemcu
  //   build_path: .esphome/build/test-nodemcu
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2022.12.6
  App.pre_setup("test-nodemcu", __DATE__ ", " __TIME__, false);
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
  //   component_id: 3
  //   component_name: page0.bOn
  //   id: bOn
  //   on_click:
  //   - then:
  //     - logger.log:
  //         format: click
  //         level: DEBUG
  //         tag: main
  //         args: []
  //       type_id: lambdaaction
  //     automation_id: automation
  //     trigger_id: binary_sensor_clicktrigger
  //     min_length: 50ms
  //     max_length: 350ms
  //   disabled_by_default: false
  //   nextion_id: nextion1
  //   visible: true
  //   update_interval: 4294967295
  //   name: bOn
  //   internal: true
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
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: Station Humidite
  //     disabled_by_default: false
  //     id: sensor_sensor_2
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
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Station Temperature");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_device_class("temperature");
  sensor_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor->set_unit_of_measurement("\302\260C");
  sensor_sensor->set_accuracy_decimals(1);
  sensor_sensor->set_force_update(false);
  dht_dht->set_temperature_sensor(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Station Humidite");
  sensor_sensor_2->set_disabled_by_default(false);
  sensor_sensor_2->set_device_class("humidity");
  sensor_sensor_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  dht_dht->set_humidity_sensor(sensor_sensor_2);
  dht_dht->set_dht_model(dht::DHT_MODEL_DHT11);
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
  //   brightness: 1.0
  //   auto_wake_on_touch: true
  //   update_interval: 5s
  nextion1 = new nextion::Nextion();
  nextion1->set_update_interval(5000);
  nextion1->set_component_source("nextion.display");
  App.register_component(nextion1);
  nextion1->set_uart_parent(uart_2);
  nextion1->set_brightness(1.0f);
  nextion1->set_auto_wake_on_touch_internal(true);
  // socket:
  //   implementation: lwip_tcp
  // network:
  //   {}
  bOn = new nextion::NextionBinarySensor(nextion1);
  App.register_binary_sensor(bOn);
  bOn->set_name("bOn");
  bOn->set_disabled_by_default(false);
  bOn->set_internal(true);
  binary_sensor_clicktrigger = new binary_sensor::ClickTrigger(bOn, 50, 350);
  automation = new Automation<>(binary_sensor_clicktrigger);
  lambdaaction = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "click");
  });
  automation->add_actions({lambdaaction});
  bOn->set_update_interval(4294967295UL);
  bOn->set_component_source("nextion.binary_sensor");
  App.register_component(bOn);
  nextion1->register_touch_component(bOn);
  bOn->set_component_id(3);
  bOn->set_page_id(0);
  bOn->set_variable_name("page0.bOn", "page0.bOn.val");
  bOn->set_visible(true);
  nextion1->register_binarysensor_component(bOn);
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
