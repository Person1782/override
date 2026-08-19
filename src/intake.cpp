#include "main.h"

void intake_opcontrol() {
  if (master.get_digital(DIGITAL_R1)) {
    intake.move(127);
  }
  else if (master.get_digital(DIGITAL_R2)) {
    intake.move(-127);
  }
  else {
    intake.move(0);
  }
}