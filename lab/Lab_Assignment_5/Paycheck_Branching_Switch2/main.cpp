/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 16th, 2017, 11:24 AM
 * Purpose:  Grade Branching Exercise
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int payChck, payRate, hrsWkd; //paycheck, pay rate, hours worked
    
    //Input data
    cout<<"What is your pay rate? ($/hr)"<<endl;
    cin>>payRate;
    cout<<"How many hours did you work?(hrs)"<<endl;
    cin>>hrsWkd;
    
    //Map inputs to outputs or process the data
    switch(hrsWkd >= 40 ){
        case 1: payChck = payRate * hrsWkd + payRate * (hrsWkd - 40); break;
        default: payChck = payRate * hrsWkd;
    }
    
    //Output the transformed data
    cout<< "For " << hrsWkd << " hours worked, you made $" << payChck <<endl;
    
    //Exit stage right!
    return 0;
}