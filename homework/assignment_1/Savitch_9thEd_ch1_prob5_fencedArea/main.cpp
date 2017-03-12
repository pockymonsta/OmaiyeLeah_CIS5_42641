/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on February 27, 2017, 9:32 PM
 * Purpose: Enclose rectangular area with fence
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
    int width, height, totalLength;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Press return after entering a number.\n";
    cout << "Enter the height:\n";
    cin >> height;
    cout << "Enter the width:\n";
    cin >> width;
    totalLength = 2 * width + 2 * height;
 
    //Output the transformed data
    
    cout <<  "If you have a rectangular area ";
    cout << width;
    cout << " ft \n";
    cout << "by ";
    cout << height;
    cout << " ft, then\n";
    cout << "you need ";
    cout << totalLength;
    cout << " ft of fence to enclose the rectangular area.\n";
   
           
    
    
    //Exit stage right!
    return 0;
}

