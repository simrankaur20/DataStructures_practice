#include <iostream>
using namespace std;

int main() {
    
    int P, R, T;
    /*cin >> P;
    cin >> R;
    cin >> T;
    */

    cin >> P >> R >> T;


    /*
    int P = 7;
    int R = 5;
    int T = 1;
    */

    /*
    double SI_1 = (P * R * T ) / 100;       // 0
    int SI_2 = (P * R * T ) / 100;          // 0
    int SI_3 = (P * R * T ) / 100.0;        // 0
    double SI_4 = (P * R * T ) / 100.0;     // 0.35
    */

    double SI = (P * R * T) / 100.0;
    cout << SI << endl;
}



