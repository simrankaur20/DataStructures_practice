#include <iostream>
using namespace std;

/*
void display(int a, int *b, int c) {
    a++;
    (*b)++;
    c++;
}
*/


// int x = Main.a;
// int &y = Main.f;
void display(int x, int &y, int *b) {
    cout << "&y : " << &y << endl;
    x++;
    y++;
    int f = 199;
    f++;
}

void test(int a, int &f, int *b, int c) {
    a++;
    f++;
    (*b)++;
    c++;
}

int main() {
    int a = 10;
    int f = 20;
    int *b = &a;
   
    int &c = f;

    test(a, f, b, c);

    cout << a << " " << f << " " << *b << " " << c << endl;



    /*
    a++;
    f++;
    c++;
    (*b)++;
    */






    /*
    cout << "&f : " << &f << endl;
    display(a, f, b);
    cout << a << " " << f << endl;
    */

    /*
    int &c = a;

    int *b = &a;


    display(a, &a, c);
    cout << a << endl;
    cout << c << endl;
    */









    /*
    cout << "&a : " << &a << endl;
    cout << "&c : " << &c << endl;

    c++;
    cout << a << endl;
    */


    
    /*
    int *b = &a;
    cout << "b : " << b << endl;
    b++;
    cout << "b : " << b << endl;

    int **c = &b;
    cout << "c : " << c << endl;
    (*c)++;
    cout << "c : " << c << endl;
    cout << "b : " << b << endl;

    c++;
    cout << "c : " << c << endl;
    */
}
