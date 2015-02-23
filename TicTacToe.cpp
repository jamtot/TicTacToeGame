/*	*** Tic Tac Toe *** 
	A command line version of Tic Tac Toe.
*/
//currently empty project
#include <iostream>
#include "Player.h"
#include "Board.h"

using namespace std;
int main()
{
	int players = -1;
	cout << "*** Tic Tac Toe ***" << endl;
	cout << "How many players do we have (1-4)? ";
	while (players > 0 && players < 5) { 
		cin >> players; 
	}
	//create the players
	
	//take in names and what each players symbol will be and set

	if (players > 2){
	}
	//take in board size, and amount in a row to win, and create, if greater than 2, board must be 4x4 or larger

	//start game, players go in order, or add a random generator to decide order.
	

	//players chose a spot to place their symbol, it is placed onto the board

	//after x goes, start checking for wins. x is the amount needed in a row.

	//repeat goes until a win

	cout << "Congratulations to *WINNERNAME*! You beat out *LOSERPLAYERS* and took the gold." << endl;

	return 0;
}
