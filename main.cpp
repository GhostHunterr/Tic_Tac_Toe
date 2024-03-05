#include <iostream>
#include <vector>

using namespace std;

//Initializes the board.
void initializeBoard(vector<vector<char>> &board);

//Prints the content of the board.
void printBoard(const vector<vector<char>> &board);

//This function checks if a player has won or not.
bool results(vector<vector<char>> &board);

//This Function takes input, validates and stores it in our 2-D vector Board.
void gameInput(const int num, vector<vector<char>> &board);

int main()
{
    vector<vector<char>> board;
    initializeBoard(board);
    printBoard(board);
    for (int i = 0; i < 9 && results(board); i++)
    {
        gameInput((i % 2) + 1, board);
        printBoard(board);
    }

    return 0;
}

void initializeBoard(vector<vector<char>> &board)
{
    board = vector<vector<char>>(3, vector<char>(3, ' '));
}

void printBoard(const vector<vector<char>> &board)
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl
         << "---+---+---" << endl
         << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl
         << "---+---+---" << endl
         << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool results(vector<vector<char>> &board)
{

}

void gameInput(const int num, vector<vector<char>> &board)
{
    bool flag = true;
    string input;
    cout << "input in (x,y) format." << endl;
    cout << "Input the position for player " << num << ": ";
    do
    {
        flag = true;
        cin >> input;
        if (!(input[0] <= '2' && input[0] >= '0') || !(input[2] <= '2' && input[2] >= '0') || input[1] != ',')
        {
            flag = false;
            cout << "!!!Input is in wrong Format.!!!" << endl
                 << "Try again. " << endl
                 << ">> ";
        }
        else
        {
            int row = input[0] - '0';
            int column = input[2] - '0';
            if (board[row][column] != ' ')
            {
                flag = false;
                cout << "This cell is already Filled." << endl
                     << "Choose another one! " << endl
                     << ">> ";
            }
            else
            {
                board[row][column] = (num == 1 ? 'X' : 'O');
            }
        }
    } while (!flag);
}