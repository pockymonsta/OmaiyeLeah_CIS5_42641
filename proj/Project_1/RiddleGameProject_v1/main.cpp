/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 6, 2017 1:41 AM
 * Purpose: Riddle game project v1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string> // allow user to input string answers & process strings
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Declare and initialize variables
    
    int r1Ans, r2Ans, r5Ans, r7Ans, r8Ans, r10Ans, rid1Ans, rid2Ans, rid5Ans, rid7Ans, rid8Ans, rid10Ans; //riddle number and answer for number answers
    string r3Ans, r4Ans, r6Ans, rid3Ans, rid4Ans, rid6Ans; //riddle number and answer for word answers
    char r9Ans, rid9Ans;
    bool complete, cont;
   
//Function Prototypes
bool riddle1Answer(int rid1Ans); bool riddle2Answer(int rid2Ans); bool riddle3Answer(int rid3Ans);
bool riddle4Answer(int rid4Ans); bool riddle5Answer(int rid5Ans); bool riddle6Answer(int rid6Ans);
bool riddle7Answer(int rid7Ans); bool riddle8Answer(int rid8Ans); bool riddle9Answer(int rid9Ans); bool riddle10Answer(int rid10Ans);
//Execution begins here
int main(int argc, char** argv) {
    
    
    //Input data
     
   while (complete == false) //loop the program until user answers all 10 riddles correctly
   {
  
    cout << "This is the Ultimate Riddle Game. \n";
    cout << "Answer all ten riddles to exit the game...\n...or be doomed to loop the program forever...\n";
    riddle1Answer(r1Ans);
    riddle2Answer(r2Ans);
    riddle3Answer(r3Ans);
    riddle4Answer(r4Ans);
    riddle5Answer(r5Ans);
    riddle6Answer(r6Ans);
    riddle7Answer(r7Ans);
    riddle8Answer(r8Ans);
    riddle9Answer(r9Ans);
    riddle10Answer(r10Ans);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
    }
}
    
    riddle1Answer(rid1Ans)
    {
    cout << "Riddle 1: What number do you get when you multiply all of the numbers on a telephone number pad? \n";
    cout << "HINT: multiply all numbers from 0-9.\n";
    cin >> rid1Ans;
    return rid1Ans;
    }
//    
//    for (int count = 2; count >= 0; count--)
//    {
//    if (r1Ans == 0)
//    {
//        cout << "Correct!\n" ;
//    }else   cout << "Wrong! You have" << count - 1 << " tries left.\n";
//    }
//    if (count >=0)
//    {
//        cont == true; //program will continue to next riddle if user has not used all 3 tries
//    } else cont == false; //program will loop if user has used all 3 tries
    riddle2Answer(rid2Ans)
    {

    cout << "Riddle 2: When was the latest year that is the same upside down?\n";
    cout << "HINT: it's after 1960.\n";
    cin >> r2Ans;
    }
//    
//    for (int count = 2; count >= 0; count--)
//    {
//
//    if (r2Ans == 1961)
//    {
//        cout << "Correct!\n";
//    }else   cout << "Wrong! You have" << count - 1 << " tries left.\n";
//    }
//     if (count >=0)
//    {
//        cont == true; //program will continue to next riddle if user has not used all 3 tries
//    } else cont == false; //program will loop if user has used all 3 tries
    riddle3Answer(rid3Ans)
    {
    cout << "Riddle 3: What is a seven letter word containing dozens of letters?\n";
    cout << "HINT: Think of your local mailman.\n";
    cin >> r3Ans; 
    }
    
//    for (int count = 2; count >= 0; count--)
//    {
//
//    if (r3Ans == 'mailbox')
//    {
//        cout << "Correct!\n";
//    }else   cout << "Wrong! You have" << count - 1 << " tries left.\n";
//    }
    riddle4Answer(rid4Ans)
    {
    cout << "Riddle 4: You walk into a room with a rabbit holding a carrot, a pig eating slop, and a chimp holding a banana.\n";
    cout << "Which animal in the room is the smartest?\n";
    cout << "HINT: Consider all four animals present.\n";
    cin >> r4Ans;
    
    for (int count = 2; count >= 0; count--)
    {

    if (r4Ans == 'you' || r4Ans == 'me')
    {
        cout << "Correct!\n";
    }else   cout << "Wrong! You have" << count - 1 << " tries left.\n";
    }
    riddle5Answer(rid5Ans)
    {
    cout << "Riddle 5: How many eggs can you fit into an empty basket?(Enter an integer).\n";
    cout << "HINT: The basket is no longer empty once you add eggs.\n";
    cin >> r5Ans;
    
    for (int count = 2; count >= 0; count--)
    {
        if (r5Ans == 1)
        {
        cout << "Correct!\n";
        }else cout <<"Wrong! You have" << count - 1 << " tries left.\n";
    }
    }
    riddle6Answer(rid6Ans)
    {
    cout << "Riddle 6: What tastes better than it smells?\n";
    cout << "HINT: Think of the 5 senses.\n";
    cin >> r6Ans;
    
      for (int count = 2; count >= 0; count--)
    {
          if (r6Ans == 'a tongue' || r6Ans == 'your tongue' || r6Ans == 'tongue') 
          {
          cout << "Correct!\n";
          }else cout << "Wrong! You have" << count -1 << " tries left.\n";
    }
    }
    
    riddle7Answer(rid7Ans)
    {
    cout << "Riddle 7: What digit is the most frequent between the numbers 1 and 1,000 (inclusive)?\n";
    cout << "HINT: The digits 0 through 9 all follow the same pattern there is exactly 1 occurrence of each digit for every ten numbers.\n";
    cin >> r7Ans;
    
    for (int count = 2; count >= 0; count--)
    {
        if (r7Ans == 1)
        {
        cout << "Correct!\n";
        }else cout <<"Wrong! You have" << count - 1 << " tries left.\n";
    }
    }
    riddle8Answer(rid8Ans)
    {
    cout << "Riddle 8: You are going to visit your grandmother on Mother's day. You want to give her two cakes. However, to get to her house you must cross seven bridges.\n;";
    cout << "At each bridge is a troll who demands ½ of all of your cakes as the price to pass. However, this troll, being a nice troll, feels bad and gives you back 1 of the cakes that he took.\n";
    cout << "HINT: Write and solve an equation for the first instance.\n";
    cin >> r8Ans;
    
    for (int count = 2; count >= 0; count--)
    {
        if (r8Ans == 2)
        {
        cout << "Correct!\n";
        }else cout <<"Wrong! You have" << count - 1 << " tries left.\n";
    }
    riddle9Answer(rid9Ans)
    {
    cout << "Riddle 9: An ant gets onto one end of a tight rope that is 1 meter long. The ant is traveling at 1 centimeter per second, but the entire rope is being stretched an extra 1 meter (1,000 centimeters) a second (it can be stretched forever).
    cout << "Will the ant ever reach the other end of the rope (y/n)?";
    cout << "HINT: Both sides of the rope will stretch.\n";
    cin >> r9Ans;
    
    for (int count = 2; count >= 0; count--)
    {
        if (r9Ans == 'y')
        {
        cout << "Correct!\n";
        }else cout <<"Wrong! You have" << count - 1 << " tries left.\n";
    }
    }
    riddle10Answer(rid10Ans)
    {
    cout << "Riddle 10: How many people do you need to have a 50% chance of two people having the same birthday?(Enter an integer)\n";
    cout << "HINT: Calculate the probability for a sample group of n number of people for 365 birthdays. \n";
    cin >> r10Ans;
    
    for (int count = 2; count >= 0; count--)
    {
        if (r10Ans == 23)
        {
        cout << "Correct!\n";
        }else cout <<"Wrong! You have" << count - 1 << " tries left.\n";
    }
    }