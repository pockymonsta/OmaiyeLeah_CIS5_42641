/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 10, 2017, 2:30 PM
 * Purpose: Convert pace on treadmill 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    //Declare and initialize variables
    double miles, mins, secs; //miles per hour, minutes per mile, seconds per mile
    int pace; //minutes converted into an int
    //Input data

    cout << "How many miles per hour did you run? ";
    cin >> miles;
    
    //Map inputs to outputs or process the data
    mins = 60 / miles ;
    pace =  static_cast<int>(mins);
    secs = ((60 / miles) - pace) * 60; 
    //Output the transformed data
    cout << "Your pace is " << pace << " minutes and " << secs << " seconds. ";
    //Exit stage right!
    return 0;
}

