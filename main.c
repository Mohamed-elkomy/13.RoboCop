#include <stdio.h>
#include <stdlib.h>
#include "Robo.h"
// Car MCU
int main()
{
    Robo_Init();
    Motors_Init();
    Controller_Init();
    Parts_Init();
    for(;;){
            Display_state();
    Encryption_Process();
    De_cryption();

    }


    return 0;
}
