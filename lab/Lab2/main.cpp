/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on February 28, 2017, 9:05 PM
 * Purpose:  Gas tax percentage calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f;
//Function Prototypes

//Execution begins here
int main() {
    //Declare variables
    float cost, price, percent_tax, percent_profit;
    float profit = .07f, ex_tax = .390f, sale_tax = .08f, cap_tax = .100f, fed_tax = .184f ;
    
    //Initialize variables
    
    //Input data
    
    cout << "What is the cost of gas per gallon? $" << cost ;
    cin >> cost ;
    
    //Map inputs to outputs or process the data
    price = (cost - fed_tax - ex_tax - cap_tax) / (1 + sale_tax);
    percent_tax = (price * sale_tax + fed_tax + ex_tax + cap_tax)/ price * PERCENT;
    percent_profit = profit / price * PERCENT;
    
    //Output the transformed data
    cout << "Federal tax/gal            = $" << fed_tax << endl;
    cout << "California tax/gal         = $" << ex_tax << endl;
    cout << "Cap and trade tax/gal      = $" << cap_tax << endl;
    cout << "California sales tax/gal   = $" << sale_tax * price << endl;
    cout << "Base price/gal             = $" << price << endl;
    cout << "Oil company profit/gal     =  " << percent_profit << "%" << endl;
    cout << "Total percent tax/gal      =  " << percent_tax << "%" << endl;
            
    //Exit stage right!
    return 0;
}

