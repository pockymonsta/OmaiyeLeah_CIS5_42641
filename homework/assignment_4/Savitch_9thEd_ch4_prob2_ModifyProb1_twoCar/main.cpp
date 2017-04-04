/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 30, 2017 1:12 PM
 * Purpose:  Convert liters to gallons for 2 cars
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double conversion = 0.264179;

//Declare and initialize variables
char repeat;

//Function Prototypes
double mpgConvert(double litersUsed, double milesTraveled);

//Execution begins here
int main(int argc, char** argv) {

do {
    double liters, miles, mpg, mpg2;
    //Input data
    cout << "(Car 1) How many liters of gas did you use? \n";
    cin >> liters;
    cout << "(Car 1) How many miles did you travel?\n";
    cin >> miles;
    
    mpg = mpgConvert(liters, miles);
    
    //Output the transformed data
    cout << "" << mpg << " miles per gallon\n" << endl;
    
    //Input data of the 2nd car
    cout << "(Car 2) How many liters of gas did you use? \n";
    cin >> liters;
    cout << "(Car 2) How many miles did you travel?\n";
    cin >> miles;
    
    mpg2 = mpgConvert(liters, miles);
    
    //Output the transformed data
    cout << "" << mpg2 << " miles per gallon\n" << endl;
    
    if (mpg > mpg2) {
        cout << "Car 1 had the best fuel efficiency!\n";
    } else if (mpg2 < mpg) {
        cout << "Car 2 had the best fuel efficiency!\n";
    }
    
    cout << "Perform calculation again? (y / n) \n";
    cin >> repeat;
    
} while (repeat == 'y');
    
    cout << "Exiting... \n";
    //Exit stage right!
    return 0;
}

double mpgConvert(double litersUsed, double milesTraveled){
    
    double gal, mpg;
    
    //Map inputs to outputs or process the data
    gal = litersUsed * conversion;
    mpg = milesTraveled / gal;
            
    return mpg;
}
