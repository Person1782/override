#include "main.h"

void claw_opcontrol() {
  if (master.get_digital(DIGITAL_A)) {
    claw.move(127);
  } else if (master.get_digital(DIGITAL_B)) {
    claw.move(-127);
  } else {
    claw.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
    claw.move(-10);
  }
}
