#include <iostream>
using namespace std;

void fun3(int a) {
    cout << "Fun3 : " << a << endl;
}

void fun2(int a) {
    a++;
    fun3(a);
    cout << "Fun2 : " << a << endl;
}

void fun1(int a) {
    a++;
    fun2(a);
    cout << "Fun1 : " << a << endl;
}

int main() {
    int a = 10;

    fun1(a);

    cout << "Main : " << a << endl;
}







