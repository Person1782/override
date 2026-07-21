#include "main.h"

void wrist_logic() {
    if (wrist_macro_active) {
        double lift_position = (lift.get_position(0) + lift.get_position(1)) / 2.0; // Average position of the lift motors
        if(lift_position <= 5){
            wrist.set(false); // Set wrist to retracted position
        } else {
            wrist.set(true); // Set wrist to extended position
        }
    }
}

void wrist_opcontrol() {
    if(!wrist_macro_active){
        wrist.button_toggle(master.get_digital(DIGITAL_UP));
    }
}

void get_wrist_macro_active() {
    if(master.get_digital_new_press(DIGITAL_UP) && master.get_digital(DIGITAL_DOWN)) {
        wrist_macro_active = !wrist_macro_active; // Toggle the wrist macro active state
    }
}