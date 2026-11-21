#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero is not allowed!";
        }

        cout << "Division = " << a / b << endl;
    }
    catch (const char* message)
    {
        cout << "Exception caught: " << message << endl;
    }

    cout << "Program continues normally." << endl;

    return 0;
}
