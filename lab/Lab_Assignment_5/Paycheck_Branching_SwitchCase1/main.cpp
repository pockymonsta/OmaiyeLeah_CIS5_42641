/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 22, 2017, 2:40 PM
 * Purpose:  Paycheck Branching Exercise- Switch Case 1
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
    int payChck, hrsWkd, payRate; //paycheck, hours worked, pay rate
    
    //Input data
    cout<<"What is your pay rate?($/hr)"<<endl;
    cin>>payRate;
    cout<<"How many hours did you work? (hrs)"<<endl;
    cin>>hrsWkd;
    
    //Map inputs to outputs or process the data
    switch(hrsWkd >= 40) {
       // case 10:
        case  1: payChck = payRate * hrsWkd + payRate * (hrsWkd - 40);break;
//        case  8: grade='B';break;
//        case  7: grade='C';break;
//        case  6: grade='D';break;
        default: payChck = payRate * hrsWkd;
    }
    
    //Output the transformed data
    cout<<"For "<<hrsWkd<<" hours worked, you made $"<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}