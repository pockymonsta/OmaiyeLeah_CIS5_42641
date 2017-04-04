/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 30, 2017 10:47 AM
 * Purpose:  Convert liters to gallons
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double conversion = 0.264179;

//Declare and initialize variables
double liters, miles, gal, mpg;
char repeat;

//Function Prototypes
double mpgConvert(double liters, double milesTraveled);

//Execution begins here
int main(int argc, char** argv) {

do {    
    //Input data
    cout << "How many liters of gas did you use? \n";
    cin >> liters;
    cout << "How many miles did you travel?\n";
    cin >> miles;
    
    mpgConvert(liters, miles);
    
    //Output the transformed data
    cout << "" << mpg << " miles per gallon" << endl;
    
    cout << "Perform calculation again? (y / n) \n";
    cin >> repeat;
    
} while (repeat == 'y');
    
    cout << "Exiting... \n";
    //Exit stage right!
    return 0;
}

double mpgConvert(double liters, double milesTraveled){
    
    //Map inputs to outputs or process the data
    gal = liters * conversion;
    mpg = milesTraveled / gal;
            
    return mpg;
}
