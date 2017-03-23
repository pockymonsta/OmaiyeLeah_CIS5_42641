/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 22, 2017, 1:19 PM
 * Purpose:  Grade Branching Exercise - Independent If
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
    int payRate, hrsWkd, payChck;//Integer scores valid from 0 to 100 
    
    //Input data
    cout << "What is your pay rate?($/hr)" << endl;
    cin >> payRate;
    cout << "How many hours did you work?(hrs)" << endl;
    cin >> hrsWkd;
    
    //Map inputs to outputs or process the data
    if( hrsWkd <= 40 ) payChck = hrsWkd * payRate;
    if( hrsWkd > 40 )  payChck = hrsWkd * payRate + payRate * ( hrsWkd - 40);
  
    //Output the transformed data
    cout<< "For " << hrsWkd << " hours worked, you made $" << payChck <<endl;
    
    //Exit stage right!
    return 0;
}