#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 3-digit number: ";
    cin >> n;


    int hundreds = n / 100;        
    int tens     = (n / 10) % 10;  
    int units    = n % 10;        

    int sum = hundreds + tens + units;

    cout << "Sum of digits = " << sum << endl;

    return 0;
}