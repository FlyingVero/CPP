#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <string>

class Monster {
    std::string name;
    std::string icon;
    int x, y;

public:
    Monster(std::string name, std::string icon, int x, int y);

    void move(int dx, int dy) {
        x += dx;
        y += dy;
        std::cout << name << "가(" << x << ", " << y << ")로 이동했습니다." << std::endl;
    }

    void draw() {
        std::cout << name << " 위치: [" << x << ", " << y << "]\n";
    }
};
#endif