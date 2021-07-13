/**
 * \file startallboards.h
 *
 * \ingroup Main
 * 
 * \brief Class def header for a class startallboards
 *
 * @author jiangl
 */

/** \addtogroup Main

    @{*/
#ifndef MAIN_STARTALLBOARDS_H
#define MAIN_STARTALLBOARDS_H

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <unistd.h>
#include <string>
#include <iostream>
#include "Base/CRT.h"

using namespace std;
namespace Main {

/**
   \class startallboards
   User defined class Main ... these comments are used to generate
   doxygen documentation!
*/
  class startallboards{

  public:

    /// Default constructor
    startallboards(){}

    /// Default destructor
    virtual ~startallboards(){};

    //int usb = 32;                     // -1 = all
    string usemultiplefile = "yes";
    int filelength = 5;
    int laserrate = 1000;
    
    int run_length = 2;
    
    int debug = 0;
    string mode = "mysql";

    int disk = 1;                 //Disk number (1 or 2)
    string DataPath = "/OVDAQ/DATA";
    string DataFolder = "/e/h.0/localdev/readout/data" + to_string(disk) + DataPath;

    string online_path = "/e/h.0/localdev";
    string DataPath2 = "/e/h.0/localdev/readout/DCOV";
    
    int totalusb=2;
    int totalpmt=8;
    int totpmt[10];
    int numbaselinetriggers = 1;

    string cmd = online_path + "\\/readout\\/script\\/start_readout.sh \"readout\" \"1\" \"1\" \"none\"";
    system(cmd.c_str());

    int usb[10]             = {  33                   ,   17}; 
    int pmtnumbers[10][10]  = { {5158} ,  {5158,5158,5158,5158,5158,5158,5158}    };
    int pmtboardnum[10][10] = { {3 } ,  {0,1,2,3,4,5,6}       };
    
    //    int usb[10]             = {  33    }; 
    //    int pmtnumbers[10][10]  = { {5158}  };
    //    int pmtboardnum[10][10] = { {3 }  };

    void loadconfig(debug);
  private:

  };
}
#endif
/** @} */ // end of doxygen group 

