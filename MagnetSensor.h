/*
MagnetSensor.h
*/

#ifndef MagnetSensor_h
#define MagnetSensor_h

#include "Arduino.h"
#include <Wire.h>

// Include libraries for the Adafruit LSM303 accelerometer
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

class MagnetSensor
{
 public:

  MagnetSensor();
  bool init();
  int getX();
  int getY();
  int getZ();

 private:

  Adafruit_LSM303_Mag_Unified _mag;
};

#endif
