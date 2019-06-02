#include <iostream>
using namespace std;

// Time = O(n)
// Space = (n)
int fibo_2(int n) {
    int *output = new int[n + 1];

    output[0] = 0;
    output[1] = 1;

    for(int i = 2; i <= n; i++) {
        output[i] = output[i - 1] + output[i - 2];
    }

    return output[n];
}



















int fibo_1(int n, int *output) {
    if(n <= 1) {
        output[n] = n;
        return n;
    }

    // Check if final ans is already calculated
    if(output[n] != -1) {
        return output[n];
    }

    // Calculate the ans
    int x = fibo_1(n - 1, output);
    
    int y = fibo_1(n - 2, output);

    // Save your ans
    output[n] = x + y;

    return output[n];
}


// Using optimization
int fibo_1(int n) {
    int *output = new int[n + 1];
    for(int i = 0; i <= n; i++) {
        output[i] = -1;
    }

    return fibo_1(n, output);
}

// Simple recursive solution - Brute force
int fibo(int n) {
    if(n <= 1) {
        return n;
    }

    int x = fibo(n - 1);
    int y = fibo(n - 2);

    return x + y;
}

int main() {
    int n;
    cin >> n;

    cout << fibo(n) << endl;
}
