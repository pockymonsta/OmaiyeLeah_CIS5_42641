/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 10, 2017, 9:07 PM
 * Purpose:  Compute sqrt with Babylonian algorithm
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
    double n, r, guess, prevGuess; //number, computation, numerical guess

   
    //Input data

    cout << "Enter a number: \n" ;
    cin >> n;
    //Map inputs to outputs or process the data
    
    prevGuess = n;
    guess = n / 2;
    r = n / guess;
    guess = (guess + r) / 2;
    
    while (((1 - (guess / prevGuess)) * 100) > 1 ) 
    {
        prevGuess = guess;
        r = n / guess ;
        guess = (guess + r) / 2;
    }
    
    //Output the transformed data
    cout << "Square root is approximately " << guess;
    
    
    //Exit stage right!
    return 0;
}

