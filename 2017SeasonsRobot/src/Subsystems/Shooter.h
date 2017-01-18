/*
 * Shooter.h
 *
 *  Created on: Jan 15, 2017
 *      Author: neoadmin
 */

#ifndef SRC_SUBSYSTEMS_SHOOTER_H_
#define SRC_SUBSYSTEMS_SHOOTER_H_
#include <TalonSRX.h>
#include <Constant.h>
#include "Commands/PIDSubsystem.h"
class Shooter: public Subsystem{
private:

	TalonSRX *testmotor;
	Constant *constant;

public:
Shooter(Constant *NASA);

};





#endif /* SRC_SUBSYSTEMS_SHOOTER_H_ */
