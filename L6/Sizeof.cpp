#include <iostream>
using namespace std;

int main() {
    int a;
    double d;
    float f;
    char c;
    bool b;
    int arr[10];

    cout << sizeof(a) << endl;      // 4
    cout << sizeof(d) << endl;      // 8
    cout << sizeof(f) << endl;      // 4
    cout << sizeof(c) << endl;      // 1
    cout << sizeof(b) << endl;      // 1
    cout << sizeof(arr) << endl;      // 40

    cout << sizeof(int) << endl;

}
