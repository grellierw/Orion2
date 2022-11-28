#include "main.h"
#include "main.h"




//opControl

void opIntake()
{
    if(Master.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
        intake.move(127);
    else if (Master.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
        intake.move(-127);
    else
        intake.move(0);
}
