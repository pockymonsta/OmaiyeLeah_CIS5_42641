/* File:   main.cpp
 *Author: Leah Omaiye
 *Created on February 26, 2017, 12:20 PM
 *Purpose:  Output Big C
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

    char c;//Variable to build the big c with
    
    //Input values
    
    cout<<"This program outputs a large C"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    //Process by mapping inputs to outputs
    
    //Output values
   
    cout<<endl<<"A Big C with the letter "<<c<<endl<<endl;
    
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    
    //Exit stage right!
   
    return 0;
}