/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 9, 2017, 2:31 PM
 * Purpose: Properly coding volume of sphere
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() 
{
    //Declare and initialize variables
    double radius, vm; //radius, volume
    
    //Input data
    cout << "Enter radius of a sphere." << endl;
    cin >> radius;
    
    //Map inputs to outputs or process the data
    vm = (4.0/3.0) * 3.1415 * radius * radius * radius; //equation for a sphere
    //Output the transformed data
    cout << "The volume is " << vm << endl;
    //Exit stage right!
    return 0;
}

