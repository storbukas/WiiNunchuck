/*
 *  DS3231: Real-Time Clock. Alarm simple
 *
 *  created 03 Feb 2021
 *  by Lars Erik Storbukås <https://github.com/storbukas>
 *
 *  Source: https://github.com/storbukas/WiiNunchuck
 *
 *  Licensed under the MIT License
 *  https://opensource.org/licenses/MIT
 *
 */

// ---------------------------------------------------------------------
// INCLUDES
//
#include <Wire.h>

#include "WiiNunchuk.h"

// ---------------------------------------------------------------------
// SETUP
//
void setup() {
  Serial.begin(9600);
  Wire.begin();
  // nunchuk_init_power(); // A1 and A2 is power supply
  nunchuk_init();
}

// ---------------------------------------------------------------------
// LOOP
//
void loop() {
  if (nunchuk_read()) {
    // Work with nunchuk_data
    nunchuk_print();
  }
  delay(10);
}