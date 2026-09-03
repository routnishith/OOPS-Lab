#include <iostream>
using namespace std;

class ArraySum {
private:
    int arr[100], size;
public:
    ArraySum(int s) {
        size = s;
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    friend int sumArray(ArraySum* ptr);
};

int sumArray(ArraySum* ptr) {
    int total = 0;
    for (int i = 0; i < ptr->size; i++)
        total += ptr->arr[i];
    return total;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    ArraySum* obj = new ArraySum(n); 
    int total = sumArray(obj);       
    cout << "Sum of array elements = " << total << endl;
    delete obj;
    return 0;
}