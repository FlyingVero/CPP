#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
static int MineMapMask[40][80];
static int MineMapLabel[40][80];

int main() {
    int rows, cols, mineCount;
    srand((unsigned int)time(NULL));
    cout << "맵 크기 입력 (세로 가로, 최대 40 80): ";
    cin >> rows >> cols;

    if (rows > 40) rows = 40;
    if (cols > 80) cols = 80;
    cout << "지뢰 개수 입력: ";
    cin >> mineCount;

    int placedMines = 0;
    while (placedMines < mineCount) {
        int r = rand() % rows;
        int c = rand() % cols;
        if (MineMapLabel[r][c] != -1) {
            MineMapLabel[r][c] = -1;
            placedMines++;
        }
    }

    cout << "\n[지뢰 찾기 맵]" << endl;
    cout << "   ";
    for (int j = 0; j < cols; j++) cout << setw(2) << j % 10;
    cout << "\n   " << string(cols * 2, '-') << endl;

    for (int i = 0; i < rows; i++) {
        cout << setw(2) << i << "|";
        for (int j = 0; j < cols; j++) {
            if (MineMapLabel[i][j] == -1) 
                cout << " *";
            else 
                cout << " .";
        }
        cout << endl;
    }

    return 0;
}