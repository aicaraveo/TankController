/**
 * SetPHCalibClear.h
 *
 * Clear pH Calibration
 */
#pragma once
#include "UIState.h"

class SetPHCalibClear : public UIState {
public:
  SetPHCalibClear(TankController* tc) : UIState(tc) {
  }
  void handleKey(char key);
  const __FlashStringHelper* name() {
    return F("SetPHCalibClear");
  }
  const __FlashStringHelper* prompt() {
    return F("A: Clear pH Cali");
  };
};
