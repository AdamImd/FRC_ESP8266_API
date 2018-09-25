#include "Jaguar.h"

Jaguar::Jaguar(int channel)
{
	p_Channel = channel;

	p_DefaultPWM = 1500;
	p_MinimumPWM = 670;
	p_MaximumPWM = 2330;
	p_RefreshPWM = 20000;

	PWMSpeedController::PWMSpeedController(p_Channel, p_DefaultPWM, p_MinimumPWM, p_MaximumPWM, p_RefreshPWM);
}

void MotorController::set(double speed)
{
	PWMSpeedController::PWMspeed(speed);
}

void MotorController::setInverted(double speed)
{
	PWMSpeedController::PWMspeed(-speed);
}

double MotorController::get()
{
	return PWMSpeedController::PWMGetSpeed();
}

double MotorController::getInverted()
{
	return -PWMSpeedController::PWMGetSpeed();
}