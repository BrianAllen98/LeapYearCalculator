// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
// this program is capable of predicting the future, using void functions.
//written by. brian L allen

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void school(int lucky);
void love(int lucky);
void finance(int lucky);

int main()
{
	int lifetopic,lucky;
	char x;
	bool playagain = true;
	//game menu
	while (playagain)  //control switch

	{
		cout << "enter your lucky number then press enter " << endl;
		cin >> lucky;
		cout << "choose one of the folloing topics: " << endl;
		cout << "choose 1 for school | choose 2 for love | choose 3 for finance  " << endl;
		cout << endl;
		cin >> lifetopic;

		//test for which function the user requested
		if (lifetopic == 1)
			school(lucky);
		else if (lifetopic == 2)
			love(lucky);
		else if (lifetopic == 3)
			finance(lucky);
		cout << "         \n if you want to play again press Y ";
		cin >> x;
		x = tolower(x);			//to use either upper or lower case input

		if (x == 'y') { cout << endl;cout << endl; }
		else
			playagain = false;
	}
}
	


	

void school(int lucky)
{
	srand(lucky );   //to make number completely random
	switch (rand() % 5)   //set new range
	{
	case 0:
		cout << "try again.";
		break;
	case 1:
		cout << "great going         -be brave take risks.";
		break;
	case 4:
		cout << "you got it!         -your'e a lucky guy/gal.";
		break;
	case 3:
		cout << "your'e a winner!!   -something good will happen to you this weekend.";
		break;
	case 2:
		cout << "almost had it, maybe next time sport.";
		break;
	default:
		break;
	}
}
		
		
void love(int lucky)
{
	srand(lucky);   //to make number completely random
	switch (rand() % 5)   //set new range

	{
	case 0:
		cout << "try again.";
		break;
	case 1:
		cout << "great going        -your partner is cheating on you.";
		break;
	case 4:
		cout << "you got it!        -your lucky number is. ";
		break;
	case 3:
		cout << "winner!!           -something good will happen to you this weekend.";
		break;
	case 2:
		cout << "almost had it, maybe next time sport.";
		break;
	default:
		break;
	}
}


void finance(int lucky)
{
	srand(lucky);   //to make number completely random
	switch (rand() % 5)   //a modulus of 5 sets a range of 0-4
	{
	case 0:
		cout << "try again";
		break;
	case 1:
		cout << "great going        -5000 was spontaneously deposited into your bank account.";
		break;
	case 4:
		cout << "you got it!        -the IRS won't be calling you anytime soon, but when they do, expected a huge refund check.";
		break;
	case 3:
		cout << "winner!!           -something good will happen to you this weekend.";
		break;
	case 2:
		cout << "almost had it, maybe next time sport.";
		break;
	default:
		break;
	}

}
	


