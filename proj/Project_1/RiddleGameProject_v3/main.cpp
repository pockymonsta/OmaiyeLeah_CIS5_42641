/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on April 15, 2017 11:29 PM
 * Purpose: Riddle game project v3
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string> // allow user to input string answers & process strings
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    
    int r1Ans, r2Ans, r5Ans, r7Ans, r8Ans, r10Ans; //riddle number and answer for number answers
    string r3Ans, r4Ans, r6Ans; //riddle number and answer for word answers
    char r9Ans; //riddle number and answer for yes/no answer
    bool comp, cont; //completed program, continue to next statement
    //Input data
    
  cout << "\nThis is the Ultimate Riddle Game. \n";
  do //loop the program until user answers all 10 riddles correctly
   {
    
   
    cout << "\nAnswer all ten riddles to exit the game...\n...or be doomed to loop the program forever...\n";
    
    cout << "Riddle 1: What number do you get when you multiply all of the numbers on a telephone number pad? \n";
    cout << "HINT: multiply all numbers from 0-9.\n";
   
    //Map inputs to outputs or process the data
    
    for (int count = 3; count > 0; count--) //user has 3 tries
    {
    
        cin >> r1Ans;
        if (r1Ans == 0)
            {
                cout << "Correct!\n" ;
                cont = true; //program will continue to next riddle if user answers correctly 
                count = -1; //program will continue to next riddle if user has not used all 3 tries
            }
        else 
            {
                cont = false;  //program will not continue if user has used all 3 tries
                cout << "Wrong! You have " << count - 1 << " tries left.\n"; // tries left are displayed
                
            } 
    } 
    
    if (cont == true) //program continues if user answers previous riddle correctly
    {
        cout << "Riddle 2: When was the latest year that is the same upside down?\n";
        cout << "HINT: it's after 1960.\n";

        for (int count = 3; count > 0; count--)
        {
            cin >> r2Ans;
            if (r2Ans == 1961)
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                } //program will continue to next riddle if user has not used all 3 tries; this is the same for all following riddles 
            else   
                {
                    cont = false;
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                } //program will loop if user has used all 3 tries; this is the same for all following riddles
        } 
    }
    
    if (cont == true)
    {
        cout << "Riddle 3: What is a seven letter word containing dozens of letters?\n";
        cout << "HINT: Think of your local mailman.\n";
    
    
    
        for (int count = 3; count > 0; count--)
        {
            cin >> r3Ans; 

            if (r3Ans == "mailbox")
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                }
            else   
                {
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                    cont = false;
                }
        }
    }
    
    if (cont == true)
    {
        
        cout << "Riddle 4: You walk into a room with a rabbit holding a carrot, a pig eating slop, and a chimp holding a banana.\n";
        cout << "Which animal in the room is the smartest?\n";
        cout << "HINT: Consider all four animals present.\n";

        for (int count = 3; count > 0; count--)
        {
            cin >> r4Ans;

            if (r4Ans == "you" || r4Ans == "me")
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                }
            else   
                {
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                    cont = false;
                }
        }
    }
        
    if (cont == true)   
    {
    
        cout << "Riddle 5: How many eggs can you fit into an empty basket?(Enter an integer).\n";
        cout << "HINT: The basket is no longer empty once you add eggs.\n";
    
        for (int count = 3; count > 0; count--)
        {
            cin >> r5Ans;

            if (r5Ans == 1)
                {
                cout << "Correct!\n";
                cont = true;
                count = -1;        
                }
            else 
                {
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                    cont = false;
                }
       }
    }
    
    if (cont == true)
    {
    
        cout << "Riddle 6: What is a six letter word that tastes better than it smells?\n";
        cout << "HINT: Think of the 5 senses.\n";
    
        for (int count = 3; count > 0; count--)
        {
              cin >> r6Ans;

              if (r6Ans == "tongue") 
                  {
                      cout << "Correct!\n";
                      cont = true;
                      count = -1;
                  } 

            else 
                {
                    cout << "Wrong! You have " << count -1 << " tries left.\n";
                    cont = false;
                }
        }
    }
    
    if (cont == true)    
        { 

            cout << "Riddle 7: What digit is the most frequent between the numbers 1 and 1,000 (inclusive)?\n";
            cout << "HINT: The digits 0 through 9 all follow the same pattern there is exactly 1 occurrence of each digit for every ten numbers.\n";

        
    
        for (int count = 3; count > 0; count--)
        {
            cin >> r7Ans;

            if (r7Ans == 1)
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                }

            else 
                { 
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                    cont = false;
                }
        }
    }
    
    if (cont == true)
        {

            cout << "Riddle 8: You are going to visit your grandmother on Mother's day. You want to give her two cakes. However, to get to her house you must cross seven bridges.\n;";
            cout << "At each bridge is a troll who demands ½ of all of your cakes as the price to pass. However, this troll, being a nice troll, feels bad and gives you back 1 of the cakes that he took.\n";
            cout << "HINT: Write and solve an equation for the first instance.\n";

        
    
        for (int count = 3; count > 0; count--)
        {
            cin >> r8Ans;

            if (r8Ans == 2)
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                }

            else 
                {
                    cout <<"Wrong! You have " << count - 1 << " tries left.\n"; 
                    cont = false;
                }
        }
    }
    
    if (cont == true)
    {

        cout << "Riddle 9: An ant gets onto one end of a tight rope that is 1 meter long.\n"; 
        cout << "The ant is traveling at 1 centimeter per second, but the entire rope is being stretched an extra 1 meter per second (it can be stretched forever).\n";
        cout << "Will the ant ever reach the other end of the rope (y/n)?\n";
        cout << "HINT: Both sides of the rope will stretch.\n";

        for (int count = 3; count > 0 ; count--)
        {
            cin >> r9Ans;

            if (r9Ans == 'y')
            {
            cout << "Correct!\n";
            cont = true;
            count = -1;
            } 
            else
            {
                cout <<"Wrong! You have " << count - 1 << " tries left.\n";
                cont = false;
            }
        }
    }
    
    if (cont == true) 
        {

        cout << "Riddle 10: How many people do you need to have a 50% chance of two people having the same birthday?(Enter an integer)\n";
        cout << "HINT: Calculate the probability for a sample group of n number of people for 365 birthdays. \n";

        for (int count = 3; count > 0; count--)
        {
            cin >> r10Ans;

            if (r10Ans == 23)
                {
                    cout << "Correct!\n";
                    cont = true;
                    count = -1;
                }

            else
                {
                    cout << "Wrong! You have " << count - 1 << " tries left.\n";
                    cont = false; //winning message will not be displayed if user uses all 3 tries
                    comp = false; //program will loop back to beginning if user uses all 3 tries
                }
        }
    }
    
    //Output the transformed data
    
    if (cont == true)
    {
        cout << "CONGRATULATIONS! YOU'VE WON.\n";
        cout << "You get a cookie!\n";
        cout << "        . -  -  .\n";
        cout << "      .'      *   '.\n";
        cout << "     /  *           ' \n";
        cout << "    :                ;\n";
        cout << "    |*      *    *   |\n";
        cout << "    :                :\n";
        cout << "    `    *          /\n";
        cout << "      `.      *   .'\n";
        cout << "        `~  ~ ~  `\n";
        comp = true; //program will exit once user answers all 10 riddles correctly

    } 
} while (comp == false); //loop the program if the user does not complete the 10 riddles
    
    
    //Exit stage right!
    return 0;
  
}
    
