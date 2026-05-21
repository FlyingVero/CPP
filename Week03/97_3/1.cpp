#include <iostream>
using namespace std;

int main()
{
    int n;
    double x = 0;

    cin >> n;

    for(int i = 1; i <= 2 * n + 1; i += 4)
        x += 1.0 / i;

    for(int i = 3; i <= 2 * n + 1; i += 4)
        x -= 1.0 / i;
    
    cout << 4 * x << endl;

    return 0;
}