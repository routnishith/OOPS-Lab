#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    void get() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
    void display() {
        cout << real << " + i" << imag << endl;
    }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    cout << "Complex Number 1:\n";
    c1.get();
    cout << "Complex Number 2:\n";
    c2.get();
    c3 = add(c1, c2);
    cout << "Sum: ";
    c3.display();
    return 0;
}