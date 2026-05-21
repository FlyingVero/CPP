#include <iostream>

void printArtBoard(int board[4][4])
{
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
        {
            if(board[i][j] == 0) cout << "  ";
            else cout << (char)(board[i][j] + 64) << " ";
        }
        cout << endl;
    }
}