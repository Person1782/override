#include "main.h"

void matchloadPiston_opcontrol() {
  if (master.get_digital_new_press(DIGITAL_LEFT)) {
    matchloadPiston.set(!matchloadPiston.get());
  }
  else if (master.get_digital_new_press(DIGITAL_LEFT)) {
    matchloadPiston.set(!matchloadPiston.get());
  }
}