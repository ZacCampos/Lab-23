/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include "header.h"

string ChoiceConverter(const char characterChoice)
{
	string stringChoice;

	switch(characterChoice)
	{
		case 'R':
			stringChoice = "ROCK";
		break;

		case 'P':
			stringChoice = "PAPER";
		break;

		case 'S':
			stringChoice = "SCISSORS";
		break;
	}

	return stringChoice;
}
