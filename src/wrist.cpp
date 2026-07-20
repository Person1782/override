#include "main.h"

void wrist_logic() {
    double lift_position = (lift.get_position(0) + lift.get_position(1)) / 2.0; // Average position of the lift motors
    if(lift_position <= 5){
        wrist.set(false); // Set wrist to down position
    } else {
        wrist.set(true); // Set wrist to up position
    }
}