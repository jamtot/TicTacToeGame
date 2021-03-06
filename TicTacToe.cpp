/*	*** Tic Tac Toe ***
	A command line version of Tic Tac Toe.
*/
//currently empty project
#include <iostream>
#include <vector>
#include <string>

#include "Player.h"
#include "Board.h"

using namespace std;
int main()
{
	int players = 0;
	cout << "*** Tic Tac Toe ***" << endl;
	cout << "How many players do we have (2-4)? ";
	while ( (players < 2) || (players > 4) ) {
		cin >> players;
	}
	cout << "There will be " << players << " players in this game." << endl;
	//create the players

	vector<Player*> gamePlayers;
	vector<Player*>::iterator playerIt;
	//take in names and what each players symbol will be and set

	for (int i = 0; i < players; i++)
	{
		cout << "Setting up new player." << endl;
		string name;
		char symbol;
		cout << "What is your name? ";
		cin >> name;
		cout << "What do you want your symbol to be, " << name << "? ";
		cin >> symbol;
		gamePlayers.push_back(new Player(symbol, name));
	}
	cout << "Okay, so our players are set up, now for the playing field." << endl;

	int rows,columns,inARow;
	cout << "How many rows do you want (maximum of 9, minimum of 3 for two players, 4 for more) ?";
	do {cin >> rows;}while(rows < 3 && rows > 9);
	if (players > 2){// if there are more than two players 3x3 will be too cramped
		if (rows < 4) {
			cout << "Uh-oh, not enough rows. Let me fix that for you."<<endl;
			rows = 4;
		}
	}

	cout << "There will be " << rows << " rows. How many columns do you want (same as rows, min of 3 for 2 players, 4 for more, and max of 9 columns) ?";
	do {cin >> columns;}while(columns < 3 && columns > 9);
	if (players > 2){// if there are more than two players 3x3 will be too cramped
		if (columns < 4) {
			cout << "Uh-oh, not enough columns. Let me fix that for you."<<endl;
			columns = 4;
		}
	}

	//set the maximum amount needed to the smaller of the two
	int maxWin = (rows<columns) ? rows : columns;
	cout << "There will be " << columns << " columns. How many does a player need in a row to win (must not be more than the board will allow (" << maxWin << "), or less than 3) ?" ;

	do { cin >> inARow; } while ( (inARow < 3) || (inARow > maxWin) );
	cout << "You will need " << inARow << " to win the game." << endl;

	Board board(rows,columns,inARow);
	board.PrintBoard();

	playerIt = gamePlayers.begin();
	
	bool gameOn = true;
	while (gameOn)
	{

		playerIt++;
		if ( playerIt == gamePlayers.end() )
			playerIt = gamePlayers.begin();
		break;
	}

	//start game, players go in order, or add a random generator to decide order.

	//players chose a spot to place their symbol, it is placed onto the board

	//after x goes, start checking for wins. x is the amount needed in a row.

	//repeat goes until a win, or all positions are used, resulting in a tie

	cout << "Congratulations to *WINNERNAME*! You beat out *LOSERPLAYERS* and took the gold." << endl;

	return 0;
}
