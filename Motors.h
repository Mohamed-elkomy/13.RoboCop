struct A_Driver {
    int volt;
    struct ARM *Arm_Motor;
};
struct L_Driver {
    int volt;
    struct LEG *Leg_Motor;
};
struct Driver {
    u8 u8_Encrypted;
    struct A_Driver Right_ARM_D;
    struct A_Driver Left_ARM_D;
    struct L_Driver Left_LEG_D;
    struct L_Driver Right_LEG_D;
}M_D;
struct Controller{
    u8 u8_Encrypted;
    struct Driver *HC;
}C0;
void Send_Order(void);
void Selection_of_Orders(void);
void Encryption_Process(void);
void Move_Right_LEG(void);
void Move_Right_ARM(void);
void Move_Left_LEG(void);
void Move_Left_ARM(void);
void De_cryption (void);
