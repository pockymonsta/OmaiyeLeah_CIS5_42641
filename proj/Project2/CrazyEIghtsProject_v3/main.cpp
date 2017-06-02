/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on May 26, 2017 11:10 PM 
 * Purpose:  Crazy Eights Project v3
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>
#include  <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void rules(); //display rules of game
void inDeck(); //initialize deck with 52 cards
void shuffle(); 
void inHand(); //initialize number of cards for each player, 7 each
void drawCrd();
void playCrd();
void compCrd(); //compare player's card to preceding card

//Execution begins here
int main() {
    rules(); //display rules of game first
    
    //Declare and initialize variables
    int name1, name2;
    int *hand = 7;
    hand = new int[];
    
    //Input data
    
    ofstream p1;
    p1.open("player1.txt");
    p1 << "Player 1 enter your name: \n";  
    p1 >> name1;
    cout << "player 1: " << name1 << endl;
    p1 << "\n";
    p1.close();
    
    ofstream p2;
    p2.open("player2.txt");
    p2 << "Player 2 enter your name: \n";
    p2 >> name2;
    cout << "player 2: " << name2 << endl;
    p2.close();
    
    //Map inputs to outputs or process the data

    //Output the transformed data
    
    //Exit stage right!
    delete hand[];
    return 0;
}

void rules()
{
    cout << "This is Crazy Eights for two players.\n";
    cout << "Each player starts with 7 cards.\n";
    cout << "The object of the game is to get rid of all of your cards.\n";
    cout << "Match one of your cards with either the rank or suit of the preceding card.\n";  
    cout << "If you do not have a matching card, draw from the deck until you do.\n";
    cout << "The first player to empty their hand is the winner.\n";
    cout << "If there are no playable cards and the deck runs out, the person with the least number of cards wins.\n";
}

void inDeck() //function to initialize 52 cards in the deck 
{
    int dSize[52]; //size of deck is 52 cards; 100-109: spades; 10-19: clubs; 20-29: diamonds; 30-39: hearts
    int n = 100;
    for(int i = 0; i < 52; i++)
    {
        
        dSize[i] = n;
        n =+ n;
        
    }
}

void drawCrd()
{
}

void compCrd()
{
}