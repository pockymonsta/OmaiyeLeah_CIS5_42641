/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on February 26, 2017, 11:32 AM
 * Purpose: Program Project 1.1
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    int no1, no2, tot_sum, tot_pro;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number:\n";
    cin >> no1;
    cout << "Enter the second number:\n";
    cin >> no2;
    tot_pro = no2 * no1;
    tot_sum = no1 + no2;
 
    //Output the transformed data
    
    cout <<  "If you have ";
    cout << no1;
    cout << " and ";
    cout << no2;
    cout << ", then\n";
    cout << "the product is ";
    cout << tot_pro;
    cout << " and the sum is ";
    cout << tot_sum;
   
           
    
    
    //Exit stage right!
    return 0;
}

