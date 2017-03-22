#include <ESP8266WiFi.h>
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
//Constructer LiquidCrystal(rs, enable, d4, d5, d6, d7) 
  LiquidCrystal lcd(0, 2, 14, 12, 13, 15);
//const char* ssid     = "TOPEE_DR";
//const char* password = "wlan3419";
//  The circuit:
// * LCD RS pin to digital pin 9 // GPIO0
// * LCD Enable pin to digital pin 8  //GPIO2

// * LCD D4 pin to digital pin 4 // GPIO14
// * LCD D5 pin to digital pin 5 // GPIO12
// * LCD D6 pin to digital pin 6 // GPIO13
// * LCD D7 pin to digital pin 7 // GPIO15
// * LCD R/W pin to ground
// * LCD VSS pin to ground
// * LCD VCC pin to 5V 
// * 10K resistor:
// * ends to +5V and ground
// * wiper to LCD VO pin (pin 3)

void setup() {
  Serial.begin(115200);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  
}

void loop() {
  
// set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);
  Serial.print("xxxxx\n");
  delay(1000);

}
