#ifndef MYTIME_H
#define MYTIME_H

class MyTime 
{
private:
    int hours;
    int minutes;
    double seconds;

public:
    MyTime() : hours(0), minutes(0), seconds(0.0) {}

    void convert(double duration);
    void print();
    MyTime add(MyTime t);
    void reset();
    void read();
};

#endif