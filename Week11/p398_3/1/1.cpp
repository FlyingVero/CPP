#include <iostream>
#include <string>
using namespace std;

class Monster {
    string name;
    string icon;
    int x, y;
    int nItem;
    int nEnergy;

public:
    Monster(string n = "도깨비", string i = "§", int px = 0, int py = 0)
    {
        name = n;
        icon = i;
        x = px;
        y = py;
        nItem = 0;
        nEnergy = 100;
    }

    void eat(int food)
    {
        nEnergy += food;
        nItem++;
    }

    void move()
    {
        nEnergy--;
    }

    void print()
    {
        cout << name
            << " 위치(" << x << "," << y << ") "
            << "아이템:" << nItem
            << " 에너지:" << nEnergy << endl;
    }
};

int main()
{
    Monster m("고스트", "♥", 2, 3);

    m.move();
    m.eat(10);
    m.print();

    return 0;
}