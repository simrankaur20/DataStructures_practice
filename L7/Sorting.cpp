#include <iostream>
using namespace std;

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
