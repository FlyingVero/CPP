#include <iostream>
#include <string>
using namespace std;

class Complex {
public:
    double real, imag;
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    void print(string label) const {
        cout << label << ": " << real << " + " << imag << "i" << endl;
    }

    // [방식 3] 멤버 함수 void
    void add_member_void(const Complex& b) {
        real += b.real;
        imag += b.imag;
    }

    // [방식 4] 멤버 함수 return
    Complex add_member_return(const Complex& b) const {
        // 2. this real -> this->real (화살표 필요)
        return Complex(this->real + b.real, this->imag + b.imag);
    }

    // [방식 5] 연산자 오버로딩
    Complex operator+(const Complex& b) const {
        return Complex(this->real + b.real, this->imag + b.imag);
    }
};

// [방식 1] 일반 함수 void
void add_global_void(const Complex& a, const Complex& b, Complex& c) {
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
}

// [방식 2] 일반 함수 return
Complex add_global_return(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

int main() {
    Complex a(1, 2), b(3, 4);
    Complex c;

    cout << "--- 5가지 방식 구현 및 검증 (a=1+2i, b=3+4i) ---" << endl << endl;

    add_global_void(a, b, c);
    c.print("1. 일반 함수 void");

    c = add_global_return(a, b);
    c.print("2. 일반 함수 return");

    Complex a_temp = a; 
    a_temp.add_member_void(b);
    a_temp.print("3. 멤버 함수 void");

    c = a.add_member_return(b);
    c.print("4. 멤버 함수 return");

    c = a + b;
    c.print("5. 연산자 오버로딩");

    return 0;
}