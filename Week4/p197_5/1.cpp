#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int n, bullets, players;
    srand(time(0));

    cout << "총구수, 총알수, 인원수 입력: ";
    cin >> n >> bullets >> players;

    int chamber[100] = {0};

    for (int i = 0; i < bullets; i++)
    {
        int pos = rand() % n;
        if (chamber[pos] == 0) chamber[pos] = 1;
        else i--;
    }
    
    int fired = 0, turn = 0;
    while(fired < bullets)
    {
        int p_num = (turn % players) + 1;
        cout << p_num << "번 차례: ";

        if (chamber[turn] == 1)
        {
            cout << "뒤짐ㅋㅋ" << endl;
            fired++;
        }
        else
        {
            cout << "살았음ㅋㅋ" << endl;
        }

        turn++;
        if (turn >= n) break;
    }
    cout << "ㅈㅈ" << endl;
    return 0;
}