
#ifndef CRT_h
#define CRT_h

#include <stdio.h>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

void reset();

void setup_pmt(int usb[10], int pmtnumber[10][10], int pmtboardnumber[10][10], int *totusb, int totpmt[]);


void initializeboard(string define_runnumber, int trigger_num, int pmtini, int pmtfin);

void generatebaseline(int usb, int pmt);

void initializeusb(int usb, int pmt);

void baselinemb(int disk);

void takedatamb(int run_length);

void getavg(string sumfile, int usb, int pmtmb, int col);

void process_signal(int usb);

void loadconfig(string mode_local, int usb_board, int pmt_board, int triggerbox);
int scanFiles(string inputDirectory);
void test_system_time(int usb, int pmt);
bool JudgeNum(string str, int iTmp);
void check_system_time();
void starttakedata(int pmtini, int pmtfin, int boxini, int boxfin);
void stoptakedata(int pmtini, int pmtfin, int boxini, int boxfin);
void getpmtdata(int usbboard, int pmtnumber);
void setpmtdata(int usbboard, int pmtnumber);
void loadpmtdata_auto(int usb, int pmt, int pmtserialnumber, string mysql_table);
void loadpmtdata(int usb, int pmt, int SWITCH, string gate_override);
int scanSignalFiles(vector<string> &fileList, string inputDirectory, int usb);
void generatecsv2(int usb, int pmt);
void checkeff(int usb, int pmt3);
void generatecsv(int usb, int pmt);
void plotdatamb(int usb, int pmt);
void signals(string dir, string file, string baselines, int usb, int pmt_board, string homedir);
void SplitString(string s, vector<string> &v, string c);
void check_rate(int tot_pmt, int tot_usb, int boxusb, int switchonoff);


#endif /* main_h */
