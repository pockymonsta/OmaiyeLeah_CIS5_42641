/* 
 *File:   main.cpp
 *Author: Dr. Mark E. Lehr
 *Created on February 26, 2017, 11:35 AM
 *Purpose:  Calculate Pocket Change
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Executable code begins here!!!

int main(int argc, char** argv) {
    
    //Declare Variables
    
    const char quarter=25,//Number of cents in coinage
               dime=10,
               nickle=5,
               penny=1;
    char nQuarts,nDimes,nNickls,nPenies;
    unsigned short total;//Total pocket change in cents
    
    //Input values
    
    cout<<"This calculates the amount of your pocket change"<<endl;
    cout<<"How many Quarters, Nickels, Dimes, and Pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"Type in all on the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPenies;
    
    //Process by mapping inputs to outputs
    
    total = (nQuarts - 48)*quarter +
            (nDimes  -'0')*dime    +
            (nNickls - 48)*nickle  +
            (nPenies -'0')*penny;
    
    //Output values
    
    cout<<"The coins in your pocket =    "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit stage right!
    
    return 0;
}