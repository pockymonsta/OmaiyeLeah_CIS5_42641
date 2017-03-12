/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 9, 2017, 7:22 PM
 * Purpose:  Play a game of Mad Lib
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    string name, food, color; // instructor's name
    string adj, animal, yourName; // adjective
    int number; // number between 100 and 120
    //Input data
   
    //Map inputs to outputs or process the data
    cout << "Enter your instructor's name \n";
    cin >> name;
    cout << "Enter a food \n";
    cin >> food;
    cout << "Enter a color \n";
    cin >> color;
    cout << "Enter a number between 100 and 120 \n";
    cin >> number;
    cout << "Enter an adjective \n";
    cin >> adj;
    cout << "Enter an animal \n";
    cin >> animal;
    cout << "Enter your name \n";
    cin >> yourName;
    
     //Output the transformed data
    
    cout << "Dear Instructor " << name << ",\n";
    cout << "I am sorry that I am unable to turn in my homework at this time. First, \n";
    cout << "I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. I \n";
    cout << "came down with a fever of " << number << ". Next, my " << adj << " pet \n"; 
    cout << animal << " must have smelled the remains of the " << food << " on my homework, \n";
    cout << "because he ate it. I am currently rewriting my homework and hope you \n";
    cout << "will accept it late. \n" ;
    cout << "Sincerely, \n";
    cout << yourName ; //Exit stage right!
    return 0;
}

