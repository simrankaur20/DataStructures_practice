#include <iostream>
using namespace std;

void insertionSort(int input[], int size) {
    for(int i = 1; i < n; i++) {
        // i represents current element which needs to be inserted at its correct index
        int j;
        for(j = i - 1; j >= 0; j--) {
            if(input[i] > input[j]) {
                break;
            }
        }

        // k represents correct index for i
        int k = j + 1;

        // Shift elements from index k to i-1
        int temp = input[i];
        for(j = i - 1; j >= k; j--) {
            input[j + 1] = input[j];
        }

        // Insert ith element at its correct index
        input[k] = temp;
    }
}

void selectionSort(int input[], int n) {
    // j represents 1st element of array or starting point of array
    for(int j = 0; j < n; j++) {
        // Find min element of complete array
        int min = input[j];
        int minIndex = j;
        for(int i = j+1; i < n; i++) {
            if(input[i] < min) {
                min = input[i];
                minIndex = i;
            }
        }

        // Swap min with 1st element
        int temp = input[j];
        input[j] = input[minIndex];
        input[minIndex] = temp;
    }
}


int main() {

}
