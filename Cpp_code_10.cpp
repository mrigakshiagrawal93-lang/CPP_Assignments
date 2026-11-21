#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b) {
        return a + b;
    }

    int product(int a, int b) {
        return a * b;
    }

    double product(double a, double b) {
        return a * b;
    }

    int maximum(int a, int b) {
        return (a > b) ? a : b;
    }

    double maximum(double a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Calculator obj;

    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\nInteger Operations" << endl;
    cout << "Sum = " << obj.sum(a, b) << endl;
    cout << "Product = " << obj.product(a, b) << endl;
    cout << "Maximum = " << obj.maximum(a, b) << endl;

    cout << "\nEnter two decimal numbers: ";
    cin >> x >> y;

    cout << "\nDecimal Operations" << endl;
    cout << "Sum = " << obj.sum(x, y) << endl;
    cout << "Product = " << obj.product(x, y) << endl;
    cout << "Maximum = " << obj.maximum(x, y) << endl;

    return 0;
}
