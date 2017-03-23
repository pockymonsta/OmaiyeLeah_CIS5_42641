/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 22, 2017, 2:10 PM
 * Purpose:  Paycheck Branching Exercise - Ternary Operator
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
    int payRate, hrsWkd, payChck ;// pay rate, hours worked, paycheck
    
    //Input data
    cout << "What is your pay rate?($/hr)" << endl;
    cin >> payRate;
    cout << "How many hours did you work?(hrs)" << endl;
    cin >> hrsWkd;
    
    //Map inputs to outputs or process the data
    payChck =   (hrsWkd <= 40)? payRate * hrsWkd:
                (hrsWkd > 40)? payRate * hrsWkd + payRate * (hrsWkd - 40): 0 ;
    
    //Output the transformed data
    cout << "For " << hrsWkd << " hours worked, you made $" << payChck << endl;
    
    //Exit stage right!
    return 0;
}
