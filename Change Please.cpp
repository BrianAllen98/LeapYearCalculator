// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lab #6a – Change Please!
//written by Brian Allen
//prof. Nevins
//11/13/2018

#include "pch.h"
#include <iostream>
using namespace std;

int change(int value, int& hundreds, int &fifties, int & twenties, int &tens, int &fives, int & ones);//change func prototype


int main()
{
	
	int hundreds=0;
	int fifties;
	int twenties;
	int tens;
	int fives;
	int ones;
	int value;


	cout << "enter a sum of money" << endl;
	cin >> value;
	cout << "the number of bills is: " << change(value, hundreds, fifties, twenties, tens, fives, ones);
	cout << endl;
	cout << "hundreds: " << hundreds << " fifties: " << fifties << " twenties: " << twenties << " tens: " << tens << " ones: " << ones;
	return 0;

}
	

int change(int value, int& hundreds, int &fifties, int & twenties, int &tens, int &fives, int & ones)
{

	hundreds = value / 100;
	value=value % 100;
	fifties = value / 50;
	value = value % 50;
	twenties = value / 20;
	value = value % 20;
	tens = value / 10;
	value = value % 10;
	fives = value / 5;
	value = value % 5;
	ones = value / 1;
	

	return hundreds + fifties + twenties + tens + fives + ones;

	



}
