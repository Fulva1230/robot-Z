//
// Created by Fulva on 4/27/2019.
//

#ifndef ROBOT_Z_STEPPERAC_H
#define ROBOT_Z_STEPPERAC_H


#include <behavior/VehicleCommand.h>

class StepperAc: public VehicleCommand {
public:
    StepperAc(AbstractVehicle &vehicle, const String &identifier, StepperFront &stepper);

private:
    void execute(AbstractVehicle &vehicle, const int16_t *params) override;

private:
    StepperFront& stepper;

};


#endif //ROBOT_Z_STEPPERAC_H