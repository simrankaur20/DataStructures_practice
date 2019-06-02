#include <iostream>
using namespace std;
#include <string>

class Student {
    public : 
        int rollNumber;
        int age;
        string name;


        // Copy constructor
        // Student s3(s1)
        // this will hold the address of s3 and s1 will be copied in s
        Student(Student const &s) {
            cout << "Copy Constructor called " << endl;
            this -> rollNumber = s.rollNumber;
            this -> age = s.age;
            name = s.name;

            // s.rollNumber = -1;     // Invalid
        }
        
        // Default Constructor - to initialize properties of an object
        Student() {
            // rollNumber = 1;
            cout << "Constructor called ! " << endl;
        }

        // Parametrized constructor or user - defined constructor
        Student(int rollNumber) {
            this -> rollNumber = rollNumber;
            cout << "Parametrized constructor called ! " << endl;
        }

        // Parametrized 2
        Student(int r, int a) {
            cout << "Constructor : " << this << endl;
            rollNumber = r;
            age = a;
        }

        void printDetails() {
            cout << "printDetails : " << this << endl;
            cout << name << " " << this -> rollNumber << " " << this -> age << endl;
        }

        // Destructor
        ~Student() {
            cout << "Destructor called " << endl;
        }

};

