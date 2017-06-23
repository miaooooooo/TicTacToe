/*
work to be done

easy
	put on github or bitbucket
	disallow illegal moves
	output winner at end of game or tie
	reduce checks in end() from 17 to 4
	generalize TicTacToe from 3 to n, n=5 is wuziqi
		set this parameter inside constructor

medium
	add computer AI to play against
		Minimax algorithm
		Monte Carlo estimation
	add a user interface
	make internal state representation more efficient
		reduce representation size from 8 bytes to 3 bytes?
	generalize the interface for AI use
	implement other games for AI
	chess, go, 5 in a row (top down), checkers, generals.io
	what about other types of games with randomness? poker, blackjack ..
	simulate games, collect statistics for AI battles
	javascript o_o
	rewrite in Haskell or other functional programming language (OCaml, Scala...)

hard 
	online multiplayer
	machine learning algorithm
	use CUDA or threads to parallelize
	use formal verification tools and techniques
*/
class TicTacToe {
private:
	char board[3][3];
	void printBoard();
	void placeMove(int coord1, char value);
	bool end();
public:
	TicTacToe(int a);
	void playGame();
};
