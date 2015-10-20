#include "Arduino.h"
#include "MagnetSensor.h"

// Libraries for the Adafruit LSM303
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

MagnetSensor::MagnetSensor()
{
  _mag = Adafruit_LSM303_Mag_Unified(12345);
}

bool MagnetSensor::init()
{
  /* Initialise the sensor */
  if(!_mag.begin())
  {
    /* There was a problem detecting the MagnetSensor ... check your connections */
    return(false);
  } else {
    // MagnetSensor initialized successfully
    return(true);
  }
  _mag.enableAutoRange(true);
}

int MagnetSensor::getX() {
  sensors_event_t event;
  _mag.getEvent(&event);
  return event.magnetic.x;
}

int MagnetSensor::getY() {
  sensors_event_t event;
  _mag.getEvent(&event);
  return event.magnetic.y;
}

int MagnetSensor::getZ() {
  sensors_event_t event;
  _mag.getEvent(&event);
  return event.magnetic.z;
}
