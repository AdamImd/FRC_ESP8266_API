#include "PWMSpeedController.h"

PWMSpeedController::PWMSpeedController(int channel, int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth, int refreshInterval)
{
	PWM::PWM(channel, refreshInterval);
	p_DefaultPulsewidth = defaultPulseWidth;
	p_MinimumPulseWidth = minimumPulseWidth;
	p_MaximumPulseWidth = maximumPulseWidth;
	p_Speed = -1;
}

void PWMSpeedController::PWMspeed(double speed)
{
	p_Speed = speed;
	double range = (p_MaximumPulseWidth - p_MinimumPulseWidth) / 2;
	PWM::setRawPWM(p_DefaultPulsewidth + range*p_Speed);
}

double PWMSpeedController::PWMGetSpeed()
{
	return p_Speed;
}

void PWMSpeedController::setBounds(int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth)
{
	p_DefaultPulsewidth = defaultPulseWidth;
	p_MinimumPulseWidth = minimumPulseWidth;
	p_MaximumPulseWidth = maximumPulseWidth;
}
