#include <iostream>
using namespace std;

class Matrix {
private:
    int a[3][3], rows, cols;
public:
    void get() {
        cout << "Enter rows and cols (max 3x3): ";
        cin >> rows >> cols;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    friend Matrix add(Matrix, Matrix);
};

Matrix add(Matrix m1, Matrix m2) {
    Matrix temp;
    temp.rows = m1.rows;
    temp.cols = m1.cols;
    for (int i = 0; i < temp.rows; i++)
        for (int j = 0; j < temp.cols; j++)
            temp.a[i][j] = m1.a[i][j] + m2.a[i][j];
    return temp;
}

int main() {
    Matrix m1, m2, m3;
    cout << "Matrix 1:\n";
    m1.get();
    cout << "Matrix 2:\n";
    m2.get();
    m3 = add(m1, m2);
    cout << "Sum Matrix:\n";
    m3.display();
    return 0;
}