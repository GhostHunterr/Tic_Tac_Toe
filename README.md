# This is a Basic TicTacToe Game created in C++. 
This is a simple command-line Tic Tac Toe game implemented in C++. It allows two players to take turns marking spaces on a 3x3 grid, aiming to get three of their marks in a row, column, or diagonal.

## How to Play
1. Compile the source code using a C++ compiler.
2. Run the compiled executable.
3. Follow the on-screen prompts to input your moves.
4. The game will display the board after each move and announce the winner when a player wins or declare a draw if no winner is found.

## Game Rules
- Player 1 is represented by 'X', and Player 2 is represented by 'O'.
- Players take turns inputting their moves, which consist of specifying a row and column on the board.
- The game ends when one player achieves three of their marks in a row, column, or diagonal, or when all spaces on the board are filled with no winner (draw).

## Features
- Simple and intuitive command-line interface.
- Error handling for invalid inputs and already filled cells.
- Win detection for both players.
- Displays a message box using the Windows API to announce the winner or a draw.

## How to Compile and Run?
Use the following command to compile and then run the executable file.
```
g++ tictactoe.cpp -o tictactoe
```
