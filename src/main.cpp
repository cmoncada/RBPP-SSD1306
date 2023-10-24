/**************************************************************************
   1306_simple_pico.ino

   SSD1306 checkout

 *  Pico  ---- SSD1306 OLED display  (I2C communication)
    3.3V  -----  VCC    physical pin 36
    GND   -----  GND    physical pin 38
    GP6   -----  SDA   physical pin 9   So default uses I2C1
    GP7   -----  SCL   physical pin 10  So default uses I2C1
    https://forum.arduino.cc/t/pi-pico-and-ssd1306-oled-display/929498/10

*/
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C

TwoWire myI2C(8,9);
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &myI2C, OLED_RESET);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
}

void loop() {
  int numeroAleatorio = random(10000, 99999);

  display.clearDisplay();
  display.drawRoundRect(2, 2, 124, 60, 5, SSD1306_WHITE);
  display.setTextSize(2);
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(6,6);
  display.println(numeroAleatorio);
  display.display();
  delay(100);
}
