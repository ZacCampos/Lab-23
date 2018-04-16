/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include "header.h"

char GetAndCheckPlay(char &playerChoice)
{
	bool invalid = false;

	cout << "**********************\n";
	cout << "** CHOOSE YOUR PLAY **\n";
	cout << "**********************\n";


	do
	{
		cout << "R - Rock\n";
		cout << "P - Paper\n";
		cout << "S - Scissors\n";

		cout << "Enter your play: ";
		cin.get(playerChoice);
		playerChoice = toupper(playerChoice);
		cin.ignore(1000, '\n');
		cout << endl;

		invalid = !(playerChoice == 'R'
				 || playerChoice == 'P'
				 || playerChoice == 'S');

		if(invalid)
		{
			cout << "** INVALID INPUT - Please Enter (R, P, or S) **";
			cout << endl << endl;
		}

	}while(invalid);

	return playerChoice;
}



