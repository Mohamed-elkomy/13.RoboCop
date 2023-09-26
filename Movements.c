#include <stdio.h>
#include <stdlib.h>
#include "Robo.h"

void Encrypted_Order(void){
    C0.HC->u8_Encrypted = C0.u8_Encrypted;
    C0.u8_Encrypted=0;
}
void Send_Order(void){
    char Order[20];
    printf("Please Enter Your Order : ");
    scanf("%s",Order);
    printf("\n");
    if(Order[0] == 'R'  && Order[6] == 'A'){
        C0.u8_Encrypted = Set_Bit(C0.u8_Encrypted,Right_ARM_E);
        printf("\nRight ARM Order is set . \n");
    }
        else if(Order[0] == 'L'  && Order[6] == 'R'){
            C0.u8_Encrypted = Set_Bit(C0.u8_Encrypted,Left_ARM_E);
            printf("\nLeft ARM Order is set . \n");
        }
        else if(Order[0] == 'R'  && Order[6] ==  'L'){
            C0.u8_Encrypted = Set_Bit(C0.u8_Encrypted,Right_LEG_E);
            printf("\nRight LEG Order is set . \n");
        }
        else if(Order[0] == 'L' && Order[6] == 'E'){
            C0.u8_Encrypted = Set_Bit(C0.u8_Encrypted,Left_LEG_E);
            printf("\nLeft Leg Order is set . \n");
        }
}

void Selection_of_Orders(void){
    u8 u8_User_Pick;
    for(;;){
        printf("If you Want another Selection Press 2 : ");
        scanf("%i",&u8_User_Pick);
        printf("\n");
        if(u8_User_Pick==1 ){
                Send_Order();
        }
        else if(u8_User_Pick==2 ){
                break;

        }
        else {printf("\nPlease Re define your purpose. \n ");}
    }

}
void Encryption_Process(void){
    Selection_of_Orders();
    Encrypted_Order();
}


void De_cryption (void){
    if (Read_Bit(M_D.u8_Encrypted,Right_ARM_E)==1){
        Move_Right_ARM();

        }
        if (Read_Bit(M_D.u8_Encrypted,Left_ARM_E)==1){
            Move_Left_ARM();

        }
if (Read_Bit(M_D.u8_Encrypted,Right_LEG_E)==1){
    Move_Right_LEG();
        }
/*if (Read_Bit(M_D.u8_Encrypted,Left_LEG_E)==1){


        }*/

        if (Read_Bit(M_D.u8_Encrypted,Right_ARM_E)==1){

        }

}

void Move_Right_ARM(void){
            u8 u8_User_Pick;
            printf("Pick the movement in sequence of Right ARM : ");
            scanf("%i",&u8_User_Pick);
            if (u8_User_Pick == 1 ){
                Right_ARM.s.volt = 5 ;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_ARM.s.volt=Ninty_Deg;
                        Right_ARM.s.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_ARM.s.volt=One_Eighty;
                    Right_ARM.s.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_ARM.s.volt=Three_Sixty;
                Right_ARM.s.degree=360;
                }

            }
            else if(u8_User_Pick == 2 ){
                    Right_ARM.e.volt=5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_ARM.e.volt=Ninty_Deg;
                        Right_ARM.e.degree=90;

                }
                else if(u8_User_Pick_P == 2){
                    Right_ARM.e.volt=One_Eighty;
                    Right_ARM.e.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_ARM.e.volt=Three_Sixty;
                Right_ARM.e.degree=360;
                }

            }
            else if(u8_User_Pick == 2 ){
                    Right_ARM.w.volt=5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_ARM.w.volt=Ninty_Deg;
                        Right_ARM.w.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_ARM.w.volt=One_Eighty;
                    Right_ARM.w.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_ARM.w.volt=Three_Sixty;
                Right_ARM.w.degree=360;
                }
            }
            else if(u8_User_Pick == 2 ){
                    Right_ARM.f.volt = 5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_ARM.f.volt=Ninty_Deg;
                        Right_ARM.f.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_ARM.f.volt=One_Eighty;
                    Right_ARM.f.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_ARM.f.volt=Three_Sixty;
                Right_ARM.f.degree=360;
                }

            }

            }
void Move_Left_ARM(void){
    u8 u8_User_Pick;
            printf("Pick the movement in sequence of Left ARM : ");
            scanf("%i",&u8_User_Pick);
            if (u8_User_Pick == 1 ){
                Left_ARM.s.volt = 5 ;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Left_ARM.s.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Left_ARM.s.volt=One_Eighty;
                    Left_ARM.s.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Left_ARM.s.volt=Three_Sixty;
                Left_ARM.s.degree=360;
                }

            }
            else if(u8_User_Pick == 2 ){
                    Left_ARM.e.volt=5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Left_ARM.e.volt=Ninty_Deg;
                        Left_ARM.e.degree=90;

                }
                else if(u8_User_Pick_P == 2){
                    Left_ARM.e.volt=One_Eighty;
                    Left_ARM.e.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Left_ARM.e.volt=Three_Sixty;
                Left_ARM.e.degree=360;
                }

            }
            else if(u8_User_Pick == 2 ){
                    Left_ARM.w.volt=5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Left_ARM.w.volt=Ninty_Deg;
                        Left_ARM.w.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Left_ARM.w.volt=One_Eighty;
                    Left_ARM.w.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Left_ARM.w.volt=Three_Sixty;
                Left_ARM.w.degree=360;
                }
            }
            else if(u8_User_Pick == 2 ){
                    Left_ARM.f.volt = 5;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Left_ARM.f.volt=Ninty_Deg;
                        Left_ARM.f.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Left_ARM.f.volt=One_Eighty;
                    Left_ARM.f.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Left_ARM.f.volt=Three_Sixty;
                Left_ARM.f.degree=360;
                }

            }

            }
void Move_Right_LEG(void){
    u8 u8_User_Pick;
            printf("Pick the movement in sequence of Right Leg : ");
            scanf("%i",&u8_User_Pick);
            if (u8_User_Pick == 1 ){
                Right_LEG.WE.volt = 5 ;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_LEG.WE.volt=Ninty_Deg;
                        Right_LEG.WE.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_LEG.WE.volt=One_Eighty;
                        Right_LEG.WE.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_LEG.WE.volt=Three_Sixty;
                        Right_LEG.WE.degree=360;
                }

            }
            else if(u8_User_Pick == 2 ){
                    Right_LEG.k.volt = 5 ;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_LEG.k.volt=Ninty_Deg;
                        Right_LEG.k.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_LEG.k.volt=One_Eighty;
                        Right_LEG.k.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_LEG.k.volt=Three_Sixty;
                        Right_LEG.k.degree=360;
                }}
            else if(u8_User_Pick == 3 ){
                    Right_LEG.fl.volt = 5 ;

                u8 u8_User_Pick_P;
                printf("Please enter the degree in sequence : ");
                scanf("%i",&u8_User_Pick_P);
                if(u8_User_Pick_P == 1 ){
                        Right_LEG.fl.volt=Ninty_Deg;
                        Right_LEG.fl.degree=90;
                }
                else if(u8_User_Pick_P == 2){
                    Right_LEG.fl.volt=One_Eighty;
                        Right_LEG.fl.degree=180;
                }
                else if(u8_User_Pick_P == 3){
                Right_LEG.fl.volt=Three_Sixty;
                        Right_LEG.fl.degree=360;
                }



            }}


                /*
void Move_Left_LEG(void){
            }*/
