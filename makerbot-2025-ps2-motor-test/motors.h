#include <stdio.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include "hardware.h"

#define MIN_PWM 0
#define MAX_PWM 4095

// PWM channels of pca9685 0-16
#define PWM_CHANNEL1 8
#define PWM_CHANNEL2 9
#define PWM_CHANNEL3 10
#define PWM_CHANNEL4 11
#define PWM_CHANNEL5 12
#define PWM_CHANNEL6 13
#define PWM_CHANNEL7 14
#define PWM_CHANNEL8 15

//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setPWMMotors(
  int c1 = 0, int c2 = 0, int c3 = 0, int c4 = 0,
  int c5 = 0, int c6 = 0, int c7 = 0, int c8 = 0)
{
  char dbg_str[80];
  sprintf(dbg_str, "C1: %d\tC2: %d\tC3: %d\tC4: %d\tC5: %d\tC6: %d\tC7: %d\tC8: %d",
    c1, c2, c3, c4, c5, c6, c7, c8);
  Serial.println(dbg_str);

  pwm.setPin(PWM_CHANNEL1, c1);
  pwm.setPin(PWM_CHANNEL2, c2);
  pwm.setPin(PWM_CHANNEL3, c3);
  pwm.setPin(PWM_CHANNEL4, c4);

  pwm.setPin(PWM_CHANNEL5, c5);
  pwm.setPin(PWM_CHANNEL6, c6);
  pwm.setPin(PWM_CHANNEL7, c7);
  pwm.setPin(PWM_CHANNEL8, c8);
}

void initMotors()
{
  Wire.begin(); // SDA, SCL,400000);
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(1600);
  Wire.setClock(400000);

  setPWMMotors(0, 0, 0, 0);
}