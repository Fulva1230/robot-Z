//
// Created by fulva on 4/13/19.
//

#include "MotorActivateCom.h"
//#define DEBUG

const static double damping = 0.3;


void MotorActivateCom::execute(const int16_t *params) {
    double cre = damping * (target - cSpeed);
    cSpeed = static_cast<int16_t>(cre + cSpeed);
    motor.drive(cSpeed);
#ifdef DEBUG
    Serial.print("drive motor run at speed :");
    Serial.println(cSpeed);
#endif
}
