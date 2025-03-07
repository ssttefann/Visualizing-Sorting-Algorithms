//=======================================================================================
// Name        : IO.h
// Author      : Stefan Kandic
// Date        : 8.1.2018.
// Copyright   : 
// Description : Specification of a class that is responsible supplying the GUI component 
//				 of the program with information required for a program to run properly,  
//				 and also to write new information to the specified file
//=======================================================================================
#pragma once
#include <string.h>
#include <iostream>
#include <FL/Fl_Native_File_Chooser.H>
#include <vector>
#include <set>
#include "VisualizedNumber.h"
using namespace std;

class IO {

public:

	string zaglavlje;
	string inPath = "";
	string outPath = "";
	string crit = "";
	string type = "";
	vector<double> nums;
	vector<VisualizedNumber> viz, njiz;

	IO() {}
	IO(IO &io);
	IO(string s1, string s2);
	IO(string s1);

	void setInPath(string s);
	void loadFlights();
	void writeFlights(vector<VisualizedNumber*> &v,string header);

};