#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(const vector<vector<char>>& board){
    // loop through rows 
    for (int i = 0; i < 3; i++){
        // loop through each column in row
        for(int j = 0; j < 3; j++){
            // prints the cell at each row and column
            cout << board[i][j];
            if (j < 2){
                cout << '|';
            }
        }
    cout << endl;
    if (i < 2){
        cout << "------" << endl;
    }
    }
}

int main() {
    cout << "Hello, tic-tac-toe!" << endl;

    vector<char> row(3, ' '); // template row 
    vector<vector<char>> board(3,row); // template columns 

    printBoard(board);
    return 0;
}

void printBoard(){
    // loop through rows 
    // loop through columns 
    // print each cell, with some specator between columns 
    // print a line between rows ( "like ---")
}