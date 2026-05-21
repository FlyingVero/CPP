#include <iostream>
#include <fstream>

void loadGame(int board[4][4], int& moveCount, double& startTime)
{
    ifstream inFile("save.txt");
    if(inFile.is_open())
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++) inFile >> board[i][j];
        }
        inFile >> moveCount >> startTime;
        inFile.close();
        cout << "이전 게임을 불러왔습니다.\n";
    }
}