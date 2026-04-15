#ifndef MYDIC_H
#define MYDIC_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAXWORDS = 100;

struct WordPair {
    string eng;
    string kor;
};

class MyDic {
    WordPair words[MAXWORDS];
    int nWords;

public:
    MyDic() : nWords(0) {}

    void add(string eng, string kor) {
        if (nWords < MAXWORDS) {
            words[nWords].eng = eng;
            words[nWords].kor = kor;
            nWords++;
        }
    }

    void load(string filename) {
        ifstream fin(filename);
        if (!fin) return;
        nWords = 0;
        while (nWords < MAXWORDS && fin >> words[nWords].eng >> words[nWords].kor) {
            nWords++;
        }
        fin.close();
    }

    void store(string filename) {
        ofstream fout(filename);
        for (int i = 0; i < nWords; i++) {
            fout << words[i].eng << " " << words[i].kor << endl;
        }
        fout.close();
    }

    void print() {
        for (int i = 0; i < nWords; i++) {
            cout << i << ". " << left << setw(10) << words[i].eng << " : " << words[i].kor << endl;
        }
    }

    string getEng(int id) {
        return (id >= 0 && id < nWords) ? words[id].eng : "";
    }

    string getKor(int id) {
        return (id >= 0 && id < nWords) ? words[id].kor : "";
    }
};

#endif