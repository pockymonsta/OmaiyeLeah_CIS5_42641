/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on March 30, 2017 4:54 PM
 * Purpose:  Vending machine calculation
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double calculateTotal(char coin, double total);

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    double myTotal = 0;
    double change = 0;
    char x;
    
    do
    {
    //Input data
    cout << "insert a nickel (n), dime(d), quarter(q), or dollar bill(D)";
    cin >> x;
    myTotal = calculateTotal(x, myTotal);
                
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    } while (myTotal < 3.50);
        
        change = myTotal - 3.50; 
        cout << "Enjoy your twinkie! Your change is $" << change << endl;
    
        
    return 0;
}

double calculateTotal(char coin, double total){
    
    switch(coin) {
        case 'n': 
            total = total + 0.05; 
            cout << total << endl;
            break;
        case 'd': 
            total = total + 0.10;
            cout << total << endl;
            break;
        case 'q': 
            total = total + 0.25;
            cout << total << endl;
            break;
        case 'D': 
            total = total + 1.00;
            cout << total << endl;
            break;
         default: 
            total;
            cout << total << endl;
            break;
    }
    return total;
}