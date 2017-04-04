/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 1, 7:02 PM
 * Purpose:  Gravitational attractive force between two bodies
 */

//System Libraries
#include <iostream> 
#include <cmath>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double G = 6.673 * pow(10,-8); //[cm^3/g*s^2]

char repeat;
//Function Prototypes
double computeForce(double m1, double m2, double d);
//Execution begins here
int main(int argc, char** argv) {
    do
    {
    //Declare and initialize variables
    double mass1, mass2, distance, forceGravity;
    
    //Input data
    cout << "Enter the mass of body 1 (grams): \n";
    cin >> mass1;
    
    cout << "Enter the mass of body 2 (grams): \n";
    cin >> mass2;
    
    cout << "What is the distance between them (cm)? \n";
    cin >> distance;
    
    //Map inputs to outputs or process the data
    forceGravity = computeForce(mass1,  mass2,  distance);
 
    //Output the transformed data
    cout << "The gravitational force is " << forceGravity<< " dyne\n";
    cout << "continue (y/n)?";
    cin >> repeat;
    //Exit stage right!
    } while(repeat == 'y');
 
    return 0;
}

double computeForce(double m1, double m2, double d)
{
    double force;
    force = (G * m1 * m2)  / (d * d);
    return force;
}

