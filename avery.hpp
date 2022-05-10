#include "main.h"
#include "subsystems.hpp"

#ifndef PROFILES
#define PROFILES

//functions
extern void driveIt(int targHeading, double rpm);
extern void chassisProfiling(double target, double error, long double aggr, double targHeading, int timeOut=60000);
extern void driveItCurve(double targHeading, double rpm, double delay, double initHead, int multiplier);
extern void curveProfiling(double target, double error, long double aggr, double targHeading, double delay, double initHead, bool forward, int timeOut=60000);


//Misc.
extern double headg;
extern int multiplier;

#endif
