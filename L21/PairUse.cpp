#include <iostream>
using namespace std;
#include "Pair.h"

Pair<int, double> fun() {
    
}

Pair<int, int> fun2(Pair<int, int> p) {

}




int main() {

    Pair<int, double> p1;
    Pair<int, int> p2;
    Pair<char, double> p3;


    /*
    Pair<int> p1;
    Pair<double> p2;
    Pair<char> p3;
    */


    cout << p1.getFirst() << " " << p1.getSecond() << endl;
    cout << p2.getFirst() << " " << p2.getSecond() << endl;
    cout << p3.getFirst() << " " << p3.getSecond() << endl;
}
