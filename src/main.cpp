#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(const vector<vector<char>>& board){
    // loop through rows 
    for (int i = 0; i < 3; i++){
        // loop through each column in row
        cout << " ";
        for(int j = 0; j < 3; j++){
            // prints the cell at each row and column
            cout << board[i][j];
            if (j < 2){
                cout << " | ";
            }
        }
    cout << endl;
    if (i < 2){
        cout << "---+---+---" << endl;
    }
    }
}

void makeMove(vector<vector<char>>& board, int playerRow, int playerCol, char symbol){
    if (board[playerRow][playerCol] != ' '){
        cout << "Move is invalid" << endl;
    }
    else{
        board[playerRow][playerCol] = symbol;
    }
}

int getValidInput(string prompt){
    int value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.fail()) {
            cout << "Invalid input, try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            break;
        }
    }
    return value;
}

int main() {
    cout << "Hello, tic-tac-toe!" << endl;
    cout << "Player 1 choose between X or O: "<< endl;
    char player1Symbol;
    cin >> player1Symbol;

    char player2Symbol;
    if(player1Symbol == 'X'){
        player2Symbol = 'O';
    }
    else{
        player2Symbol = 'X';
    }

    vector<char> row(3, ' '); // template row 
    vector<vector<char>> board(3,row); // template columns 


    for(int move = 0; move < 9; move++){

        if(move % 2 == 0){
            cout << "Player 1 makes a move: " << endl;
            int playerRow = getValidInput("Enter row:");

            int playerCol = getValidInput("Enter column:");
            makeMove(board, playerRow, playerCol, player1Symbol);
            printBoard(board);
        }
        else{
            cout << "Player 2 makes a move:" << endl;
            int playerRow = getValidInput("Enter row:");

            int playerCol = getValidInput("Enter column:");
            makeMove(board, playerRow, playerCol, player2Symbol);
            printBoard(board);
        }
    }
    return 0;
}
