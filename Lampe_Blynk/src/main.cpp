#include <Arduino.h>
#define BLYNK_PRINT Serial 
#include <BlynkSimpleShieldEsp8266.h>

// config for WifiConnection to Blynk Apps
char auth[] = "zpr5oc984Vv5UvvSDnLx_x0h0Y9VLJYt";

char ssid[] = "";
char password[] = "";

// SetUp Blynk connection
void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, password);
}

// Start Blynk for get control lights
void loop() {
  Blynk.run();
}