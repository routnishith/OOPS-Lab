#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

void reverseNumberRef(int n, int &rev) {
    rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "Reversed number (using return): " << reversed << endl;

    int reversedRef;
    reverseNumberRef(num, reversedRef);
    cout << "Reversed number (using call by reference): " << reversedRef << endl;

    return 0;
}