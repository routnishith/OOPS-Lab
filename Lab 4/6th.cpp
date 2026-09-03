#include <iostream>
using namespace std;

class Demo {
private:
    int a, b;
public:
    Demo() {
        a = 0; b = 0;
        cout << "Default constructor called\n";
    }
    Demo(int x) {
        a = x; b = 0;
        cout << "One-arg constructor called\n";
    }
    Demo(int x, int y) {
        a = x; b = y;
        cout << "Two-arg constructor called\n";
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Demo d1;        
    Demo d2(10);    
    Demo d3(5, 7);  
    d1.display();
    d2.display();
    d3.display();
    return 0;
}