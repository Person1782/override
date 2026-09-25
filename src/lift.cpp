#include "main.h"
bool liftBottomed = false;

void lift_opcontrol() {
  lift.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);

  if (master.get_digital(DIGITAL_DOWN)) {
    wrist.set(false);

    int motor0Current = lift.get_current_draw(0);
    int motor1Current = lift.get_current_draw(1);
    if (!liftBottomed) {
      lift.move(-127);

      if (motor0Current > 2450 && motor1Current > 2450) {
        lift.move(0);
        rotation.reset_position();
        liftBottomed = true;
      }
    }
    else if (rotation.get_position() < 4000) {
      lift.move(127);
    }
    else {
      lift.move(0);
    }
  }
  else if (master.get_digital(DIGITAL_L2)) {
    lift.move(-127);
    liftBottomed = false;
  }

  else if (master.get_digital(DIGITAL_L1)) {
    lift.move(127);
    liftBottomed = false;
  }

  else if(master.get_digital(DIGITAL_B)) {
    lift.move(127);
    liftBottomed = false;
    wrist.set(true);
  }

  else {
    lift.move(0);
  }
}