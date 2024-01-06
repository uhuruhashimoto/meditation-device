
/*
 * Code from https://docs.arduino.cc/tutorials/mkr-zero/mkr-zero-data-logger
 */
#include <SPI.h>
#include <SD.h>
const int chipSelect = SDCARD_SS_PIN;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    while (1);
  }
  Serial.println("Card initialized.");
}

void loop() {
  // put your main code here, to run repeatedly:
  while (1) {
    ;
  }

}
