#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;
public:
    void get() {
        cout << "Enter hours, minutes, seconds: ";
        cin >> hr >> min >> sec;
    }
    void display() {
        cout << hr << "h " << min << "m " << sec << "s" << endl;
    }
    friend Time add(Time, Time);
};

Time add(Time t1, Time t2) {
    Time temp;
    temp.sec = t1.sec + t2.sec;
    temp.min = t1.min + t2.min + temp.sec / 60;
    temp.sec %= 60;
    temp.hr = t1.hr + t2.hr + temp.min / 60;
    temp.min %= 60;
    return temp;
}

int main() {
    Time t1, t2, t3;
    cout << "Time 1:\n";
    t1.get();
    cout << "Time 2:\n";
    t2.get();
    t3 = add(t1, t2);
    cout << "Total Time: ";
    t3.display();
    return 0;
}