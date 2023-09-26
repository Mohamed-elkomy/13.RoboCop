#include <stdio.h>
#include <stdlib.h>
#include "Robo.h"
void Controller_Init(void){
    C0.HC=&M_D;
}
void Motors_Init(void){
    M_D.Left_ARM_D.Arm_Motor=&Left_ARM;
    M_D.Right_ARM_D.Arm_Motor=&Right_ARM;
    M_D.Left_LEG_D.Leg_Motor=&Left_LEG;
    M_D.Right_LEG_D.Leg_Motor=&Right_LEG;
    printf("Motors initialized successfully.");
}

