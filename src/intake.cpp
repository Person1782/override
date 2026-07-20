#include "main.h"

void intake_opcontrol() {
  if (master.get_digital(DIGITAL_L1)) {
    intake.move(127);
  }
  else if (master.get_digital(DIGITAL_L2)) {
    intake.move(-127);
  }
  else {
    intake.move(0);
  }
}