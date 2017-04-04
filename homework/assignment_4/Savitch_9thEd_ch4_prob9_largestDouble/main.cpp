/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on  March 30, 2017 
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double max(double x1, double x2);
double max(double x1, double x2, double x3);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    double y1, y2, y3;
    //Input data
    cout << "type in two numbers :\n";
    cin >> y1;
    cin >> y2;
    //Map inputs to outputs or process the data
    max(y1, y2);
    //Output the transformed data
    cout << "now type in three numbers : \n";
    cin >> y1;
    cin >> y2;
    cin >> y3;
    max(y1, y2, y3);
    
    //Exit stage right!
    return 0;
}

double max(double x1, double x2)
{
    if (x1 > x2)
    {
        cout << x1 << " is the largest number\n" ;
    }
    else if (x2 > x1) 
    {
        cout << x2 << " is the largest number\n" ;
    }
}

double max (double x1, double x2, double x3)
{
    if(x1 > x2 && x1 > x3)
    {
        cout << x1 << " is the largest number\n" ;
    }
    else if (x2 > x1 && x2 > x3)
    {
       cout << x2 << " is the largest number\n" ; 
    }
    else if (x3 > x1 && x3 > x2)
    {
       cout << x3 << " is the largest number\n" ;
    }
}

