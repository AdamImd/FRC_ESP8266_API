#ifndef _JAGUAR_H
#define _JAGUAR_H

#include "Protocols/PWMSpeedController.h"
#include "../MotorController.h"

class Jaguar :public PWMSpeedController, public MotorController
{
public:
	Jaguar(int channel);
	void MotorController::set(double speed) override;
	void MotorController::setInverted(double speed) override;
	double MotorController::get(double speed) override;
	double MotorController::getInverted(double speed) override;

private:
	int p_Channel;
	int p_DefaultPWM;
	int p_MinimumPWM;
	int p_MaximumPWM;
	int p_RefreshPWM;
};

#endif
