#include <iostream>
using namespace std;

class Money
{
    int rupees;

public:
    // Default constructor
    Money()
    {
        rupees = 0;
    }

    // Parameterized constructor
    Money(int r)
    {
        rupees = r;
    }

    // Operator overloading
    Money operator+(Money m)
    {
        Money temp;
        temp.rupees = rupees + m.rupees;
        return temp;
    }

    void display()
    {
        cout << "Total Money = Rs. " << rupees << endl;
    }
};

int main()
{
    int a, b;

    cout << "Enter first amount: ";
    cin >> a;

    cout << "Enter second amount: ";
    cin >> b;

    Money m1(a);       // Parameterized constructor
    Money m2(b);       // Parameterized constructor
    Money total;       // Default constructor

    total = m1 + m2;   // Overloaded + operator

    total.display();

    return 0;
}
