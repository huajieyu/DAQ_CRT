#ifndef MAIN_STARTALLBOARDS_CXX
#define MAIN_STARTALLBOARDS_CXX

#include "startallboards.h"
using namespace std;
Main::Makefile(){

    loadconfig(debug);
    
    initializeboard("auto",500);

    //EBbaseline;
    //write function in CRT.cpp

    eventbuilder(DataPath, totalusb, totalpmt);

    starttakedata;

}


#endif
