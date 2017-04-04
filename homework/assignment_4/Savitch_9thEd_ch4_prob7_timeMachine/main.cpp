/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 2, 2017 5:40 PM
 * Purpose: Time machine  time difference
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int convertHours(int hour, int mins, bool amPm);
int computeDifference(int hr1, int hr2, int min1, int min2, bool isAm1, bool isAm2);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int mins1, mins2, hrs1, hrs2, diff;
    char a_char1, a_char2;
    bool isAM, isAM1, isAM2;
    //Input data
    cout << "Enter start time (format: h mm A/P): ";
    cin >> hrs1 >> mins1 >> a_char1;
    cout << "Enter an end time (format: h mm A/P): ";
    cin >> hrs2 >> mins2 >> a_char2;
    
    if (a_char1 == 'A')
    { 
        isAM1 = true;
    }   
    else if (a_char1 == 'P')
    {
        isAM1 = false; 
    }
    if (a_char2 == 'A')
    { 
        isAM2 = true;
    }   
    else if (a_char2 == 'P')
    {
        isAM2 = false;
    }
    
    //Map inputs to outputs or process the data
    diff = computeDifference(hrs1, mins1, hrs2, mins2, isAM1, isAM2);

    
    //Output the transformed data
        cout << "The time difference is " << diff<< " minutes.";

    //Exit stage right!
    return 0;
}

int convertHours(int hour, int mins, bool amPM){
    
    
    int timeInMins = 0;
    
    timeInMins = timeInMins + mins;
    
    // am is true pm is false
    if(!amPM){
        // we automatically add 12 hours (720 mins) to the time
        timeInMins = timeInMins + 720;
    }
    
    // convert each hour to 60 mins
    for(int i = hour; i > 0; i--) {
        timeInMins = timeInMins + 60;
    }
    
    // return time in mins
    return timeInMins;
}

int computeDifference(int hr1, int min1, int hr2, int min2, bool isAm1, bool isAm2)
{
    int diff;
    
    int timeInMins1;
    int timeInMins2;
    
    // convert from HH/MM/AP to mins
    timeInMins1 = convertHours(hr1, min1, isAm1);
    timeInMins2 = convertHours(hr2, min2, isAm2);
    
    cout << "Time 1 converted to: " << timeInMins1 << " mins.\n";
    cout << "Time 2 converted to: " << timeInMins2 << " mins. \n";
    
    // find difference between the 2 times (now in minutes format)
    if(timeInMins1 > timeInMins2){
        diff = timeInMins1 - timeInMins2;
    } else if (timeInMins1 < timeInMins2){
        diff = (60*12) + (timeInMins2 - timeInMins1);
    }
    return diff; 
}

