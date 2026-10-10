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
      if (motor0Current > 2450 && motor1Current > 2450 && abs(rotation.get_velocity()) < 60) { 
        //abs(lift[0].get_actual_velocity()) < 2 && abs(lift[1].get_actual_velocity()) < 2) try this if the above doesn't work
        liftBottomed = true;   
        lift.move_relative(170, 127);
      }
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
  else if (!liftBottomed) {
    lift.move(0);
  }
}