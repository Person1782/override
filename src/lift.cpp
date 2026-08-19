#include "main.h"

void lift_opcontrol() {
  if (master.get_digital(DIGITAL_L1)) {
    lift.move(120);
  } 
  else if (master.get_digital(DIGITAL_L2)) {
    lift.move(-120);
  } 
  else {
    lift.move(-2.5);
  }
}

