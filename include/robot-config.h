using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern smartdrive Drivetrain;
extern motor IntakeLeft;
extern motor IntakeRight;
extern motor EscalatorRamp;
extern motor Sorter;
extern signature FrontVision__RED_BALL;
extern signature FrontVision__BLUE_BALL;
extern signature FrontVision__GOAL;
extern signature FrontVision__SIG_4;
extern signature FrontVision__SIG_5;
extern signature FrontVision__SIG_6;
extern signature FrontVision__SIG_7;
extern vision FrontVision;
extern signature InnerVision__RED_BALL;
extern signature InnerVision__BLUE_BALL;
extern signature InnerVision__GOAL;
extern signature InnerVision__SIG_4;
extern signature InnerVision__SIG_5;
extern signature InnerVision__SIG_6;
extern signature InnerVision__SIG_7;
extern vision InnerVision;
extern bumper BallDetector;
extern controller Controller1;
extern limit TeamSwitcher;
extern pot ModePotentiometer;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );