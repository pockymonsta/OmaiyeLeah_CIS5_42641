/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 1, 2017 8:09 PM
 * Purpose:  Calories to maintain body weight
 */

//System Libraries
#include <iostream> 
#include <cmath>
#include <stdio.h>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double bmRate(double p);
double calReqd(int in, int min, double p);

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    int intensity, mins, cals;
    double weight, needed, servings, digestEnergy;
    
    //Input data
	cout << "Enter weight: ";
	cin >> weight;


	cout << "What is the intensity level of the activity you will be doing?\n";
	cout << "Running at 10mph - 17\nRunning at 6mph - 10\nBasketball - 8\nWalking at 1mph - 1 \n";
	cin >> intensity;

	cout << "How many minutes will you do this?\n";
	cin >> mins;

	cout << "How many calories have you consumed?\n";
	cin >> cals;

	needed = bmRate(weight) + calReqd(intensity, mins, weight);
	digestEnergy = needed * 0.1;
	servings = (needed - digestEnergy) / cals;
	cout << "Serving(s) needed to maintain weight:" << servings << endl;
	
        //Exit stage right!
        return 0;
}

double bmRate(double p)
{
	double rate;

	rate = pow((70.0 * (p / 2.2)), 0.756);
	return rate;
}

double calReqd(int in, int min, double p)
{
	double caloriesRequired;

	caloriesRequired = 0.0385 * in * p * min;
	return caloriesRequired;
}
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    
