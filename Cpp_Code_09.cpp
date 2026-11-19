
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    // Parameterized constructor
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    // Move constructor
    Student(Student &&s)
    {
        name = move(s.name);
        rollNo = s.rollNo;

        cout << "Move Constructor Called" << endl;
    }

    // Display function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    // Creating first object
    Student s1("Sharyu", 101);

    cout << "Before Move Operation:" << endl;
    s1.display();

    // Creating second object using move constructor
    Student s2(move(s1));

    cout << "\nAfter Move Operation:" << endl;

    cout << "\nStudent 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}

