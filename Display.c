#include <stdio.h>
#include <stdlib.h>
#include "Robo.h"


void Display_state(){
    printf("\n\n\nRobot State : \n");
    printf("Right ARM : \nVolt : \n");
    printf("\n shoulder : %i - elbow : %i - wrist : %i - finger : %i \n",Right_ARM.s.volt,Right_ARM.e.volt,Right_ARM.w.volt,Right_ARM.f.volt);
    printf("Left ARM : \nVolt : \n");
    printf("\n shoulder : %i - elbow : %i - wrist : %i - finger : %i \n",Left_ARM.s.volt,Left_ARM.e.volt,Left_ARM.w.volt,Left_ARM.f.volt);
    printf("Right Leg : \nVolt : \n");
    printf("\n Waist End : %i - Knee : %i - Foot : %i\n",Right_LEG.WE.volt,Right_LEG.k.volt,Right_LEG.fl.volt);
    printf("Left Leg : \nVolt : \n");
    printf("\n Waist End : %i - Knee : %i - Foot : %i\n",Right_LEG.WE.volt,Right_LEG.k.volt,Right_LEG.fl.volt);

}


