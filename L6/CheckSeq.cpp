#include <iostream>
using namespace std;

int trailing0s(int n) {
    int count = 0;

    int i = 1;
    while(i <= n) {
        int p = 5;

        while(p <= i) {
            if(i % p == 0) {
                count++;
            }
            else {
                break;
            }
            p *= 5;
        }
        i++;
    }
    return count;
}




int main() {
    int n;
    cin >> n;

    if(n <= 1) {
        cout << "true" << endl;
        return 0;
    }

    int a, b;
    cin >> a >> b;

    int count = 2;
    bool isDecAllowed = true;

    while(count <= n) {
        if(b < a) {
            if(isDecAllowed == true) {
                // Everything is fine
            }
            else {
                cout << "false";
                return 0;
            }
        }
        else if(b > a) {
            isDecAllowed = false;
        }
        else {
            cout << "false";
            return 0;
        }

        a = b;
        cin >> b;
        count++;

    }
    cout << "true" << endl;   

}







