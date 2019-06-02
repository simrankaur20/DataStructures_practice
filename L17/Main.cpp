#include <iostream>
using namespace std;
#include "Student.cpp"


int main() {
    int a;
    Student s1;             // Default constructor called

    Student s2(s1);         // Copy constructor called
    // s2.Student(s1)

    Student s3 = s1;        // Student s3(s1);  Copy constructor called
    // Student s3;
    // s3 = s1;
}
