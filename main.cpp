#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void initializeBoard(vector<vector<char>> &board)
{
    board = vector<vector<char>>(3, vector<char>(3, ' '));
}

void printBoard(const vector<vector<char>> &board)
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl
         <<"---+---+---" << endl
         <<  " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl
         <<"---+---+---" << endl
         <<  " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}       

int main()
{
    vector<vector<char>> board;
    initializeBoard(board);
    printBoard(board);

    return 0;
}