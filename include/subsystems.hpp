#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake({5, -6});
inline pros::MotorGroup lift({7, -8});
inline ez::Piston wrist('A');
inline pros::Motor claw(-1);

//function declarations to make PROS happy
void intake_opcontrol();
void lift_opcontrol();
void claw_opcontrol();
void wrist_opcontrol();