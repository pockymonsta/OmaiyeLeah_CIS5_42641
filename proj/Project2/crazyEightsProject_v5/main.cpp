/*
* File:   main.cpp
* Author: Leah Omaiye
* Created on May 30, 2017 11:11 PM
* Purpose:  Crazy Eights Project v5
*/

//System Libraries
#include <iostream>  //Input - Output Library
#include <algorithm> // use random_shuffle to shuffle deck array
#include <fstream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>
#include <string>
#include <vector> // turn players' hands into vectors when drawing cards
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
void calcScr(); //function to calculate score

//Execution begins here
int main() {

    rules(); //display rules of game first

    //set rand num seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and initialize variables
    int p1Crd, p2Crd, compr;
    char choice1, choice2;
    const int p1size = 7; //size of hand array
    const int p2size = 7; //7 cards for each player
    const int size = 52; // initial deck starts with 52 cards
    int crdsLft = size;
    typedef int* IntArrayPtr;
    IntArrayPtr pDeck, p1Hand, p2Hand;
    pDeck = new int[size]; //deck as a pointer    
    p1Hand = new int[p1size];//players' hands as pointers
    p2Hand = new int[p2size];
    vector<int> p1;
    vector<int> p2;
    //Input data

    deck(pDeck, size);

    random_shuffle(&pDeck[0], &pDeck[size]);

    int deltCrd = dealCrd(pDeck, crdsLft);
    cout << "Match your card with: ";
    cout << getVal(deltCrd) << " of " << getSuit(deltCrd) << endl;

    dealHnd(p1Hand, pDeck, crdsLft);
    
    dealHnd(p2Hand, pDeck, crdsLft);

    cout << "Player 1 hand: ";
    for (int i = 0; i < 7; i++)
    {
        cout << p1Hand[i] << " - ";
        cout << getVal(p1Hand[i]) << " of " << getSuit(p1Hand[i]) << endl;
    }
    cout << endl;

    cout << "Player 2 hand: ";
    for (int i = 0; i < 7; i++)
    {
        cout << p2Hand[i] << " - ";
        cout << getVal(p2Hand[i]) << " of " << getSuit(p2Hand[i]) << endl;
    }
    cout << endl;

    cout << "Remaining cards:\n";
    for (int i = 0; i < crdsLft; i++)
    {
        cout << pDeck[i] << " ";
    }
    cout << endl;
    do
    {
        cout << "Player 1: would you like to draw a card (d) or play a card(p)?(enter d or p):\n";
        cin >> choice1;
        if(choice1 == 'd')
        {
            for (int i = 0; i < 2 ; i++)
            {
            p1Hand[i];
            }
        }
        else if (choice1 == 'p')
        {
            cout << "Which card would you like to play?\n";
            cout << "(enter the card number)\n";
            cout << "(ex. 1 - for Ace of Hearts, 23 - for 10 of Diamonds, 43 - for 4 of Spades, etc...)\n";
            cin >> p1Crd;

            while(p1Crd % 13 != deltCrd % 13 && p1Crd / 13 != deltCrd / 13)
            {
                cout << " This card won't work. Play another card or draw a card.(enter 0 to draw a card)\n";  
                cin >> p1Crd;
            }
                cout << "Nice!\n";
                p1Hand[p1size];
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

            while(p2Crd % 13 != deltCrd % 13 && p2Crd / 13 != deltCrd / 13)
            {
                cout << " This card won't work. Play another card or draw a card (enter d or p).\n";  
                cin >> p2Crd;
            }            
                cout << "Nice!\n";
                deltCrd = p2Crd;
    }
    }while (p1Hand[p1size] > 0 || p2Hand[p2size] > 0 || pDeck[size] >0);
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
    system("pause");
    return 0;
}

void rules()
{
    cout << "This is Crazy Eights for two players.\n";
    cout << "Each player starts with 7 cards.\n";
    cout << "The object of the game is to get rid of all of your cards.\n";
    cout << "Match one of your cards with either the rank or suit of the top card.\n";
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
    int drawnCard = pDeck[crdsLft - 1];
    crdsLft--;

    return drawnCard;
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
//    switch (card % 13)
//	{
//        default:
//            return card % 13;
//	case 0:
//            return "Ace";
//	case 11:
//            return "Jack";
//	case 12:
//            return "Queen";
//	case 13:
//            return "King";
//	}
}

void dealHnd(int *hand, int *pDeck, int &crdsLft) //function to populate hand pointer with dealt card
{
	for (int i = 0; i < 7; i++)
	{
		hand[i] = dealCrd(pDeck, crdsLft);
	}
}
void calcScr()
{
}