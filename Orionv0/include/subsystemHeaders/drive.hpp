#ifndef _DRIVE_HPP_
#define _DRIVE_HPP_
#include "api.h"





//opControl
int opDeadZone(int stickVal);
int opExpo(int stickVal);
int stickFilter(int stickVal);

//Auto

//Helper
void arcadeControl(int power, int turn);


void setDrive(int leftVal, int rightVal);

#endif