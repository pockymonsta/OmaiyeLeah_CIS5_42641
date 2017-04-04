/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 2, 2017 4:18 PM
 * Purpose:  Stock holding calculator
 */

//System Libraries
#include <stdio.h>
#include <iostream>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
double calcPrice(int wholeDollar, int num, int denom);

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    
    int shares, wholeDollarValue, fractDenom, fractNum;
    double value, price;
    
      //Input data
    
    cout << "How many shares of stock do you own?\n";
    cin >> shares;
    
    cout << "Whole dollar portion of your stock?\n";
    cin >> wholeDollarValue;
    
    cout << "Fraction portion of your stock(numerator)?";
    cin >> fractNum;
    cout << "Fraction portion of your stock(denominator)?";
    cin >> fractDenom;
    //Map inputs to outputs or process the data
    
    price = calcPrice(wholeDollarValue, fractNum, fractDenom);
    value = price * shares;
  
    //Output the transformed data
    cout << "Your " << shares << " shares are worth: $" << value;
    
     //Exit stage right!
    return 0;
}

double calcPrice(int wholeDollar, int num, int denom) {
    double totalValue;
    
    totalValue = wholeDollar + (static_cast<double>(num) / denom);
    return totalValue;
    
   
}
