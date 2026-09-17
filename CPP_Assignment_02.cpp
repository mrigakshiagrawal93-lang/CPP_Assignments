#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:

    // Default Constructor
    Student()
    {
        roll = 0;
        name = "Unknown";
        marks = 0;
    }

    // Parameterized Constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    // Member Function to display student details
    void display()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }

    // Member Function to calculate grade
    void calculateGrade()
    {
        if (marks >= 90)
            cout << "Grade: A";
        else if (marks >= 75)
            cout << "Grade: B";
        else if (marks >= 60)
            cout << "Grade: C";
        else if (marks >= 40)
            cout << "Grade: D";
        else
            cout << "Grade: F";
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor called.";
    }
};

int main()
{
    int roll;
    string name;
    float marks;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    // Parameterized constructor
    Student s1(roll, name, marks);

    cout << "\n--- Student 1 Details ---";
    s1.display();
    s1.calculateGrade();

    // Copy constructor
    Student s2(s1);

    cout << "\n\n--- Student 2 (Copied) Details ---";
    s2.display();
    s2.calculateGrade();

    return 0;
}
