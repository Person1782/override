#include "main.h"

void wrist_opcontrol() {
	wrist.button_toggle(master.get_digital_new_press(DIGITAL_DOWN));
}