#include <iostream>
using namespace std;

void largestRowCol(int input[][1000], int row, int col) {
    int row_Sum[1000] = {0};
    int col_sum[1000] = {0};

    // Find sum of every row and save in row_Sum
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum = sum + input[i][j];
        }
        row_Sum[i] = sum;
    }

    // Find sum of every column and save in col_sum
    // Find max of row_Sum and save in max1
    // Find max of col_sum and save in max2
    // Compare max1 and max2 and print accordingly
}



// row = 2, col = 3
void display(int y[][50], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }
    // y + (i * C + j) * 4
}



int main() {
    
    int a[] = {1, 2, 3};
    int b[3] = {1, 2, 3};
    int c[10] = {1, 2, 3};

    int d[][2] = {{1, 2}, {3, 4}};
    int e[][4] = {{1, 2}, {3, 4}};
    int f[5][4] = {{1, 2}, {3}};
    int g[10][10] = {{}};

    /*
    int b[50][50];          // R = 50, C = 50

    int row, col;               // row = 2, col = 3
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> b[i][j];
        }
    }
    display(b, row, col);
    */









}
