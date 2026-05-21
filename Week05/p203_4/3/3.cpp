#include <iostream>
#include <fstream>

void saveGame(int board[4][4], int moveCount, double playTime) {
    ofstream outFile("save.txt");
    if(outFile.is_open())
    {
        for(int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++) outFile << board[i][j] << " ";
        }
        outFile << "\n" << moveCount << " " << playTime;
        outFile.close();
        cout << "게임이 안전하게 저장되었습니다.\n";
    }
}