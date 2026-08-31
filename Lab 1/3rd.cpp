#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    long long sum = 0;  

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum from 1 to " << n << " is: " << sum << endl;

    return 0;
}