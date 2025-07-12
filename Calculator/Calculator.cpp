#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Divide by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    cout << "Functional calculator:" << endl;
    cout << "3 + 2 = " << add(3, 2) << endl;
    cout << "5 - 1 = " << subtract(5, 1) << endl;
    cout << "4 * 2 = " << multiply(4, 2) << endl;
    cout << "10 / 2 = " << divide(10, 2) << endl;
    return 0;
}