#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 0;
    }

    int binary[32]; 
    int i = 0;

    if (n == 0) {
        cout << "Binary equivalent: 0\n";
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;  
        n = n / 2;           
        i++;
    }

    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}