#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
private:
    int num;
public:
    Armstrong(int n) {
        num = n;
    }
    Armstrong(Armstrong &obj) {
        num = obj.num;
    }
    void check() {
        int original = num, sum = 0, digits = 0, temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = original;
        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if (sum == original)
            cout << original << " is an Armstrong number.\n";
        else
            cout << original << " is NOT an Armstrong number.\n";
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Armstrong a1(n);
    Armstrong a2 = a1; 
    a2.check();
    return 0;
}