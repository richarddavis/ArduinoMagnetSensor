#include <MagnetSensor.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

MagnetSensor m;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  m.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Magnet strength in the X direction: ");
  Serial.println(m.getX());
  Serial.print("Magnet strength in the Y direction: ");
  Serial.println(m.getY());
  Serial.print("Magnet strength in the Z direction: ");
  Serial.println(m.getZ());
}
