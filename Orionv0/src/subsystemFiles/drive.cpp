#include "main.h"


#define DEADZONE 5



//opControl

int opDeadZone(int stickVal)
{
    if(std::abs(stickVal) >= DEADZONE)
        return stickVal;
    else
        return false;
}

int opExpo(int stickVal)
{
    if(stickVal > 0)
        return 0.8199333216 * std::pow(1.040505291, stickVal);
    else if(stickVal < 0)
        return -(0.8199333216 * std::pow(1.040505291, std::abs(stickVal)));
    else
        return 0;
}

int stickFilter(int stickVal)
{
    stickVal = opDeadZone(stickVal);
    return opExpo(stickVal);  
}


//Auto









//Helper

void arcadeControl(int power, int turn)
{
    setDrive(power - turn, power + turn);
}


void setDrive(int leftVal, int rightVal)
{
    left1.move(leftVal);
    left2.move(leftVal);
    left3.move(leftVal);
    left4.move(leftVal);

    right1.move(rightVal);
    right2.move(rightVal);
    right3.move(rightVal);
    right4.move(rightVal);
}