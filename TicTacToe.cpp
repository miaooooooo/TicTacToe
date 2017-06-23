#include <iostream>
#include <map>
#include <string>
#include "TicTacToe.h"

using namespace std;
void TicTacToe::printBoard() {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (board[i][j] == 'X' || board[i][j] == 'O')
				cout << board[i][j] << " | ";
			else
				cout << " " << " | ";
		}
		cout << "\n";
	}
}
void TicTacToe::placeMove(int coord1, char value) {
	--coord1;
	board[coord1 / 3][coord1 % 3] = value;
}

bool TicTacToe::end() {
	// tie
	bool over = true;
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			if (!(board[i][j] == 'X' || board[i][j] == 'O')) {
				over = false;
				break;
			}
	if (over)
		return true;
	// check if someone has won
	// check rows

	if ((board[0][0] == 'X' || board[0][0] == 'O') && 
			board[0][0] == board[0][1] && board[0][1] == board[0][2])
		return true;
	if ((board[1][0] == 'X' || board[1][0] == 'O') && 
			board[1][0] == board[1][1] && board[1][1] == board[1][2])
		return true;
	if ((board[2][0] == 'X' || board[2][0] == 'O') && 
			board[2][0] == board[2][1] && board[2][1] == board[2][2])
		return true;
	// check cols
	if ((board[0][0] == 'X' || board[0][0] == 'O') && 
			board[0][0] == board[1][0] && board[1][0] == board[2][0])
		return true;
	if ((board[0][1] == 'X' || board[0][1] == 'O') && 
			board[0][1] == board[1][1] && board[1][1] == board[2][1])
		return true;
	if ((board[0][2] == 'X' || board[0][2] == 'O') && 
			board[0][2] == board[1][2] && board[1][2] == board[2][2])
		return true;
	// check diags
	if ((board[0][0] == 'X' || board[0][0] == 'O') && 
			board[0][0] == board[1][1] && board[1][1] == board[2][2])
		return true;
	if ((board[2][0] == 'X' || board[2][0] == 'O') && 
			board[2][0] == board[1][1] && board[1][1] == board[0][2])
		return true;
	return false;
}

TicTacToe::TicTacToe(int a)
{

}
void TicTacToe::playGame() {
	char s = 'X';
	int c1,c2;
	printBoard();
	while (1) {
		cout << "coord: ";
		cin >> c1;
		placeMove(c1,s);
		if (s == 'X')
			s = 'O';
		else
			s = 'X';
		printBoard();
		if (end())
			break;
	}
}
