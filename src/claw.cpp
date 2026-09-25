#include "main.h"

void claw_opcontrol() {
	if (master.get_digital(DIGITAL_X)) {
		claw.move(127);
	}
	else if (master.get_digital(DIGITAL_A)) {
		claw.move(-127);
	}
	else if (master.get_digital(DIGITAL_R2)) {
		claw.move(127);
	}
	else {
		claw.move(0);
	}
}