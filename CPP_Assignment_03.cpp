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

    // Operator overloading (+)
    Money operator+(Money m)
    {
        Money temp;
        temp.rupees = rupees + m.rupees;
        return temp;
    }

    // Display function
    void display()
    {
        cout << "Total Money = Rs. " << rupees << endl;
    }
};

int main()
{
    Money m1;          // Default constructor
    Money m2(500);     // Parameterized constructor
    Money m3(1000);    // Parameterized constructor

    Money total = m2 + m3;   // + operator overloaded

    total.display();

    return 0;
}
