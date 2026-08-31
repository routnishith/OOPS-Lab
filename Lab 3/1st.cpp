#include <iostream>
#include <string>
using namespace std;

int main() {
    int empNo;
    string empCode;
    string empDesignation;
    int yearsOfExperience;
    int age;

    cout << "Enter Employee Number: ";
    cin >> empNo;

    cout << "Enter Employee Code: ";
    cin >> empCode;

    cout << "Enter Employee Designation: ";
    cin.ignore(); 
    getline(cin, empDesignation);

    cout << "Enter Years of Experience: ";
    cin >> yearsOfExperience;

    cout << "Enter Age: ";
    cin >> age;

    cout << "\n--- Employee Information ---\n";
    cout << "Employee Number      : " << empNo << endl;
    cout << "Employee Code        : " << empCode << endl;
    cout << "Employee Designation : " << empDesignation << endl;
    cout << "Years of Experience  : " << yearsOfExperience << endl;
    cout << "Age                  : " << age << endl;

    return 0;
}