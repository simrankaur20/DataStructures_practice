#include <iostream>
using namespace std;

int sum(int, int);

int sum(int a, int b) {
    int z = a + b;

    return z;
}

int display(int);

int main() {
    int a, b;
    cin >> a >> b;          // 5

    a = display(a);
    cout << a << endl;


    /*

    int c = sum(a, b);


    cout << c << endl;
    */
}


int display(int a) {
    a++;
    cout << a << endl;
    return a;
}









