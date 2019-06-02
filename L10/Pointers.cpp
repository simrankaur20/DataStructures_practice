#include <iostream>
using namespace std;

int main() {

    int *b;
    int c = (*b) + 100      // Accessing garbage location
    cout << c << endl;      // Garbage
    

    int *e = 0;
    int f = (*e) + 100;
    cout << f << endl;


    
    
    /*
    int a;
    
    int c = a * 2;
    cout << c << endl;      // Garbage
    

    int *d ;

    int e = (*d) + 100;
    cout << e << endl;
    */


    
   
   



    /*
    //  int *c = 15;        // Invalid

    cout << a << endl;
    cout << b << endl;
    */

    
    
    /*
    int a = 5;
    int *b;

    b = &a;





    int c = *b;

    a++;
   // (*b)++;

    // 6 6 5
    cout << a << " " << *b << " " << c << endl;
    */



    /*
    int *c = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout <<"&b = " << &b << endl;

    cout << "*b = " << *b << endl;

    a++;
    cout << "a = " << a << endl;
    cout << "*b = " << *b << endl;
    
    (*b)++;
    cout << "a = " << a << endl;
    cout << "*b = " << *b << endl;

    */


    // b = a;          // Invalid 
}
