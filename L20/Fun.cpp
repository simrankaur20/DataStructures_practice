#include <iostream>
using namespace std;

class Pair {
    public :
    int min;
    int max;
};

class PairDouble {
    public :
        double min;
        double max;
};

PairDouble minMaxDouble(double input[], int n) {
    
}

minMax(float input[], int n) {

}


Pair minMax(int input[], int n) {
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(input[i] < min) {
            min = input[i];
        }

        if(input[i] > max) {
            max = input[i];
        }
    }

    Pair p;
    p.min = min;
    p.max = max;
    return p;
}


int main() {
    int input[] = {4, 1, 2, 9, 0, 6};
    Pair ans = minMax(input, 6);
    cout << ans.min << " " << ans.max << endl;
}







