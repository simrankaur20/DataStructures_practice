#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    int c[10] = {1, 2, 3};
    int d[100] = {0};
    int f[100] = {};
    int e[100] = {1};

    int g[3] = {1, 2, 3, 4};            // Error
    int h[3];

    cin >> h[4];                // Logically incorerctm but no error


    int input[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int x;
    cin >> x;

    int y = 10;
}
