#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int units[] = { (num / 10000) % 10, (num / 1000) % 10, (num / 100) % 10, (num / 10) % 10, num % 10};
    string labels[] = { "만", "천", "백", "십", ""};

    for(int i = 0; i < 5; i++)
    {
        if(units[i] != 0)
        {
            cout << units[i] << labels[i] << " ";
        }
    }
    cout << endl;

    return 0;
}