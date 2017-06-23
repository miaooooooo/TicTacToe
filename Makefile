a: main.cpp TicTacToe.o
	g++ -o main main.cpp TicTacToe.o
TicTacToe.o: TicTacToe.h TicTacToe.cpp
	g++ -c TicTacToe.cpp
run:
	./main
clean:
	rm -rf main TicTacToe.o
