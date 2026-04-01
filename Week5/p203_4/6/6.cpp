#include <iostream>
#include <fstream>

struct RankEntry
{
    char name[10];
    int moves;
    double time;
};

void saveRanking(RankEntry rankings[10])
{
    ofstream outFile("ranking.bin", ios::binary);
    if (outFile.is_open()) {
        outFile.write((char*)rankings, sizeof(RankEntry) * 10);
        outFile.close();
    }
}

int main()
{
    RankEntry top10[10];
    return 0;
}