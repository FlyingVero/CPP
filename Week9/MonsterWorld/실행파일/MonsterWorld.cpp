#include "MonsterWorld.h"
#include <ctime>
#include <cstdio>

Monster::Monster(std::string name, std::string icon, int x, int y) {
    this->name = name;
    this->icon = icon;
    this->x = x;
    this->y = y;
}

MonsterWorld::MonsterWorld(int w, int h) {
}

void MonsterWorld::add(Monster m) {
    monsters.push_back(new Monster(m));
}

void MonsterWorld::play(int waitTime, int nCycles) {
    for (int i = 0; i < nCycles; i++) {
        for (auto m : monsters) {
            m->move(rand() % 3 - 1, rand() % 3 - 1);
            m->draw();
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int w = 16, h = 8;

    MonsterWorld game(w, h);

    Monster m("몬스터", "※", rand() % w, rand() % h);
    game.add(m);
    game.add(Monster("도깨비", "§", rand() % w, rand() % h));
    game.add(Monster("별그대", "★", rand() % w, rand() % h));
    game.add(Monster("고스트", "♥", rand() % w, rand() % h));

    game.play(500, 10);
    printf("게임 종료\n");  

    return 0;
}