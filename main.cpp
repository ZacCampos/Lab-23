/******************************************************************************
 *AUTHOR	 	: Farah Alfarah & Zac Campos
 *STUDENT ID	: 1035501       & 1058476
 *LAB #23		: Functions - Rock Paper Scissors
 *CLASS		    : CS1A
 *SECTION		: MW: 8AM
 *DUE DATE		: 4/16/18
*******************************************************************************/

#include "header.h"


/******************************************************************************
 * Functions - Rock Paper Scissors
 * --------------------------------------------------------------------------
 * This program will output the
 * --------------------------------------------------------------------------
 * INPUTS:
 *			name   : the player's name that user inputs
 *			roundPref  :	number rounds the player wants to play
 *			playerChoice : player choice of rock, paper, or scissors
 * OUTPUTS:
 *
 ******************************************************************************/

int main()
{
	/***********************************************************************
	 * CONSTANTS
	 * ---------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ---------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * NAB_NAME	  : Title of the Lab
	 * ----------------------------------------------------------------------
	 * PROCESSING - USED FOR SPACING
	 * ----------------------------------------------------------------------

	 * *********************************************************************/
	const char PROGRAMMER[]     = "Farah Alfarah & Zac Campos";
	const char CLASS[]	        = "CS1A";
	const char SECTION[]        = "MW: 8:00a - 11:50a";
	const int  LAB_NUM	        = 23;
	const char LAB_NAME[]	    = "Functions - Rock Paper Scissors";

	string name;       // IN  		- player's name
	int roundPref;     // IN & CALC - number of rounds in the match
	char playerChoice; // IN & CALC - player choice of rock, paper, or scissors



	// OUTPUT - Class Heading
	cout << left;
	cout << "*************************************************************\n";
	cout << "* PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "* "      << setw(14) << "CLASS"    << ": " << CLASS    << endl;
	cout << "* "      << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "* LAB #" << setw(9)  << LAB_NUM    << ": " << LAB_NAME << endl;
	cout << "***********************************************************\n\n";
	cout << right;

	/**************************************************************************
	 * INPUT - prompt user and read in two inputs to be added, multiplied,
	 * compared to find the largest, and averaged
	 *************************************************************************/
	GetInput(name, roundPref);
	GetAndCheckPlay(playerChoice);
	/**************************************************************************
	 * PROCESSING - Calls AddTwoInts which provides the sum, MultiplyTwoInts
	 * which provides the product, FindLargest to find the largest of the two
	 * integers, and AverageTwoInts to find the average
	 *************************************************************************/

	/**************************************************************************
	 * OUTPUTS - outputs the sum, product, largest, and average of the two
	 * integers
	 *************************************************************************/


	return 0;
}
