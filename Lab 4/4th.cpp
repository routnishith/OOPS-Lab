#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;
public:
    Fibonacci() {
        n = 0;
    }
    void input() {
        cout << "Enter number of terms: ";
        cin >> n;
    }
    void generate() {
        int a = 0, b = 1, next;
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; i++) {
            if (i <= 1)
                next = i;
            else {
                next = a + b;
                a = b;
                b = next;
            }
            cout << next << " ";
        }
        cout << endl;
    }
};

int main() {
    Fibonacci f; 
    f.input();
    f.generate();
    return 0;
}