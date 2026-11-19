
#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    float marks;

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Function to swap using reference
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap using pointer
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    cout << "STUDENT MARKS MANAGEMENT SYSTEM" << endl;

    // Swapping using reference
    cout << "\nEnter marks of two students: ";
    cin >> a >> b;

    cout << "Original marks: " << a << " " << b << endl;

    swapReference(a, b);

    cout << "After swapping using references: "
         << a << " " << b << endl;

    // Swapping using pointer
    swapPointer(&a, &b);

    cout << "After swapping using pointers: "
         << a << " " << b << endl;

    // Dynamic memory for single variable
    int *p = new int;

    cout << "\nEnter marks for dynamically allocated variable: ";
    cin >> *p;

    cout << "Dynamically allocated marks: " << *p << endl;

    delete p;

    // Dynamic memory for array
    int n;

    cout << "\nEnter number of students: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of students!" << endl;
        return 0;
    }

    int *arr = new int[n];

    int total = 0;
    int highest = 0;

    cout << "Enter marks of students: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> arr[i];

        if (arr[i] < 0 || arr[i] > 100)
        {
            cout << "Invalid marks! Enter marks between 0 and 100." << endl;
            delete[] arr;
            return 0;
        }

        total = total + arr[i];

        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }

    cout << "\n--- STUDENT RESULTS ---" << endl;

    cout << "Marks of students: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nTotal marks: " << total << endl;
    cout << "Average marks: " << (float)total / n << endl;
    cout << "Highest marks: " << highest << endl;

    delete[] arr;

    // Dynamic memory for Student object
    Student *s = new Student;

    cout << "\nEnter student roll number: ";
    cin >> s->rollNo;

    cout << "Enter student marks: ";
    cin >> s->marks;

    cout << "\n--- DYNAMIC STUDENT RECORD ---" << endl;

    s->display();

    delete s;

    cout << "\nDynamic memory released successfully." << endl;

    return 0;
}

