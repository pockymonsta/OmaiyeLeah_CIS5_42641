/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on May 26, 2017 6:45 PM 
 * Purpose:  Crazy Eights Project v2
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

class Deck
{
public:
    void inDeck(); //initialize deck with 52 cards
    void shuffle(); 
    void drawCrd();
 
};

class Hand
{
public:
    int inHand(); //initialize number of cards for each player, 7 each
    int drawCrd();
    int playCrd();
    int compCrd(); //compare player's card to preceding card
};

class Players
{
public:
    
    
};
//Global Constants

//Function Prototypes
void rules(); //display rules of game

//Execution begins here
int main() {
    rules(); //display rules of game first
    
    //Declare and initialize variables
    int name1, name2;
    
    //Input data
    
    ofstream p1;
    p1.open("player1.txt");
    p1 << "Player 1 enter your name: \n";  
    p1 >> name1;
    p1 << "\n";
    p1.close();
    
    ofstream p2;
    p2.open("player2.txt");
    p2 << "Player 2 enter your name: \n";
    p2 >> name2;
    p2.close();
    
    //Map inputs to outputs or process the data

    //Output the transformed data
    
    //Exit stage right!
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

void Deck::inDeck() //function to initialize 52 cards in the deck 
{
    int dSize[52]; //size of deck is 52 cards; 100-109: spades; 10-19: clubs; 20-29: diamonds; 30-39: hearts
    int n = 100;
    for(int i = 0; i < 52; i++)
    {
        
        dSize[i] = n;
        n =+ n;
        
    }
}
