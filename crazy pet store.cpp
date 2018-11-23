// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

	int bowls[] = { 15,15,15,8,8,8,8,19,16,16,16,16,14,14,14,14,14,14,14,14,14,14,31,31,9,9,9,9,9,26,26,26,26,8,8 };
	int fishleft=0 ; //45 +32 +19+4*16+10*14+2*31+5*9+4*26+16
	int goldFish =0;
	int gruppies =0;
	int angelFish =0;
	int tigerFish =0;
	int fishAte = 0, currenBowl = 0;
	for (int i = 0; i < 35;i++) // to calculate number of fishes
	{
		fishleft = fishleft+ bowls[i];
		if (i < 6 || (i >= 22 && i < 30))
			goldFish = goldFish + bowls[i];
		else if (i >= 6 && i < 13)
			gruppies += bowls[i];
		else if (i >= 13 && i < 22)
			angelFish += bowls[i];
		else if (i >= 30 && i < 35)
			tigerFish += bowls[i];
	}
	//cout before eating

	for (int i = 0; i < 35;i++)
	{
		if (i < 6 || (i >= 22 && i < 30))
			cout << "Bowl# " << i + 1 << " Gold Fish: " << bowls[i] << endl;
		else if (i >= 6 && i < 13)
			cout << "Bowl# " << i + 1 << " Gruppies: " << bowls[i] << endl;
		else if (i >= 13 && i < 22)
			cout << "Bowl# " << i + 1 << " Angel Fish: " << bowls[i] << endl;
		else if (i >= 30 && i < 35)
			cout << "Bowl# " << i + 1 << " TigerFish: " << bowls[i] << endl;
	}
	cout << endl << endl;
	cout << "Before eating!" << endl;
	cout << "Total number of fishes: " << fishleft << endl;
	cout << "Gold Fish: " << goldFish << endl;
	cout << "Gruppies: " << gruppies << endl;
	cout << "Angel Fish: " << angelFish << endl;
	cout << "Tiger Fish: " << tigerFish << endl;
	cout << "\n\n";
	while (fishAte <= 361)
	{

		if (bowls[currenBowl] != 0) //if bowl is not empty
		{
			bowls[currenBowl] --; //decrement number of fish inside the bowl/ that means seal ate one fish
			//you have to find out what type of fish seal ate
			//we know that from bowl 0-5 && 22-
			if (currenBowl < 6 || (currenBowl >= 22 && currenBowl < 30))
			{
				cout << "Seal ate goldfish" << endl;
				bowls[currenBowl]--;

			}
			else if (currenBowl >= 6 && currenBowl < 13)
			{
				cout << "Seal ate gruppies" << endl;
				bowls[currenBowl]--;
			}
			else if (currenBowl >= 13 && currenBowl < 22)
			{
				cout << "Seal ate angelfish" << endl;
				bowls[currenBowl]--;
			}
			else if (currenBowl >= 30 && currenBowl < 35)
			{
				cout << "Seal ate tigerfish" << endl;
				bowls[currenBowl]--;
			}
			fishAte++;
			currenBowl += 4;
			if (currenBowl > 34)
			{
				currenBowl = currenBowl - 35;
			}
			//currenBowl = (currenBowl + 4) % 35;
		}
		else
		{
			currenBowl++;
		}
	}
	

	system("Pause");
	return 0;
}
