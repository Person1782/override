#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::MotorGroup intake({5, -6});
inline pros::MotorGroup lift({7, -8});
inline ez::Piston claw('A');
inline ez::Piston flip('B');
inline ez::Piston wrist('C');


//function declarations to make PROS happy
void intake_opcontrol();
void lift_opcontrol();
void flip_opcontrol();
void claw_opcontrol();
void wrist_logic();
void wrist_opcontrol();
void get_wrist_macro_active();