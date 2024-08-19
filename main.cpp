#include <iostream>

using namespace std;

char board[9];
char player1Marker = 'X';
char player2Marker = 'O';

void initializeBoard() {
    fill(board, board+9, ' ');
}

void drawBoard(char board[]) {
    cout << "       |       |       " << endl;
    cout << "   " << board[0] << "   |   " << board[1] << "   |   " << board[2] << "   " << endl;
    cout << "_______|_______|_______" << endl;

    cout << "       |       |       " << endl;
    cout << "   " << board[3] << "   |   " << board[4] << "   |   " << board[5] << "   " << endl;
    cout << "_______|_______|_______" << endl;

    cout << "       |       |       " << endl;
    cout << "   " << board[6] << "   |   " << board[7] << "   |   " << board[8] << "   " << endl;
    cout << "       |       |       " << endl << endl;    
}

void player1Move() {
    short int position;
    bool invalidFlag = false;
    do {
        cout << "Enter position to place your marker: ";
        cin >> position;
        if(position > 9 || position < 1) {
            invalidFlag = true;
            cout << "Please enter a valid position (1-9).\n";
            continue;
        }
        else if(board[position-1] != ' ') {
            invalidFlag = true;
            cout << "That position is already marked!\n";
            continue;
        }
        else {
            board[position-1] = player1Marker;
            invalidFlag = false;
        }
    } while(invalidFlag);



}

int main() {
    initializeBoard();
    drawBoard(board);
    player1Move();
    drawBoard(board);
    player1Move();
    drawBoard(board);
}