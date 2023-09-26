struct Finger {
    int volt;
    int degree;
};
struct Wrist {
    int volt;
    int degree;
    struct Finger *finger;
};
struct Elbow {
    int volt ;
    int degree;
    struct Wrist *wrist;
};
struct Shoulder{
    int volt;
    int degree;
    struct Elbow *elbow;
};
struct Waist_END {
    int volt;
    int degree;
    struct Knee *knee;
};
struct Knee {
int volt ;
int degree;
struct Foot *foot;
};
struct Foot{
int volt;
int degree;
};

struct ARM {
    struct Shoulder s;
    struct Elbow e;
    struct Wrist w;
    struct Finger f;
}Left_ARM , Right_ARM;
struct LEG{
    struct Waist_END WE;
    struct Knee k;
    struct Foot fl;
}Right_LEG , Left_LEG;
