#include <Wire.h>
#include "SparkFun_u-blox_GNSS_Arduino_Library.h"
SFE_UBLOX_GNSS myGNSS;

void setup()
{
  Serial.begin(115200);
  Serial.println("SparkFun u-blox Example");

  Wire.begin();

  if (myGNSS.begin() == false)
  {
    Serial.println(F("Faulty Connections, Check again."));
    while (1);
  }

  myGNSS.setNMEAOutputPort(Serial);
}

void loop()
{
  myGNSS.checkUblox(); //See if new data is available. Process bytes as they come in.

  delay(250); // i will not use 1 sec delay because i want the coordiantes as accurate as mobile GPS sys