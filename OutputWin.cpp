/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include "header.h"

void OutputWin(const bool winner, const string name,
			   const char playerChoice, const char computerChoice,
			   int &roundsWon)
{
	cout << name << " chooses " << ChoiceConverter(playerChoice) << "!\n";
	cout << "Computer chooses " << ChoiceConverter(computerChoice) << "!\n\n";

	if(winner)
	{
		cout << name << " WINS!!";
		roundsWon ++;
	}
	else
	{
		cout << "Computer wins, better luck next time, " << name << "!";
	}

	cout << endl << endl << endl;
}
