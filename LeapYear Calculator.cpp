﻿// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// lab 3
// description: Calculation
//programmer: Brian Allen
// Date: 9-31-2018


#include "pch.h"
#include <iostream>                          
using namespace std;


int main()
{
	int day, month, total;						
	int leapyear, not_leapyear, year,count;			
	const char SPACE = ' ';
	

	cout << "written by brian allen" << endl;

	cout << endl;
	
	cout << "enter day = " << SPACE ; cin >> day;					// to contain all work to one line/ line of code
	//user input/ 
	cout << "Enter month = " << SPACE; cin >> month;
	
	cout << "enter year =" << SPACE; cin >> year;					//end user interface
	

	if		(month == 1)												//whatever day january is, is what gets printed.
				total = day;
	else 
		while 
		{
			(month == 2)
			total = 31 + 28 + day;
	(month == 3)
		total = 28 + 31 + 31 + day;
	(month == 4)
		total = 31 + 28 + 62 + day;
	(month == 5)
		total = 62 + 61 + 28 + day;
	(month == 6)
		total = 61 + 62 + 28 + day;
	(month == 7)
		total = 62 + 30 + 62 + 28 + day;
	(month == 8)
		total = 31 + 31 + 30 + 62 + 31 + 28 + day;
	(month == 9)
		total = 30 + 62 + 30 + 62 + 31 + 28 + day;
	(month == 10)
		total = 61 + 62 + 30 + 62 + 31 + 28 + day;
	(month == 11)
		total = 60 + 31 + 62 + 30 + 62 + 59 + day;
	(month == 12)
		total = 62 + 30 + 62 + 60 + 62 + 59 + day;
		}
	if ((year % 4 == 0) || (year % 400 == 0) && (year % 100 == 1))
		cout << "is a leapyear" << endl;
	else
		cout << "is not a leapyear" << endl;
	

	////////////////////////////////////////////////////////

	cout << endl;
	cout << "based on our calculations we've concluded that it has been"; 
	cout << SPACE << total; cout << SPACE << "days " << "since jan 1st"<< endl;
	cout << endl;
	cout << "month = " << SPACE; cout << month << endl;            
	cout << "day  = " << SPACE; cout << day << endl;
	cout << "year = "<< SPACE; cout << year << endl;
	cout << endl;

	 

}

