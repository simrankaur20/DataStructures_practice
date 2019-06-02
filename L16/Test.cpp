#include <iostream>
using namespace std;

int* fun1() {
    //int a = 10;
    //return &a;

    int *a = new int;
    *a = 10;
    return a;
}

int* returnArray() {
    int arr[10] = {1, 2, 3};
    return arr;

    int *arr2 = new int[10];

}

// a - return by reference
int& fun2() {
    int a = 99;
    return a;
}


int main() {
    int i;
    int a = 10;
    if(a > 5) {
        int b = 5;
        Student s1;
    }


























    
    /*
    // int &b = fun2.a;
    int &b = fun2();




    int i = 6;
    int &j = i;

    */














   

    /*
    int *b = fun1();
    cout << *b << endl;
    
    int i = 10;
    int *u;
    int *r;
    if(i > 5) {
        r = new int[5];   
        u = r;
    }

    u[0] = 1;
    u[1] = 2;
    */
    
    /*
    int a = 10;




    if(a > 5) {
        int b = 4;
    }

    if(a > 4) {
        int *b = new int;
    }
    */
}
