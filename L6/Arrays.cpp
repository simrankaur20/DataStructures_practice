#include <iostream>
using namespace std;

int increment(int a[], int n) {
    a[0]++;
    n++;
    cout << "Inc : " << a[0] << " " << n << endl;       // 7 6
}

void printArray(int a[], int size) {
    cout << "Fun : " << a << endl;
    cout << "Fun : " << sizeof(a) << endl;      // 8
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;

    int list[100];
    cout << "Main : " << list << endl;
    cout << "Main : " << sizeof(list) << endl;      // 400

    for(int i = 0; i < n; i++) {
        cin >> list[i];
    }

    printArray(list, n);

    
    







    /*
    int n = 5;

    int list[100];
 
    list[0] = 6;

    increment(list, n);

    cout << "Main : " << list[0] << " " << n << endl;   // 7 5
    */
}




