#include <stdio.h>
#include <stdlib.h>
#include "Robo.h"

void Robo_Init(void){
    Left_ARM.s.elbow=&Left_ARM.e;
    Left_ARM.e.wrist=&Left_ARM.w;
    Left_ARM.w.finger=&Left_ARM.f;
    printf("\n Left Arm Initialized Successfully.");
    Right_ARM.s.elbow=&Right_ARM.e;
    Right_ARM.e.wrist=&Right_ARM.w;
    Right_ARM.w.finger=&Right_ARM.f;
    printf("\n Right Arm Initialized Successfully.\n\n");
    Left_LEG.WE.knee=&Left_LEG.k;
    Left_LEG.k.foot=&Left_LEG.fl;
    printf("Left Leg initialized successfully.");
    Right_LEG.WE.knee=&Right_LEG.k;
    Right_LEG.k.foot=&Right_LEG.fl;
    printf("\n Right Leg Initialized Successfully.\n\n");

}
void Parts_Init(void){
    Left_ARM.s.volt=VOLT_LOW;
    Left_ARM.e.volt=VOLT_LOW;
    Left_ARM.w.volt=VOLT_LOW;
    Left_ARM.f.volt=VOLT_LOW;

    Right_ARM.s.volt=VOLT_LOW;
    Right_ARM.e.volt=VOLT_LOW;
    Right_ARM.w.volt=VOLT_LOW;
    Right_ARM.f.volt=VOLT_LOW;

    Left_LEG.WE.volt=VOLT_LOW;
    Left_LEG.k.volt=VOLT_LOW;
    Left_LEG.fl.volt=VOLT_LOW;

    Right_LEG.WE.volt=VOLT_LOW;
    Right_LEG.k.volt=VOLT_LOW;
    Right_LEG.fl.volt=VOLT_LOW;
}
