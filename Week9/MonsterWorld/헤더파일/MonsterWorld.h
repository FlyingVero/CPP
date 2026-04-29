#ifndef MONSTER_WORLD_H
#define MONSTER_WORLD_H
#include "Monster.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

class MonsterWorld {
    std::vector<Monster*> monsters;

public:
    MonsterWorld(int w, int h);
    void add(Monster m);
    void play(int waitTime, int nCycles);

    ~MonsterWorld() {
        for (auto m : monsters) {
            delete m; 
        }
        monsters.clear();
    }

    void addMonster(std::string name, std::string icon, int x, int y) {
        monsters.push_back(new Monster(name, icon, x, y));
    }

    void play() {
        std::cout << "--- 몬스터 월드 실행 ---\n";
        for (auto m : monsters) {
            m->move(rand() % 3 - 1, rand() % 3 - 1); 
            m->draw();
        }
    }
};

#endif