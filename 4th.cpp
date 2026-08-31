#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    int original = num; 

    do {
        digit = num % 10;          
        reversed = reversed * 10 + digit;  
        num /= 10;                 
    } while (num != 0);

    cout << "Reversed number: " << reversed << endl;

    return 0;
}