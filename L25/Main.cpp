#include <iostream>
using namespace std;
#include <queue>


void inplaceHeapSort(int *input, int n) {
    // Step 1 : Create heap 
    // Insert elements in input array (as heap) - starting from index 1   
    int heapSize = 1;
    for(int i = 1; i < n; i++) {
        heapSize++;
        int childIndex = heapSize - 1;

        // Same while loop from insert function
    }

    // Step 2 - Pop elements from PQ

    heapSize = n;
    while(heapSize > 0) {
        // Swap 1st and last element of heap
        int temp = input[0];
        input[0] = input[heapSize - 1];
        input[heapSize - 1] = temp;

        heapSize--;

        // Copy while loop from RemoveMin fun
        int parentIndex = 0;
        while(true) {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = leftChildIndex + 1;

            int minIndex = parentIndex;
            if(leftChildIndex < heapSize && data[leftChildIndex] < data[minIndex]) {
                minIndex = leftChildIndex;
            }

            if(rightChildIndex < heapSize && data[rightChildIndex] < data[minIndex]) {
                minIndex = rightChildIndex;
            }

            if(minIndex == parentIndex) {
                //return ans;
                break;
            }

            T temp = data[minIndex];
            data[minIndex] = data[parentIndex];
            data[parentIndex] = temp;

            parentIndex = minIndex;
        }
    }
}

























vector<int> kSmallest(int *input, int n, int k) {
    // Put first k elements in PQ
    // Pick remaining elements one by one and compare with max element
    // If current < max, remove max, insert current
    // 
    // At the end, elements present in PQ is the output
}


int main() {
    // priority_queue<int> pq;         // Max priority queue

    priority_queue<int, vector<int>, greater<int> > pq;     // Min priority Queue

    pq.push(10);
    pq.push(4);
    pq.push(23);
    pq.push(11);
    pq.push(4);
    pq.push(3);

    cout << "Size : " << pq.size() << endl;
    cout << "Top-most element : " << pq.top() << endl;

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

}
