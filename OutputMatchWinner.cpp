/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include "header.h"

void OutputMatchWinner(const string name, const float averageWins)
{
	cout << "***********************************\n";
	cout << "*********  FINAL RESULTS  *********\n";
	cout << "***********************************\n\n";

	cout << fixed << setprecision(2);

	if(averageWins > 50)
	{
		cout << name << " is the WINNER, WINNER, CHICKEN DINNER!!\n";
		cout << name << " won " << averageWins << "% of the time!";
	}
	else if(averageWins == 50)
	{
		cout << "It's a tie!! XD";
	}
	else
	{
		cout << "The user lost!!\n";
		cout << name << " lost " << (100 - averageWins) << "% of the time!";
	}
}
