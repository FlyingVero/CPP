#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void displayBoard(const vector<vector<int>>& board, int size)
{
    cout << "\n-------------------\n";
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(board[i][j] == 0) cout << setw(4) << " ";
            else cout << setw(4) << board[i][j];
        }
        cout << endl;
    }
    cout << "-------------------\n";
}

int main()
{
    int size;
    cout << "퍼즐 크기를 입력하세요 (예: 4): ";
    cin >> size;

    vector<vector<int>> board(size, vector<int>(size));
    displayBoard(board, size);
    
    return 0;
}