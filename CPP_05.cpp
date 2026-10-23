#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollNo;
    string name;
    float marks;
    static int count;

public:
    Student()
    {
        rollNo = 0;
        name = "";
        marks = 0;
    }

    void setData(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
        count++;
    }

    inline void display()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    static void showCount()
    {
        cout << "\nTotal Students: " << count << endl;
    }

    friend class Result;
};

int Student::count = 0;

class Result
{
public:
    void showMarks(Student s)
    {
        cout << "Marks accessed by friend class: "
             << s.marks << endl;
    }
};

int main()
{
    int n, rollNo;
    string name;
    float marks;

    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students!" << endl;
        return 0;
    }

    Student* s = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;

        s[i].setData(rollNo, name, marks);
    }

    cout << "\n--- Student Details ---" << endl;

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    Student::showCount();

    Result r;
    cout << "\n--- Friend Class Access ---" << endl;
    r.showMarks(s[0]);

    delete[] s;

    return 0;
}

