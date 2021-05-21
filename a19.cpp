#include<iostream>
using namespace std;

const int clubs=0;
const int diamonds=1;
const int hearts=2;
const int spades=3;

const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;


struct card
{
    int number;
    int suit;
    
};

int main()
{
    card temp,chosen,prize;
    int position;
    card card1 = { 7, clubs};
    cout<<" card 1 is the 7 of the club"<<endl;

    card card2= { jack ,hearts};
    cout<<"card2 is jack of heart"<<endl;

    card card3= { ace,spades};
    cout<<"card 3 is ace of spades"<<endl;

    prize = card3;

    cout<<"im swapping card 1 and card 3"<<endl;
    temp = card3;
    card3=card1;
    card1=temp;

    cout<<" im swapping card2 and card3 \n";
    temp=card3;
    card3=card2;
    card2=temp;

    cout<<"im swapping card1 and card2 \n";
    temp= card2;
    card2=card1;
    card1=temp;

    cout<<"now where { 1,2,3} is ace of spade? ";
    cin >>position;

    switch(position)
    {
        case 1: chosen = card1;
        break;
        case 2: chosen = card2;
        break;
        case 3: chosen = card3;
        break;
    }
    

    if(chosen.number == prize.number && chosen.suit == prize.suit)
    cout<<"thats right! you win \n ";
    else
    cout<<"sorry .you lose \n";

    return 0;



}












