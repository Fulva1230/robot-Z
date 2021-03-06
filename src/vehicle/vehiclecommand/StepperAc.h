//
// Created by Fulva on 4/27/2019.
//

#ifndef ROBOT_Z_STEPPERAC_H
#define ROBOT_Z_STEPPERAC_H


#include <behavior/VehicleCommand.h>
#include <mechanism/StepperFront.h>

class StepperAc : public VehicleCommand {
public:
    template<class T>
    StepperAc(T ident, StepperFront &stepper) : VehicleCommand(
            ident), stepper(stepper) {}

private:
    void execute(const int16_t *params) override;

private:
    StepperFront &stepper;

};


#endif //ROBOT_Z_STEPPERAC_H
