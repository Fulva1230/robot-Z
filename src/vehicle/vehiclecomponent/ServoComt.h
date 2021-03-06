//
// Created by fulva on 4/28/19.
//

#ifndef ROBOT_Z_SERVOCOMT_H
#define ROBOT_Z_SERVOCOMT_H


#include <vehicle/vehiclecommand/ServoControllCom.h>
#include <mechanism/ServoFront.h>
#include <vehicle/vehiclecommand/ServoAc.h>
#include "VehicleComt.h"

class ServoComt : public VehicleComt {
public:
    template<class T>
    ServoComt(T servoComIdent, T servoAcIdent, uint8_t pin, uint8_t defaultAngle)
            : servoCom(servoComIdent,
                       servoFront),
              servoAc(servoAcIdent,
                      servoFront),
              servoFront(pin, defaultAngle) {
        attachCommand(servoCom);
        attachCommand(servoAc);
    }

private:
    ServoFront servoFront;
    ServoControllCom servoCom;
    ServoAc servoAc;
};


#endif //ROBOT_Z_SERVOCOMT_H
