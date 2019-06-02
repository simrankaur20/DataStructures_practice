#include <iostream>
using namespace std;
#include <string>

class Student {
    public : 
        int rollNumber;
        int age;
        string name;

        
        // Default Constructor - to initialize properties of an object
        Student() {
            // rollNumber = 1;
            cout << "Constructor called ! " << endl;
        }

        // Parametrized constructor or user - defined constructor
        Student(int r) {
            rollNumber = r;
            cout << "Parametrized constructor called ! " << endl;
        }

        void printDetails() {
            cout << name << " " << rollNumber << " " << age << endl;
        }

        // Destructor
        ~Student() {
            cout << "Destructor called " << endl;
        }

};

int main() {
    Student s1;                 // s1.Student();
    Student *s2 = new Student();           // s2 -> Student();
    
    s1.name = "abc";
    s1.rollNumber = 101;
    s1.age = 20;

    s2 -> name = "def";
    s2 -> rollNumber = 102;
    s2 -> age = 25;


    delete s2;


    /*
    Studnet s3;
    s3 = s1;                
    s3 = *s2;

    Student *s4 = new Student;
    *s4 = s1;
    *s4 = *s2;

    */


    /*
    Student s3(s1);         // Copy constructor s3.Student(s1);
    s3.printDetails();
    */





    /*
    Student s4(*s2);
    Student *s5 = new Student(s1);      // s5 -> Student(s1);
    Student *s6 = new Student(*s2);     // s6 -> Student(*s2);
    */












    /*
    Student s1;                 // s1.Student();
    Student s2(101);            // s2.Student(101);

    Student *s3 = new Student();           // s3 -> Student();
    Student *s4 = new Student(105);     // s4 -> Student(105);
    
    s1.printDetails();
    s2.printDetails();
    s3 -> printDetails();
    s4 -> printDetails();
    */
    /*
    int a;
    Student s1;                     // s1.Student();
    // s1.Student();                   // invalid

    s1.printDetails();


    Student *s2 = new Student;     // s2 -> Student();
    s2 -> printDetails();
    */
    }






















/*
   class Student {
   int rollNumber;

   public :
   string name;
   int age;

   void printDetails() {
   cout << name << " " << rollNumber << " " << age << endl;
   }

   int getRollNumber() {
   return rollNumber;
   }

   void setRollNumber(int r, int password) {
   if(password != 123) {
   return;
   }
   if(rollNumber < 0) {
   return;
   }
   rollNumber = r;
   }


   };

   int main() {
   Student s1;
   Student *s3 = new Student;

// s1.rollNumber = 101;
cout << s1.getRollNumber() << endl;
s1.setRollNumber(-101, 134);
cout << s1.getRollNumber() << endl;




s1.name = "abc";
(*s3).name = "def";         // or s3 -> name = "def";

s1.printDetails();
s3 -> printDetails();       // or (*s3).printDetails();

    cout << s1.name << endl;


}



int main() {
    int a;
    double d;
    Student s1, s2;         // Objects

    // name = "def";           // invalid
    // s1 = "def";             // invalid


    s1.name = "abc";
 
    s1.rollNumber = 101;
    s1.age = 20;

    s2.name = "xyz";

    // Dynamic Allocation
    int *b = new int;
    Student *s3 = new Student;

    (*s3).rollNumber = 105;
    (*s3).age = 21;

    // Below both lines are same
    (*s3).name = "pqr";
    s3 -> name = "pqr";


    s1.printDetails();
    (s3).printDetails();
    s3 -> printDetails();
















}
*/
