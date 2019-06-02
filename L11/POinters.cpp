#include <iostream>
using namespace std;

void printArray(int input[], int n) {
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    cout << endl;
}

void display(int a, int *c, int *b) {
    a++;
    (*c)++;
    (*b)++;
    c++;
    (*c)++;
}


void test(int b[]) {

}

int main() {
    int a = 5;

    int b[5] = {10, 20, 30, 40, 50};

    char d[] = "hello";
    char *f = "hello";  // valid

    int *c = &a;
   // int *e = &5;        // invalid
   // int *g = 6;         // invalid
  //  char *t = d;        // valid

    int *r = b;         // valid



    
    /*
    b++;                                // invalid
    c++;                                // valid


    test(b+1);
    b = b + 1;                      // invalid

    b = &a;                         // invalid

    int *f = b + 1;                 // valid

    int *d = b;
    */


















    /*
    test(b);




    cout << "c : " << c << endl;
    cout << "&c : " << &c << endl; 

    cout << "b : " << b << endl;
    cout << "&b : " << &b << endl;
    cout << "&b[0] : " << &b[0] << endl;
    */





    /*
    char d[] = "hello";

    cout << "b : " << b << endl;        // 100
    cout << "d : " << d << endl;        // hello
    cout << "*d : " << *d << endl;      // h

    cout << c << endl;                  // 270

    char p = 'A';
    char *ptr = &p;

    cout << "ptr : " << ptr << endl;                // AGarbage
    cout << "*ptr : " << *ptr << endl;          // A
    */


















    /*

    display(a, c, b);

    cout << a << " "  << *c << " " << b[0] << endl;
    */








    /*
    cout << c[0] << endl;   // *(c+0) = 5
    cout << c[1] << endl;   // *(c+1) = garbage
    cout << *b << endl;
    cout << *(b+1) << endl; 
    */









    /*
    printArray(b, 5);
    printArray(b+1, 4);
    printArray(b+2, 3);
    printArray(b, 3);
    */





    /*
    cout << *b << endl;                 // b[0]
    cout << *(b+1) << endl;             // b[1]
    cout << *(b+2) << endl;             // b[2]
    cout << *(2+b) << endl;             // b[2]
    cout << "2[b] : " << 2[b] << endl;
    */


    /*
    int a = 5, b = 10;

    (&a)++;         // Invalid
    
    int *c = &a, *d = &b;

    c++;            // Valid
    */



    /*



    if(c > d) {
        cout << *c << endl;
    }
    else {
        cout << *d << endl;
    }
    */
    


    /*
    double a = 5.1;
    double *b = &a;

    cout << "b = " << b << endl;
    b++;
    cout << "b = " << b << endl;
    
    // cout << *b << endl;             // Garbage

    b--;
    cout << "b = " << b << endl;
    */
}
