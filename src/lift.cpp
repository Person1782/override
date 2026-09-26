#include "main.h"
#include <cmath>

bool liftBottomed = false;

void lift_opcontrol() {
  if (master.get_digital(DIGITAL_DOWN)) {
    wrist.set(false);
    int motor0Current = std::abs(lift.get_current_draw(0));
    int motor1Current = std::abs(lift.get_current_draw(1));
    if (!liftBottomed) {
      lift.move(-127);
      if (motor0Current > 2450 && motor1Current > 2450 && rotation.get_velocity() <= 50) {
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
  else if (master.get_digital(DIGITAL_B)) {
    lift.move(127);
    wrist.set(true);
    liftBottomed = false;
  }
  else {
    lift.move(0);
  }
}