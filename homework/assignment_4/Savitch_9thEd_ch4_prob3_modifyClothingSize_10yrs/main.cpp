/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 30 2017, 2:13 PM
 * Purpose:  Compute clothing size 
 */

//System Libraries
#include <iostream>
#include <math.h> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
double height, weight, age, ht, wt, yrs;

//Function Prototypes
double hatSize(double height, double weight);
double jacketSize (double height, double weight, int yrs);
double waistSize (double weight, int yrs); 

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    double measureHat, measureJacket, measureWaist, measureJacket10, measureWaist10;
    char cont;
    
    do {
    //Input data
    cout << "What is your height (in)?\n";
    cin >> ht;
    cout << "What is your weight (lbs)?\n";
    cin >> wt;
    cout << "How old are you (yrs)?\n";
    cin >> age;
    
    //Map inputs to outputs or process the data
    measureHat = hatSize(ht, wt);
    measureJacket = jacketSize(ht, wt, age);
    measureWaist = waistSize(wt, age);
    measureJacket10 = jacketSize(ht, wt, age+10);
    measureWaist10 = waistSize(wt, age+10);
    //Output the transformed data
    cout << "Your hat size is " << measureHat << endl;
    cout << "Your jacket size is " << measureJacket << endl;
    cout << "Your waist size is " << measureWaist << endl;
    
    cout << "After 10 years, your jacket size is " << measureJacket10 << endl;
    cout << "After 10 years, your waist size is " << measureWaist10 << endl;
    
    cout << "Continue? y or n\n";
    cin >> cont;
    } while (cont == 'y');
    cout << "Exiting... ";
    //Exit stage right!
    return 0;
    
}
double hatSize(double height, double weight)
{
   double hat;
    
   hat = (weight / height) * 2.9 ;
   return hat;
}
double jacketSize (double height, double weight, int yrs)
{
    double jacket;
    double ageDif;
    
    if( yrs <= 39 )
    {
        jacket = (height * weight) / 288 ;
    }
    
    else if (yrs >= 40)
    {
        ageDif = ((yrs - 30) / 10 );
        ageDif = floor(ageDif);
        jacket = (height * weight) / 288 + (.125 * ageDif);
       
    }
    return jacket;
}
double waistSize (double weight, int yrs)
{
    double waist;
    double ageDifference;
    
    if (yrs <= 28)
    {
    waist = (weight / 5.7 ) + .1 ;
    }
    
    else if (yrs > 28)
    {
        ageDifference = ((yrs - 28) * 2 );
        ageDifference = floor(ageDifference);
        waist = (weight / 5.7 ) + (.1 * ageDifference) ;

    }
    return waist;
}

