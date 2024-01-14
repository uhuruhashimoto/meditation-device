
/*
 * Code from https://docs.arduino.cc/tutorials/mkr-zero/mkr-zero-data-logger
 */
#include <SPI.h>
#include <SD.h>
const int chipSelect = SDCARD_SS_PIN;
void setup() {
  pinMode(10, OUTPUT); // change this to 53 if you are using arduino mega
  digitalWrite(10, HIGH); // Add this line
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  Serial.print("Setup Demo\n");
  Serial.print("=========================\n");
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    while (1);
  }
  Serial.println("Card initialized.");

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (1) {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(1000); 
  }

}
