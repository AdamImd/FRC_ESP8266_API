/*
 Name:		BasicUpload.ino
 Created:	9/22/2018 3:51:12 PM
 Author:	Adam
*/

// the setup function runs once when you press reset or power the board

#include <Servo.h>

Servo motor;

void setup() {
	motor.attach(16);
	//pinMode(8, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	for (size_t i = 670; i < 2330; i++)
	{
		motor.write(i);
		delay(5);
	}
	for (size_t i = 2330; i > 670; i--)
	{
		motor.write(i);
		delay(5);
	}
}
