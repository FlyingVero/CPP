#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomMap(int map[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            map[i][j] = rand() % 2;
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    int map[5][5];
    randomMap(map);
    
    return 0;
}