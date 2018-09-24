// PWM.h

#ifndef _PWM_h
#define _PWM_h
#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "esp8266/core_esp8266_waveform.h"
#include "esp8266/Arduino.h"
#endif

class PWM
{
private:
	int p_Channel;
	int p_RefreshInterval;
protected:
	PWM(int channel, int refreshInterval);
	void setRawPWM(int pulseWidth);
};