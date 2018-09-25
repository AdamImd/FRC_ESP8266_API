// PWMSpeedController.h

#ifndef _PWMSPEEDCONTROLLER_h
#define _PWMSPEEDCONTROLLER_h

#include "./PWM/PWM.h"

class PWMSpeedController:private PWM
{
private:
	int p_DefaultPulsewidth;
	int p_MinimumPulseWidth;
	int p_MaximumPulseWidth;
	double p_Speed;
protected:
	PWMSpeedController(int channel, int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth, int refreshInterval);
public:
	double PWMGetSpeed();
	void PWMspeed(double speed);
	void setBounds(int defaultPulseWidth, int minimumPulseWidth, int maximumPulseWidth);
};

#endif

