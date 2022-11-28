#include "main.h"




//pros::Motor intake(1, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);


/*-----------------------------------------
-------------- Motors----------------------
-----------------------------------------*/

//Drive Base -- labeled 1 - 4 starting on the cata side
pros::Motor left1(1, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left2(2, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left3(3, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor left4(10, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);

pros::Motor right1(12, pros::E_MOTOR_GEAR_600, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right2(13, pros::E_MOTOR_GEAR_600, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right3(14, pros::E_MOTOR_GEAR_600, true, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor right4(15, pros::E_MOTOR_GEAR_600, true, pros::E_MOTOR_ENCODER_COUNTS);

//Catapult
pros::Motor cataLeft(9, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor cataRight(10, pros::E_MOTOR_GEAR_600, false, pros::E_MOTOR_ENCODER_COUNTS);

//Intake
pros::Motor intake(11,pros::E_MOTOR_GEAR_600,false,pros::E_MOTOR_ENCODER_COUNTS);




//Controller

pros::Controller Master(pros::E_CONTROLLER_MASTER);