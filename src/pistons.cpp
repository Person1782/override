#include "main.h"

void flip_opcontrol() {
  flip.button_toggle(master.get_digital(DIGITAL_DOWN));
}

void claw_opcontrol() {
  claw.button_toggle(master.get_digital(DIGITAL_B));
}