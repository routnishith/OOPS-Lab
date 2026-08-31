#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int empCode;
    int yearsOfExperience;
    double basicPay;

public:
    void readDetails() {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee code: ";
        cin >> empCode;

        cout << "Enter years of experience: ";
        cin >> yearsOfExperience;

        cout << "Enter basic pay: ";
        cin >> basicPay;

        cin.ignore(); 
    }

    void displayDetails() const {
        cout << "\n--- Employee Details ---\n";
        cout << "Name               : " << name << endl;
        cout << "Employee Code      : " << empCode << endl;
        cout << "Years of Experience: " << yearsOfExperience << endl;
        cout << "Basic Pay          : " << basicPay << endl;
    }
};

int main() {
    Employee emp;

    emp.readDetails();

    emp.displayDetails();

    return 0;
}