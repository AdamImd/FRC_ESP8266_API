#include "PWM.h"

PWM::PWM(int channel, int refreshInterval)
{
	p_Channel = channel;
	p_RefreshInterval = refreshInterval;
	pinMode(p_Channel, OUTPUT);
	digitalWrite(p_Channel, LOW);
}

void PWM::setRawPWM(int pulseWidth)
{
	startWaveform(p_Channel, pulseWidth, p_RefreshInterval - pulseWidth, 0);
}
