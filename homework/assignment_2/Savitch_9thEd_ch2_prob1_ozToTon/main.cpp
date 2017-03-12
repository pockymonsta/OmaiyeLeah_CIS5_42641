/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 8, 2017, 10:15 PM
 * Purpose: convert ounces to metric tons 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    //Declare and initialize variables
    double metric, oz = 35273.92, weight; // weight in metric tons, number of ounces in one metric ton, weight in ounces
    double box ; //number of boxes to make 1 metric ton of cereal
    
    //Input data
    
    //Map inputs to outputs or process the data

    
    //Output the transformed data
    cout << "What is the weight in oz? ";
    cin >> weight;
    metric = oz * weight;
    cout << "This is the equivalent of " << metric << " metric tons. \n";
    box = oz / weight;
    cout << "You will need " << box << " number of boxes to yield 1 metric ton of cereal.";
    
    //Exit stage right!
    return 0;
}

