#include <iostream>
#include "1.h"

using namespace std;

int main() 
{
    MyDic myDic;

    myDic.add("hello.", "안녕하세요.");
    myDic.add("thank_you.", "감사합니다.");
    myDic.add("im_sorry.", "미안합니다.");

    myDic.store("dic.txt");

    MyDic newDic;
    newDic.load("dic.txt");
    
    newDic.print();

    return 0;
}