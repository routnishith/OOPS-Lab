#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    if (n < 0) {
        cout << n << " is not a palindrome." << endl;
        return 0;
    }

    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}