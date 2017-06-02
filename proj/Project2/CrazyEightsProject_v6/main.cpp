/*
* File:   main.cpp
* Author: Leah Omaiye
* Created on May 31, 2017 11:11 PM
* Purpose:  Crazy Eights Project v6
*/

//System Libraries
#include <iostream>  //Input - Output Library
#include <algorithm> // use random_shuffle
#include <fstream> //file I/O
#include <iomanip>//format output
#include <cstdlib> //use srand to set seed
#include <ctime>//time for rand
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void rules(); //display rules of game
void deck(int[], int); //initialize deck with 52 cards

int dealCrd(int[], int&); //function to get top card
string getSuit(int); //function to get suit
int getVal(int); //function to get card number
void dealHnd(int[], int[], int&); //function to deal hand
void drawCrd(); //function for players to draw card
void calcScr(); //function to calculate score

//Execution begins here
int main() {

    rules(); //display rules of game first

    //set rand num seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and initialize variables
    ifstream in; //input file
    ofstream out; //output file
    string name1, name2;
    int p1Crd, p2Crd;
    char choice1, choice2;
    const int p1size = 7; //size of hand array
    const int p2size = 7; //7 cards for each player
    const int size = 52; // initial deck starts with 52 cards
    int crdsLft = size; //cards left in deck after dealing/drawing
    typedef int* IntArrayPtr;
    IntArrayPtr pDeck, p1Hand, p2Hand;
    pDeck = new int[size]; //deck as a pointer   
    
        //players' hands as pointers
    p1Hand = new int[p1size];
    p2Hand = new int[p2size];
    
    //Input data
    in.open("score.dat");
    cout << "Player 1 enter your name: ";
    cin >> name1;
    cout << "Player 2 enter your name: ";
    cin >> name2;
    out.open("score.dat");
    
    deck(pDeck, size); //function to initialize  deck

    random_shuffle(&pDeck[0], &pDeck[size]); //function to shuffle deck

    int deltCrd = dealCrd(pDeck, crdsLft); //top card dealt from deck
    cout << "Match your card with: ";
    cout << getVal(deltCrd) << " of " << getSuit(deltCrd) << endl; //represent actual card number as value of card and suit

        //functions to deal hands to players
    dealHnd(p1Hand, pDeck, crdsLft); 
    dealHnd(p2Hand, pDeck, crdsLft);

    cout << "Player 1 hand: ";
    for (int i = 0; i < 7; i++)
    {
        cout << p1Hand[i] << " - "; //display actual card number 
        cout << getVal(p1Hand[i]) << " of " << getSuit(p1Hand[i]) << endl; //display value of card and suit
    }
    cout << endl;

    cout << "Player 2 hand: ";
    for (int i = 0; i < 7; i++)
    {
        cout << p2Hand[i] << " - "; //display actual card number
        cout << getVal(p2Hand[i]) << " of " << getSuit(p2Hand[i]) << endl; //display value of card and suit
    }
    cout << endl;

//    cout << "Remaining cards:\n"; //show remaining cards of deck array
//    for (int i = 0; i < crdsLft; i++)
//    {
//        cout << pDeck[i] << " ";
//    }
//    cout << endl;
    
    do
    {
        cout << "Player 1: would you like to draw a card (d) or play a card(p)?(enter d or p):\n";
        cin >> choice1;
        if(choice1 == 'd')
        {
            
        }
        else if (choice1 == 'p')
        {
            cout << "Which card would you like to play?\n";
            cout << "(enter the card number)\n";
            cout << "(ex. 1 - for Ace of Hearts, 23 - for 10 of Diamonds, 43 - for 4 of Spades, etc...)\n";
            cin >> p1Crd;

            while(p1Crd % 13 != deltCrd % 13 && p1Crd / 13 != deltCrd / 13 && p1Crd % 13 != 8)
            {
                cout << " This card won't work. Play another card or draw a card.(enter 0 to draw a card)\n";  
                cin >> p1Crd;
                if(p1Crd == 0)
                {
                    
                }
            }
                cout << "Nice!\n";
                deltCrd = p1Crd;
        }
        cout << "Player 2: would you like to draw a card (d) or play a card(p)?(enter d or p):\n";
        cin >> choice2;
        if(choice2 == 'd')
        {
            p2Hand[p2size];
        }
        else if (choice2 == 'p')
        {
            cout << "Which card would you like to play?\n";
            cout << "(enter the card number)\n";
            cout << "(ex. 1 - for 2 of Hearts, 23 - for Jack of Diamonds, 43 - for 5 of Spades, etc...)\n";
            cin >> p2Crd;

            while(p2Crd % 13 != deltCrd % 13 && p2Crd / 13 != deltCrd / 13 && p1Crd % 13 != 8)
            {
                cout << " This card won't work. Play another card or draw a card (enter 0 to draw a card).\n";  
                cin >> p2Crd;
            }            
                cout << "Nice!\n";
                deltCrd = p2Crd;
    }
    }while (p1Hand[p1size] > 0 || p2Hand[p2size] > 0 || pDeck[size] > 0);
    if (p1Hand[p1size] < p2Hand[p2size])
    {
        cout << "Congrats player 1! You win!\n";
    }
    else if (p2Hand[p2size] < p1Hand[p1size])
    {
        cout << "Congrats player 2! You win!\n";
    }
    calcScr();

        // delete pointers
    delete[] pDeck;
    delete[] p1Hand;
    delete[] p2Hand;

    //Exit stage right!
    in.close();
    out.close();
    return 0;
}

void rules() //display rules
{
    cout << "This is Crazy Eights for two players.\n";
    cout << "Each player starts with 7 cards.\n";
    cout << "The object of the game is to get rid of all of your cards.\n";
    cout << "Match one of your cards with either the rank or suit of the top card or play an 8 of any suit.\n";
    cout << "If you do not have a matching card, draw from the deck until you do.\n";
    cout << "The first player to empty their hand is the winner.\n";
    cout << "If there are no playable cards and the deck runs out, the person with the least number of cards wins.\n";
}

void deck(int *pDeck, int size) //function to initialize 52 cards in the deck 
{
    int n = 0;

    for (int i = 0; i < size; i++)
    {
        pDeck[i] = n; 
        n++;
    }

}

int dealCrd(int *pDeck, int &crdsLft) //function to get top card and deal cards
{
    int drwnCrd = pDeck[crdsLft - 1];
    crdsLft--; //deck size shrinks as cards are dealt

    return drwnCrd;
}

string getSuit(int card)
{
    switch (card / 13)
    {
    case 0:
        return "Hearts";
    case 1:
        return "Diamonds";
    case 2:
        return "Clubs";
    case 3:
        return "Spades";
    }
}

int getVal(int card) // function to get value of card
{
    return card % 13;
}

void dealHnd(int *hand, int *pDeck, int &crdsLft) //function to populate hand pointer with dealt cards
{
	for (int i = 0; i < 7; i++)
	{
		hand[i] = dealCrd(pDeck, crdsLft);
	}
}
void calcScr()
{
    
}