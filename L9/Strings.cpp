#include <iostream>
using namespace std;

void printAllSubstrings(char input[]) {
    int s = 0;
    for(int e = 0; e <= 3; e++) {
        // print one substring starting from s till e
        for(int i = s; i <= e; i++) {
            cout << input[i];
        }
        cout << endl;
    }

    
    /*
    // ab
    int s = 0;
    int e = 1;
    for(int i = s; i <= e; i++) {
        cout << input[i];
    }
    cout << endl;

    // abc
    int s = 0;
    int e = 2;
    for(int i = s; i <= e; i++) {
        cout << input[i];
    }
    cout << endl;

    // abcd
    int s = 0;
    int e = 3;
    for(int i = s; i <= e; i++) {
        cout << input[i];
    }
    cout << endl;
    */

}

void display(int x[], int n, char y[]) {
    if(3) {
        cout << "hello";
    }
    else {
        cout << "hey";
    }
}

int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int main() {
    int a[10] = {1, 2, 3, 4};
    char b[] = "hello";

    cout << sizeof(a) << endl;      // 40
    cout << sizeof(b) << endl;      // 6


    display(a, 4, b);




    /*
       int a[] = {1, 2, 3, 4};
       char b[] = "abcd";          // length =  5



       char c[] = {'a', 'b', 'c', 'd'};    // length = 4

       char d[10] = "abc";
       cout << d << endl;          




       char input[100];

       for(int i = 0; i < 4; i++) {
       cin >> input[i];
       }

       cin >> input;       // abc           

       input[3] = 'd';
       input[4] = '\0';
       */
    /*
       int a[10] = {1, 2, 3};
       cout << "a : " << a << endl;
       char b[100];
       for(int i = 0; i < 10; i++) {
       cout << b[i] << "-";
       }
    cout << endl;
    cin >> b;       // hello
    cout << "b : " << b << endl;
    //b[3] = '\0';
    b[5] = 'o';
    cout << "b : " << b << endl;
    */
}
