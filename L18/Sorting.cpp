
int partitionArray(int input[], int start, int end) {
    // Pick first element of the array - input[start] (pivot)
    // Count number of elements which are smaller than pivot & save in some variable count
    // Swap input[start] & input[start + count]
    // Arrange smaller element at the left and grater elements at right of pivot
    // return correct index of pivot i.e. start + count
}


void quickSort(int input[], int start, int end) {
    // Base case
    if(start >= end) {
        return;
    }

    int k = partitionArray(input, start, end);   

    quickSort(input, start, k - 1);
    quickSort(input, k + 1, end);
}

void quickSort(int input[], int size) {
    quickSort(input, 0, size - 1);
}



