#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup lift({-7, 8});
inline pros::Motor claw(-9);

//function declarations to make PROS happy
void lift_opcontrol();
void claw_opcontrol();
