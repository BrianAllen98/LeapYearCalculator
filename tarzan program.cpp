﻿// tarzan program.cpp : This programs calculate the death rate of missionarys being eaten by cannibal with tarzan swining in to the rescue
//prof. nevins csc 126
//written by. brian allen
//date 10/29/18

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()

{
	int darkness = 9, tarzan = 0;
	bool cannibals = true;
	int time = 0, dayTime = tarzan = 7;
	double end_of_hour = 0, missionary_left = 10;
	double cannibals_eating = 30, eaten = 0;
	double tarzanDistance = 80;
	//tarzan -= 7;




	//missionary_left = 30 / 30.0;
	cout << "end of hour               missonary left               Cannibals Eating             Tarzan Distance " << endl;
	cout << end_of_hour << setw(32) << missionary_left << setw(32) << cannibals_eating << setw(28) << tarzanDistance << endl;

	while (cannibals)
	{

		eaten = (cannibals_eating/ 30.0);     
		cannibals_eating = cannibals_eating - 1;
		
		if ( missionary_left > 0)
		missionary_left = missionary_left - eaten;
		//while it is dark out function + while it is daytime

		if (end_of_hour <= 3)
		{
			tarzanDistance = tarzanDistance - 7;
			end_of_hour++;
	

		}
		else if (end_of_hour >=4)
		{
			tarzanDistance = tarzanDistance - 3;
			end_of_hour++;

		}

		cout << end_of_hour << setw(32) << ceil (missionary_left )<< setw(32) << cannibals_eating << setw(28) << tarzanDistance << endl;
		if (ceil(missionary_left) <= 1)
			cannibals = false; // get out of the loop condition
		
	}
	
	
	
	return 0;
}

