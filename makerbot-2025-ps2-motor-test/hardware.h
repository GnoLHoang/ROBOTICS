/*
Apparently defining all channels here is possible.

Working is prioritized over cleaning here, and defining channels
in specialized headers is not that messy, so I decided not to.
*/

#pragma once
#include <Adafruit_PWMServoDriver.h>

//#define SERVO_1_CHANNEL 2
//#define SERVO_2_CHANNEL 3
//#define SERVO_3_CHANNEL 4
//#define SERVO_4_CHANNEL 5
//#define SERVO_5_CHANNEL 6
//#define SERVO_6_CHANNEL 7

extern Adafruit_PWMServoDriver pwm;