#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int rollNo;

    void getPersonDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Student : public Person
{
};


class Academic
{
public:
    int academicMarks;

    void getAcademicMarks()
    {
        cout << "Enter academic marks: ";
        cin >> academicMarks;
    }
};

class Sports
{
public:
    int sportsMarks;

    void getSportsMarks()
    {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }
};

class Result : public Academic, public Sports
{
public:
    void displayTotal()
    {
        cout << "Total Marks: "
             << academicMarks + sportsMarks << endl;
    }
};


class Grandparent
{
public:
    void showGrandparent()
    {
        cout << "Grandparent class" << endl;
    }
};

class Parent : public Grandparent
{
public:
    void showParent()
    {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void showChild()
    {
        cout << "Child class" << endl;
    }
};


class Animal
{
public:
    void eat()
    {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};


class HybridPerson
{
public:
    void showPerson()
    {
        cout << "Person details" << endl;
    }
};

class CollegeStudent : virtual public HybridPerson
{
public:
    void study()
    {
        cout << "Student studies" << endl;
    }
};

class Employee : virtual public HybridPerson
{
public:
    void work()
    {
        cout << "Employee works" << endl;
    }
};

class TeachingAssistant : public CollegeStudent, public Employee
{
};


int main()
{

    cout << "\n--- SINGLE INHERITANCE ---" << endl;

    Student s;

    s.getPersonDetails();
    s.displayPersonDetails();


    // -----------------------------------------
    // MULTIPLE INHERITANCE
    // -----------------------------------------
    cout << "\n--- MULTIPLE INHERITANCE ---" << endl;

    Result r;

    r.getAcademicMarks();
    r.getSportsMarks();
    r.displayTotal();

    cout << "\n--- MULTILEVEL INHERITANCE ---" << endl;

    Child c;

    c.showGrandparent();
    c.showParent();
    c.showChild();


    // -----------------------------------------
    // HIERARCHICAL INHERITANCE
    // -----------------------------------------
    cout << "\n--- HIERARCHICAL INHERITANCE ---" << endl;

    Dog d;
    Cat cat;

    d.eat();
    d.bark();

    cat.eat();
    cat.meow();

    cout << "\n--- HYBRID INHERITANCE ---" << endl;

    TeachingAssistant ta;

    cout << "Enter teaching assistant name: ";
    string name;
    cin >> name;

    cout << "Name: " << name << endl;

    ta.study();
    ta.work();


    return 0;
}
