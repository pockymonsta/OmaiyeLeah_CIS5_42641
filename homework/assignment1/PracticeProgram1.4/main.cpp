/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on February 26, 2017, 11:32 AM
 * Purpose: change * to + in pea pod program
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
    int number_of_pods, peas_per_pod, total_peas;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods + peas_per_pod;
 
    //Output the transformed data
    
    cout <<  "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
   
           
    
    
    //Exit stage right!
    return 0;
}

