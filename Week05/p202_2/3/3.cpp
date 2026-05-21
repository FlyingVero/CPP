#include <iostream>

using namespace std;

void checkMap(int map[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        if(map[i][0] == map[i][1] && map[i][1] == map[i][2] && map[i][2] == map[i][3] && map[i][3] == map[i][4]) 
            {
                cout << "가로 " << i + 1 << "행 일치 (값: " << map[i][0] << ")" << endl;
            }
        }
        for(int j = 0; j < 5; j++) 
        {
            if (map[0][j] == map[1][j] && map[1][j] == map[2][j] && map[2][j] == map[3][j] && map[3][j] == map[4][j]) 
            {
            cout << "세로 " << j + 1 << "열 일치 (값: " << map[0][j] << ")" << endl;
            }
    }
}

int main()
{
    int map[5][5] = {
        {1, 0, 0, 1, 1},
        {0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1}, 
        {0, 1, 0, 1, 0},
        {1, 0, 1, 0, 0}
    };

    checkMap(map);

    return 0;
}