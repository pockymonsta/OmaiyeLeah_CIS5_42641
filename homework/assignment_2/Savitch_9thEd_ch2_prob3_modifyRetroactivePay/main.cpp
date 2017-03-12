/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 10, 2017, 9:47 PM
 * Purpose: Pay raise retroactive for N number of months
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double raise = .076; //percent pay increase retroactive

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {

    //Declare and initialize variables
   
    double newSal, oldSal, monSal, retPay, months ; //new salary, old salary, monthly salary, retroactive pay
    
    //Input data
    while (true)
    {   
        cout << "Enter previous annual salary ( 0 to quit): ";
        cin >> oldSal;
        
        if (oldSal <= 0)
            return 0;
        
        cout << "Enter number of months: ";
        cin >> months;

        //Map inputs to outputs or process the data
        newSal = oldSal + oldSal * raise;
        monSal = newSal / 12 ;
        retPay = months * monSal - (oldSal / 12 * months);

        //Output the transformed data
        cout << "Retroactive Pay for " << months << " months: $" << retPay << " \n";
        cout << "New Annual Salary: $" << newSal << " \n";
        cout << "New Monthly Salary: $" << monSal << "\n";
    }
    //Exit stage right!
    return 0;
}

