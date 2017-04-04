/* 
 * File:   lab_7_menu.cpp
 * Author: Leah Omaiye
 * Created on April 3rd, 2017 at 10:47 PM
 * Purpose:  Menu to be utilized on Hmwk 4
 */

//System Libraries
#include <iostream>  // Input - Output Library
#include <math.h>    // Math Library used in Problem 3
#include <cmath>     // Math Library used in Problem 6
#include <stdio.h>//Input - Output Library


using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const double conversion = 0.264179;     // Problem 1 and Problem 2
const double G = 6.673 * pow(10,-8);    //[cm^3/g*s^2], used in Problem 8

//Declare and initialize variables
double liters, miles, gal, mpg;         // Problem 1
char repeat;                            // Problem 1, Problem 2, and Problem 8
double height, weight, age, ht, wt, yrs;// Problem 3

//Function Prototypes
double mpgConvert(double litersUsed, double milesTraveled);     // Problem 1 and Problem 2
double hatSize(double height, double weight);                   // Problem 3 and 4
double jacketSize (double height, double weight, int yrs);      // Problem 3 and 4
double waistSize (double weight, int yrs);                      // Problem 3 and 4
double calcPrice(int wholeDollar, int num, int denom);          // Problem 5
double bmRate(double p);                                        // Problem 6
double calReqd(int in, int min, double p);                      // Problem 6
double calculateTotal(char coin, double total);                 // Problem 7
double computeForce(double m1, double m2, double d);            // Problem 8
int convertHours(int hour, int mins, bool amPm);                // Problem 9
int computeDifference(int hr1, int hr2, int min1, int min2, bool isAm1, bool isAm2);// Problem 9
double max(double x1, double x2);                               // Problem 10
double max(double x1, double x2, double x3);                    // Problem 10




//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 2"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl;
        cout<<"Type 10 for Problem 10"<<endl<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                cout<<"In problem solution 1"<<endl;
                // Problem 1
                do {    
                    //Input data
                    cout << "How many liters of gas did you use? \n";
                    cin >> liters;
                    cout << "How many miles did you travel?\n";
                    cin >> miles;
                    
                    mpgConvert(liters, miles);
                    
                    //Output the transformed data
                    cout << "" << mpg << " miles per gallon" << endl;
                    
                    cout << "Perform calculation again? (y / n) \n";
                    cin >> repeat;
                    
                } while (repeat == 'y');
                    
                    cout << "Exiting... \n";
                    //Exit stage right!
                   // return 0;

                break;
            } // end case 1


            case '2':{
                cout<<"In problem solution 2"<<endl;
                do {
                    double liters, miles, mpg, mpg2;
                    //Input data
                    cout << "(Car 1) How many liters of gas did you use? \n";
                    cin >> liters;
                    cout << "(Car 1) How many miles did you travel?\n";
                    cin >> miles;
                    
                    mpg = mpgConvert(liters, miles);
                    
                    //Output the transformed data
                    cout << "" << mpg << " miles per gallon\n" << endl;
                    
                    //Input data of the 2nd car
                    cout << "(Car 2) How many liters of gas did you use? \n";
                    cin >> liters;
                    cout << "(Car 2) How many miles did you travel?\n";
                    cin >> miles;
                    
                    mpg2 = mpgConvert(liters, miles);
                    
                    //Output the transformed data
                    cout << "" << mpg2 << " miles per gallon\n" << endl;
                    
                    if (mpg > mpg2) {
                        cout << "Car 1 had the best fuel efficiency!\n";
                    } else if (mpg2 < mpg) {
                        cout << "Car 2 had the best fuel efficiency!\n";
                    }
                    
                    cout << "Perform calculation again? (y / n) \n";
                    cin >> repeat;
                            
                } while (repeat == 'y');
                
                cout << "Exiting... \n";
                //Exit stage right!
               // return 0;

                break;
            } // end case 2

            case '3':{
                cout<<"In problem solution 3"<<endl;
                    //Declare and initialize variables
                    double measureHat, measureJacket, measureWaist;
                    char cont;
                    
                    do {
                        //Input data
                        cout << "What is your height (in)?\n";
                        cin >> ht;
                        cout << "What is your weight (lbs)?\n";
                        cin >> wt;
                        cout << "How old are you(yrs)?\n";
                        cin >> age;
                        
                        //Map inputs to outputs or process the data
                        measureHat = hatSize(ht, wt);
                        measureJacket = jacketSize(ht, wt, age);
                        measureWaist = waistSize(wt, age);
                        //Output the transformed data
                        cout << "Your hat size is " << measureHat << endl;
                        cout << "Your jacket size is " << measureJacket << endl;
                        cout << "Your waist size is " << measureWaist << endl;
                        
                        cout << "Continue? y or n\n";
                        cin >> cont;
                        } while (cont == 'y');
                cout << "Exiting... ";
                //Exit stage right!
                break;
            } // end case 3
            case '4':{
                cout<<"In problem solution 4"<<endl;

                //Declare and initialize variables
                double measureHat, measureJacket, measureWaist, measureJacket10, measureWaist10;
                char cont;
                
                do {
                    //Input data
                    cout << "What is your height (in)?\n";
                    cin >> ht;
                    cout << "What is your weight (lbs)?\n";
                    cin >> wt;
                    cout << "How old are you (yrs)?\n";
                    cin >> age;
                    
                    //Map inputs to outputs or process the data
                    measureHat = hatSize(ht, wt);
                    measureJacket = jacketSize(ht, wt, age);
                    measureWaist = waistSize(wt, age);
                    measureJacket10 = jacketSize(ht, wt, age+10);
                    measureWaist10 = waistSize(wt, age+10);
                    //Output the transformed data
                    cout << "Your hat size is " << measureHat << endl;
                    cout << "Your jacket size is " << measureJacket << endl;
                    cout << "Your waist size is " << measureWaist << endl;
                    
                    cout << "After 10 years, your jacket size is " << measureJacket10 << endl;
                    cout << "After 10 years, your waist size is " << measureWaist10 << endl;
                    
                    cout << "Continue? y or n\n";
                    cin >> cont;
                    } while (cont == 'y');
                cout << "Exiting... ";
                //Exit stage right!
                break;
            } // end case 4
            case '5':{
                cout<<"In problem solution 5"<<endl;
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
                break;
            } // end case 5
            case '6':{
                cout<<"In problem solution 6"<<endl;

                //Declare and initialize variables
                int intensity, mins, cals;
                double weight, needed, servings, digestEnergy;
                
                //Input data
                cout << "Enter weight: ";
                cin >> weight;


                cout << "What is the intensity level of the activity you will be doing?\n";
                cout << "Running at 10mph - 17\nRunning at 6mph - 10\nBasketball - 8\nWalking at 1mph - 1 \n";
                cin >> intensity;

                cout << "How many minutes will you do this?\n";
                cin >> mins;

                cout << "How many calories have you consumed?\n";
                cin >> cals;

                needed = bmRate(weight) + calReqd(intensity, mins, weight);
                digestEnergy = needed * 0.1;
                servings = (needed - digestEnergy) / cals;
                cout << "Serving(s) needed to maintain weight:" << servings << endl;
                
                //Exit stage right!
                break;
            } // end case 6
            case '7':{
                cout<<"In problem solution 7"<<endl;

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
                break;
            } // end case 7
            case '8':{
                cout<<"In problem solution 8"<<endl;

                do
                    {
                    //Declare and initialize variables
                    double mass1, mass2, distance, forceGravity;
                    
                    //Input data
                    cout << "Enter the mass of body 1 (grams): \n";
                    cin >> mass1;
                    
                    cout << "Enter the mass of body 2 (grams): \n";
                    cin >> mass2;
                    
                    cout << "What is the distance between them (cm)? \n";
                    cin >> distance;
                    
                    //Map inputs to outputs or process the data
                    forceGravity = computeForce(mass1,  mass2,  distance);
                 
                    //Output the transformed data
                    cout << "The gravitational force is " << forceGravity<< " dyne\n";
                    cout << "continue (y/n)?";
                    cin >> repeat;
                    //Exit stage right!
                    } while(repeat == 'y');
                break;
            } // end case 8
            case '9':{
                cout<<"In problem solution 9"<<endl;

                //Declare and initialize variables
                int mins1, mins2, hrs1, hrs2, diff;
                char a_char1, a_char2;
                bool isAM, isAM1, isAM2;
                //Input data
                cout << "Enter start time (format: h mm A/P): ";
                cin >> hrs1 >> mins1 >> a_char1;
                cout << "Enter an end time (format: h mm A/P): ";
                cin >> hrs2 >> mins2 >> a_char2;
                
                if (a_char1 == 'A')
                { 
                    isAM1 = true;
                }   
                else if (a_char1 == 'P')
                {
                    isAM1 = false; 
                }
                if (a_char2 == 'A')
                { 
                    isAM2 = true;
                }   
                else if (a_char2 == 'P')
                {
                    isAM2 = false;
                }
                
                //Map inputs to outputs or process the data
                diff = computeDifference(hrs1, mins1, hrs2, mins2, isAM1, isAM2);

                
                //Output the transformed data
                    cout << "The time difference is " << diff<< " minutes.";

                //Exit stage right!
                break;
            } // end case 9
            case '10':{
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
                break;
            } // end case 10
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='10');
    
    //Exit stage right!
    return 0;
}



// Used in Problem 1 and Problem 2
double mpgConvert(double litersUsed, double milesTraveled){
    
    double gal, mpg;
    
    //Map inputs to outputs or process the data
    gal = litersUsed * conversion;
    mpg = milesTraveled / gal;
            
    return mpg;
}

// Used in Problem 3 and 4
double hatSize(double height, double weight)
{
   double hat;
    
   hat = (weight / height) * 2.9 ;
   return hat;
}

// Used in Problem 3 and 4
double jacketSize (double height, double weight, int yrs)
{
    double jacket;
    double ageDif;
    
    if( yrs <= 39 )
    {
        jacket = (height * weight) / 288 ;
    }
    
    else if (yrs >= 40)
    {
        ageDif = ((yrs - 30) / 10 );
        ageDif = floor(ageDif);
        jacket = (height * weight) / 288 + (.125 * ageDif);
       
    }
    return jacket;
}

// Used in Problem 3 and 4
double waistSize (double weight, int yrs)
{
    double waist;
    double ageDifference;
    
    if (yrs <= 28)
    {
    waist = (weight / 5.7 ) + .1 ;
    }
    
    else if (yrs > 28)
    {
        ageDifference = ((yrs - 28) * 2 );
        ageDifference = floor(ageDifference);
        waist = (weight / 5.7 ) + (.1 * ageDifference) ;

    }
    return waist;
}

// Used in Problem 5
double calcPrice(int wholeDollar, int num, int denom) {
    double totalValue;
    
    totalValue = wholeDollar + (static_cast<double>(num) / denom);
    return totalValue;
}

// Used in Problem 6
double bmRate(double p)
{
    double rate;

    rate = pow((70.0 * (p / 2.2)), 0.756);
    return rate;
}

// Used in Problem 6
double calReqd(int in, int min, double p)
{
    double caloriesRequired;

    caloriesRequired = 0.0385 * in * p * min;
    return caloriesRequired;
}

// Used in Problem 7
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

// Used in Problem 8
double computeForce(double m1, double m2, double d)
{
    double force;
    force = (G * m1 * m2)  / (d * d);
    return force;
}

// Used in Problem 9

int convertHours(int hour, int mins, bool amPM){
    
    
    int timeInMins = 0;
    
    timeInMins = timeInMins + mins;
    
    // am is true pm is false
    if(!amPM){
        // we automatically add 12 hours (720 mins) to the time
        timeInMins = timeInMins + 720;
    }
    
    // convert each hour to 60 mins
    for(int i = hour; i > 0; i--) {
        timeInMins = timeInMins + 60;
    }
    
    // return time in mins
    return timeInMins;
}

// Used in Problem 9
int computeDifference(int hr1, int min1, int hr2, int min2, bool isAm1, bool isAm2)
{
    int diff;
    
    int timeInMins1;
    int timeInMins2;
    
    // convert from HH/MM/AP to mins
    timeInMins1 = convertHours(hr1, min1, isAm1);
    timeInMins2 = convertHours(hr2, min2, isAm2);
    
    cout << "Time 1 converted to: " << timeInMins1 << " mins.\n";
    cout << "Time 2 converted to: " << timeInMins2 << " mins. \n";
    
    // find difference between the 2 times (now in minutes format)
    if(timeInMins1 > timeInMins2){
        diff = timeInMins1 - timeInMins2;
    } else if (timeInMins1 < timeInMins2){
        diff = (60*12) + (timeInMins2 - timeInMins1);
    }
    return diff; 
}

// Overloaded function 1 for Problem 10
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


// Overloaded function 2 for Problem 10
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