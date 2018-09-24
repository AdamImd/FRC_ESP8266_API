#include "PWMSpeedController.h"

PWMSpeedController::PWMSpeedController(int channel, int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth, int refreshInterval)
{
	PWM(channel, refreshInterval);
	p_DefaultPulsewidth = defaultPulseWidth;
	p_MinimumPulseWidth = minimumPulseWidth;
	p_MaximumPulseWidth = maximumPulseWidth;
}

void PWMSpeedController::PWMspeed(double speed)
{
	double range = (p_MaximumPulseWidth - p_MinimumPulseWidth) / 2;
	PWM::setRawPWM(range*speed);
}

void PWMSpeedController::setBounds(int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth)
{
	p_DefaultPulsewidth = defaultPulseWidth;
	p_MinimumPulseWidth = minimumPulseWidth;
	p_MaximumPulseWidth = maximumPulseWidth;
}
