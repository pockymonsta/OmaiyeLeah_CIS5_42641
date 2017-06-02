/* 
 * File:   main.cpp
 * Author: Leah Omaiye
 * Created on May 29, 2017 2:57 PM 
 * Purpose:  Crazy Eights Project v4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <algorithm> // use random_shuffle to shuffle deck array
#include <fstream>
#include  <iomanip>
#include <cstdlib> 
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void rules(); //display rules of game
void deck(int [], int); //initialize deck with 52 cards
void shuffle(int [], int); 
void dealCrd(int[], int, int); //function to get top card
void inHand(int [], int [], int [], int, int, int value); //initialize number of cards for each player, 7 each
void playHnd(int[], int[], int, int, int& val);//function for user to play one of their cards or draw a card
//void drawCrd(int [], int);
//void compCrd(int&, int&); //compare player's card to preceding card
int score();

//Execution begins here
int main() {
    
    rules(); //display rules of game first
    
    //set rand num seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    int val;
    const int hndSz1 = 7; //size of hand array
    const int hndSz2 = 7; //7 cards for each player
    const int size = 52; // initial deck starts with 52 cards
    int aDeck[size] = {}; //deck as an array    
    int hand1[hndSz1] = {};
    int hand2[hndSz2] = {};
    
    //Input data
    
    deck(aDeck, size);
    
    shuffle(aDeck, size);

    dealCrd(aDeck, size, val);

    inHand(hand1, hand2, aDeck, size, hndSz1, hndSz2);
    
    //Map inputs to outputs or process the data
    playHnd(hand1, hand2, hndSz1, hndSz2, val);
//    compCrd();
    //Output the transformed data
    
    //Exit stage right!
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

void deck(int aDeck[], int size) //function to initialize 52 cards in the deck 
{   
    int n = 0;
    
    for(int i = 0; i < size; i++)
    {
        aDeck[i] = n; // n is the actual numerical value of the card
        n++;        
        //cout << " meep " << n << endl;    //actual value of card    
    }
    
}

void shuffle(int aDeck[], int size)
{
    random_shuffle(&aDeck[0], &aDeck[52]);
    
    int n = 0;
    for(int i = 0; i < 52; i++)
    {
        n = aDeck[i]; // n is actual num val of card in array
        n++;
    }
}

void dealCrd(int aDeck[], int size, int val) //function to get top card
{
    int face; // for face cards: ace, jack, queen, king
    val = aDeck[0] + 1; 
    cout << "Match your card with card #" << val << ": "; //top card, actual value
        
    if(1 <= val && val <= 13) //hearts are #s 1 - 13 of the deck 
    {
        if (val > 10 || val == 1) // used for face cards
        {
            switch(val) { //used to determine face card
                case 1  :   cout << "Ace"; break;
                case 11 :   cout << "Jack"; break;
                case 12 :   cout << "Queen"; break;
                case 13 :   cout << "King"; break;
                default :   cout << ""; break;
            }
        }
        else
        {
            cout << val;
        }
        cout << " of Hearts\n";
    }
    if(14 <= val && val <= 26) //diamonds are #s 14 - 26 of deck 
    {
        if ((val - 13) > 10 || (val - 13) == 1) //used for face cards
        {
            
            face = val - 13;
            switch(face) { //used to determine face card
                case 1  :   cout << "Ace"; break;
                case 11 :   cout << "Jack"; break;
                case 12 :   cout << "Queen"; break;
                case 13 :   cout << "King"; break;
                default :   cout << ""; break;
            }
        }
        else
        {
            cout << val - 13;
        }
        cout << " of Diamonds\n";
    }
    if(27 <= val && val <= 39) //clubs are #s 27 - 39 of deck 
    {
        if ((val - 26) > 10 || (val - 26) == 1)
        {
            face = val - 26;
            switch(face) {
                case 1  :   cout << "Ace"; break;
                case 11 :   cout << "Jack"; break;
                case 12 :   cout << "Queen"; break;
                case 13 :   cout << "King"; break;
                default :   cout << ""; break;
            }
        }
        else
        {
            cout << val - 26; 
        }
        cout << " of Clubs\n";
    }
    if(40 <= val && val <= 52) //spades are #s 40 - 52 of deck
    {
        if ((val - 39) > 10 || (val - 39) == 1)
        {
            face = val - 39;
            switch(face) {
                case 1  :   cout << "Ace"; break;
                case 11 :   cout << "Jack"; break;
                case 12 :   cout << "Queen"; break;
                case 13 :   cout << "King"; break;
                default :   cout << ""; break;
            }
        }
        else
        {
            cout << val - 39;
        }
        
        cout << " of Spades\n";
    }   
}

void inHand(int hand1[], int hand2[], int aDeck[], int size, int hndSz1, int hndSz2) //function to initialize cards in hand
{
    int n = 0;
    int m = 0;
    int crd1 = 0;
    aDeck[crd1] = 0;            
    cout << "hand 1: \n";

    for (int i = 0; i < 7; i++)
    {
        hand1[crd1] = aDeck[crd1];
        n = hand1[crd1];
        crd1++;
        n++;
        cout << "   " << n << endl;   
        
        if(1 <= n && n <= 13) //hearts are #s 1 - 13 of the deck 
        {
            if (n > 10 || n == 1) // used for face cards
            {
                switch(n) { //used to determine face card
                    case 1  :   cout << "Ace"; break;
                    case 11 :   cout << "Jack"; break;
                    case 12 :   cout << "Queen"; break;
                    case 13 :   cout << "King"; break;
                    default :   cout << ""; break;
                }
            }
        else
        {
            cout << n - 13;
        }
        cout << " of Hearts\n";
        }
    }
    
    int crd2 = 7;
    aDeck[crd2] = 7;            
    cout << "hand 2: \n";

    for (int j = 0; j < 7; j++)
    {
        hand2[crd2] = aDeck[crd2];
        m = hand2[crd2];
        crd2++;
        m++;
        cout << "  " << m << endl;            
    }
    
}
void playHnd(int hand1[], int hand2[], int hndSz1, int hndSz2, int &val)
{
    int p1;
    int compr;
    compr = val;
    cout << "Player 1: which card would you like to play?\n";
    cout << "(enter the card number)\n";
    cout << "(ex. 1 - for Ace of Hearts, 23 - for 10 of Diamonds, 43 - for 4 of Spades, etc...)\n";
    cin >> p1;
    if(p1 % 13 != compr % 13 && p1 / 13 != compr / 13)
    {
        cout << " This card won't work. Play another card or draw a card.\n";   
    }
    
    else
    {
        cout << "Nice!\n";
        compr = p1;
    }
    
    int p2;
    cout << "Player 2: which card would you like to play? \n";
    cout << "(enter the card number)\n";
    cout << "(ex. 1 - for Ace of Hearts, 23 - for 10 of Diamonds, 43 - for 4 of Spades, etc...)\n";
    cin >> p2;
    if(p2 % 13 != compr % 13 && p2 / 13 != compr /13)
    {
        cout << " This card won't work. Play another card or draw a card.\n";   
    }
    
    else
    {
        cout << "Nice!\n";
    }
    
}


void compCrd(int &val, int&p1) //function to compare user's card with top card 
{
    
}

int score()
{
}