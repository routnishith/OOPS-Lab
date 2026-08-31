#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    int* rev = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        rev[i] = arr[n - 1 - i];
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; ++i) {
        cout << rev[i] << " ";
    }
    cout << endl;

    delete[] arr;
    delete[] rev;

    return 0;
}