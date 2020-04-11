//
//  Includes.h
//  Project_ServiceDesk_trial.01
//
//  Created by Youssef on 4/3/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef Includes_h
#define Includes_h
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Name{
    string First_name;
    string Middle_name;
    string Last_name;
};

struct Date{
    int Day;
    int Month;
    int Year;
};

struct Address{
    string addr;
    string city;
    string country;
};

struct Time{
    int hours;
    int mins;
    int sec;
    
};

struct working_hours{
    Time start_shift;
    Time end_shift;
};


#endif /* Includes_h */
