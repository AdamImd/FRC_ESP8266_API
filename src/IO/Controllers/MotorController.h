#ifndef _MOTORCONTROLLER_H
#define _MOTORCONTROLLER_H

class MotorController
{
public:
	virtual void set(double speed)=0;
	virtual void setInverted(double speed) = 0;
	virtual double get() = 0;
	virtual double getInverted() = 0;
};

#endif