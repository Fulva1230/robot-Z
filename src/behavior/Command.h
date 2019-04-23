//
// Created by fulva on 4/12/19.
//

#ifndef ROBOT_Z_COMMAND_H
#define ROBOT_Z_COMMAND_H


#include <WString.h>

class Command {
public:
    explicit Command(const String &identifier);

    const String &toString();

    virtual void execute(const String params[5]) = 0;

private:
    String identifier;
};


#endif //ROBOT_Z_COMMAND_H
