#include "main.h"

void intake_opcontrol() {
  if (master.get_digital(DIGITAL_B)) {
    intake.move(127);
  } 
  else if (master.get_digital(DIGITAL_A)) {
    intake.move(-127);
  } 
  else {
    intake.move(0);
  }
}