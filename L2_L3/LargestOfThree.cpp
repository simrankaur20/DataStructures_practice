#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;

    if(a >= b && a >= c) {
        cout << a << endl;
        return 0;               // To terminate the complete program
    }
    else {
        if(b >= a && b >= c) {
            cout << b << endl;
            return 0;
        }
        else {
            cout << c << endl;
            return 0;
        }
    }

}
