/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on May 21, 2017 11:02 PM 
 * Purpose:  Crazy Eights Project v1
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
class Card 
{
public:
    int getSuit(); //suits are represented as integers; 1-hearts,  2-diamonds, 3-spades, 4-clubs   
    int getRank();
} suit, rank;

class Deck
{
public:
    void inDeck(); //initialize deck with 52 cards
    void shuffle(); 
    void drawCrd();
 
} cards;

class Hand
{
public:
    int inHand(); //initialize number of cards for each player, 7 each
    int drawCrd();
    int playCrd();
    int compCrd(); //compare player's card to preceding card
} suit;

//Global Constants

//Function Prototypes
void rules(); //display rules of game
void players(); 
//void shuffle();

//Execution begins here
int main() {
    //Declare and initialize variables
#define SIZE 52;
    //Input data
    
    //Map inputs to outputs or process the data
    
    rules();
    players();
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

void players()
{
    cout << "player1: \n";
    cout << "player2: \n";
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