/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 9, 2017, 3:32 PM
 * Purpose:  Calculate the amount of water in a well
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
    
    double radiusIn, feet; //radius of the well in inches, depth in feet
    double radiusFt, vol, gal;
    
    //Initialize variables
    
    //Input data
    
    cout << "What is the radius of the well (in inches)? \n";
    cin >> radiusIn;
    cout << "What is the depth in feet? \n";
    cin >> feet;
    
    //Map inputs to outputs or process the data
   
    radiusFt = radiusIn / 12; // convert radius in inches to feet
    vol = 3.14159 * radiusFt * radiusFt * feet; //formula for cylinder
    gal = vol * 7.48; // 1ft^3 = 7.48 gal water
    
    //Output the transformed data
    
    cout << "The well holds " << gal << " gallons of water.";
    
    //Exit stage right!
    return 0;
}

