#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:

    // Constructor
    Student()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // User-defined function
    float addMarks(float extra)
    {
        marks = marks + extra;
        return marks;
    }

    // Display function
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor called";
    }
};

int main()
{
    Student s;

    float extra;
    cout << "Enter extra marks: ";
    cin >> extra;

    s.addMarks(extra);
    s.display();

    return 0;
}
