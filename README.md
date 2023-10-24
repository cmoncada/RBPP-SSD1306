# RBPP-SSD1306
RBPi Pico with oled screen SSD1306

   Rasperry Pi Pico PIN guide

    Pico  ---- SSD1306 OLED display  (I2C communication)
    3.3V  -----  VCC    physical pin 36
    GND   -----  GND    physical pin 38
    GP6   -----  SDA   physical pin 9   So default uses I2C1
    GP7   -----  SCL   physical pin 10  So default uses I2C1

  The following uses the default Wire instance (for Pico, this uses GP6 for SDA and GP7 for SCL). 
  One can use other I2C combinations by using the following 2 lines instead:

```
TwoWire myI2C(8,9);  //create instance for SDA=GPGP8 SCL=9 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &myI2C, OLED_RESET);
``` 
