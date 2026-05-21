#include <iostream>
#include <iomanip>
#include "1.h"

using namespace std;

void MyTime::convert(double duration) 
{
    hours = static_cast<int>(duration) / 3600;
    int remaining = static_cast<int>(duration) % 3600;
    minutes = remaining / 60;
    seconds = (remaining % 60) + (duration - static_cast<int>(duration));
}

void MyTime::print() 
{
    cout << setfill('0') << setw(2) << hours << ":"
        << setw(2) << minutes << ":"
        << fixed << setprecision(3) << setw(6) << seconds << endl;
}

MyTime MyTime::add(MyTime t) 
{
    MyTime result;
    double totalSeconds = (this->hours * 3600 + this->minutes * 60 + this->seconds) +
                          (t.hours * 3600 + t.minutes * 60 + t.seconds);
    result.convert(totalSeconds);
    return result;
}

void MyTime::reset() { hours = 0; minutes = 0; seconds = 0.0; }

void MyTime::read() 
{
    cout << "시(h) 분(m) 초(s)를 순서대로 입력: ";
    cin >> hours >> minutes >> seconds;
}