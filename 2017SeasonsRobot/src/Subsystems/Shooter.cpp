/*
 * Shooter.cpp
 *
 *  Created on: Jan 15, 2017
 *      Author: neoadmin
 */
#include "Shooter.h"
#include <TalonSRX.h>


Shooter::Shooter(Constant *NASA):
	Subsystem("Shhooter"){
	constant = NASA;
	testmotor = new TalonSRX(constant->Get("MotorTest"));
}


