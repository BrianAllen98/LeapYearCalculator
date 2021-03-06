// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Coffeeshop Program
//Lab #6b – Coffee Anyone?
// written by Brian Allen
// Prof. Nevins
// & = ampersand


#include "pch.h"
#include <iostream>
using namespace std;
    
    void menu(char&); //menu prototype
	int buycoffee(float& , int& , float& , int& , float& , int&); // coffee purchase func prototype


	int main() //where the magic happens 
	{
		char Response; //datatype which holds the value of the users input
		float smallCups=2.75;   // price of small coffee
		int TotalSmall_cups;    // total amount of small cups inputted by the user
		float mediumCups=2.90;  // price of medium coffee
		int TotalmediumCups;    // total amount of medium cups inputted by the user
		float largeCups=3.00;   //price of large coffee
		int Total_largeCups;    // total amount of large coffee inputted by the user
		
		menu(Response); // value will be passed at menu
		if (Response == 'y' || Response == 'Y')
			buycoffee(smallCups, TotalSmall_cups, mediumCups, TotalmediumCups, largeCups, Total_largeCups); //function protpotype to buy coffee if the conditions are met
		

	
	}



	void menu(char &Response) //coffee menu one. the menu that intiates the program

{
	cout << "welcome to BigBucks Coffee Shop" << endl;
	cout << endl;
	cout << "press Y to buy coffee" << endl; // the intializer 
	cout << "press N to end program" << endl;
	cin >> Response;  // user response
	
}



int buycoffee(float &smallCups, int &TotalSmall_cups, float &mediumCups, int &TotalmediumCups, float &largeCups, int &Total_largeCups)// value type ampersands???????
{

	bool coffeeshop = true; // condition to start program as a logic parameter
	char Response;          // data type that holds users input
	double oz = 0;          // coffee size value in ounces

	while (coffeeshop) //while true program will run
	{
		cout << "size of coffee cups available [S, M, L]: ";
		cin >> Response; // size of coffee will be dumped into reponse
		Response = tolower(Response);  // response will be auto-magically converted to a lower case letter 
	



		switch (Response) // the loop that the menu input will run against
		{
		case 's':    
			oz += 9;
			break;
		case 'm':
			oz += 12;
			break;
		case 'l':
			oz += 15;
			break;
		default:
			cout << "you've input the wrong selection please try again";
			
		}
		//loop statements for each size input below
		if (Response == 's')
		{
			cout << "how many orders of small coffee would you like to purchase " << endl;
			cin >> TotalSmall_cups;
			cout << "total number of small coffee sold was: " << TotalSmall_cups << " cups" << endl;
			cout << "total amount of oz: " << oz * TotalSmall_cups << "oz(s)" << endl;
			cout << "total amount of money made: " <<'$'<< smallCups * TotalSmall_cups << endl;
			cout << endl;
			return 0;
			
		  }
		
		else  if (Response == 'm')
		{
			cout << "how many orders of medium coffee would you like to purchase" << endl;
			cin >> TotalmediumCups;
			cout << "total number of small coffee sold was: " << TotalmediumCups<< " cups" << endl;
			cout << "total amount of oz: " << oz * TotalmediumCups<< "oz(s)" << endl;
			cout << "total amount of money made: " << mediumCups * TotalmediumCups<< endl;
			return 0;
		}
		else if (Response == 'l')
		{
			cout << "how many orders of large coffee would you like to purchase" << endl;
			cin >> Total_largeCups;
			cout << "total number of small coffee sold was: " << Total_largeCups<< " cups" << endl;
			cout << "total amount of oz: " << oz * Total_largeCups << "oz(s)" << endl;
			cout << "total amount of money made: " << largeCups * Total_largeCups << endl;
			return 0;
		}
		//conditions toend program below
		if (Response == 'n')
		coffeeshop = false;

	}
	return 0;
}






