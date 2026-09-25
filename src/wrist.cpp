#include "main.h"

void wrist_opcontrol() {
	if (master.get_digital_new_press(DIGITAL_UP)) {
		wrist.set(!wrist.get());
	}
}