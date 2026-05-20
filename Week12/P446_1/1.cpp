#include <iostream>
#include <vector>

using namespace std;

class Point {
protected:
    int x;
    int y;

public:
    Point(int xx, int yy) : x(xx), y(yy) {}
    
    virtual ~Point() {}

    virtual void draw() {
        std::cout << x << "," << y << "에 점을 그려라.\n";
    }
};

class rectangle : public Point {
private:
    int width;
    int height;

public:
    rectangle(int xx, int yy, int w, int h) : Point(xx, yy), width(w), height(h) {}

    void draw() override {
        std::cout << x << "," << y << "에 " << width << "x" << height << " 크기의 사각형을 그려라.\n";
    }
};

int main() {
    Point* shape = new rectangle(2, 3, 100, 200);
    
    shape->draw();

    delete shape;
    return 0;
}