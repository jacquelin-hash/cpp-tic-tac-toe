#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkWin(const vector<vector<char>>& board, char symbol){
    for(int i = 0; i < 3; i++){
        if (board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol){
            return true;
        }
    }
    for(int j = 0; j < 3; j++){
        if(board[0][j] == symbol && board[1][j] == symbol && board[2][j] == symbol){
            return true;
        }
    }
    if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol){
        return true;
    }
    if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol){
        return true;
    }
    return false;
}


void printBoard(const vector<vector<char>>& board){
    // loop through rows 
    for(int i = 0; i < 3; i++){
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
    if(board[playerRow][playerCol] != ' '){
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
        if(cin.fail()) {
            cout << "Invalid input, try again." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            break;
        }
    }
    return value;
}

class Board {
    private:
        vector<vector<char>> board;
    public:
        Board(){
            vector<char> row(3, ' '); // template row 
            board = vector<vector<char>>(3,row); // template columns
        }
};


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

    Board gameBoard;
    bool gameOver = false;

    for(int move = 0; move < 9; move++){

        if(move % 2 == 0){
            cout << "Player 1 makes a move: " << endl;
            int playerRow = getValidInput("Enter row:");

            int playerCol = getValidInput("Enter column:");
            makeMove(board, playerRow, playerCol, player1Symbol);
            printBoard(board);
            if(checkWin(board,player1Symbol)){
                gameOver = true;
                cout << "Player1 Wins!";
                break;
            }
        }
        else{
            cout << "Player 2 makes a move:" << endl;
            int playerRow = getValidInput("Enter row:");

            int playerCol = getValidInput("Enter column:");
            makeMove(board, playerRow, playerCol, player2Symbol);
            printBoard(board);
            if(checkWin(board,player2Symbol)){
                gameOver = true;
                cout << "Player2 Wins!";
                break;
            }
        }
    }
    if(gameOver == false){
        cout << "It is a draw!";
    }
    return 0;
}