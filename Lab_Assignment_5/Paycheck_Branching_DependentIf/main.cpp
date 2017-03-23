/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 22, 2017, 22:03 PM
 * Purpose:  Paycheck Branching Exercise - Dependent If
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
    cout<<"What is your rate of pay? ($/hr)"<<endl;
    cin >> payRate;
    cout<<"How many hours did you work? (hrs)"<<endl;
    cin>> hrsWkd;
    
    //Map inputs to outputs or process the data
    if(hrsWkd>40)      payChck= payRate * hrsWkd + payRate * (hrsWkd - 40);
    else if(hrsWkd<=40) payChck = payRate * hrsWkd;
    
    //Output the transformed data
    cout<<"For "<<hrsWkd<<" hours worked, your paycheck is $"<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}
