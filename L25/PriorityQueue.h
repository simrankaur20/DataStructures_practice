#include <vector>

template <typename T>
class PriorityQueue {
    vector<T> data;

    public :
    int size() {
        return data.size();
    }

    bool empty() {
        return data.size() == 0;
    }

    void insert(T element) {
        // Insert element at the end
        data.push_back(element);

        // Compare child and parent element
        // If parent < child - return
        // If parent > child - swap and repeat until parent becomes less than child
        int childIndex = data.size() - 1;

        while(childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if(data[parentIndex] < data[childIndex]) {
                return;
            }
            T temp = data[parentIndex];
            data[parentIndex] = data[childIndex];
            data[childIndex] = temp;

            childIndex = parentIndex;
        }
    }

    T removeMin() {
        // Save min element in some ans variable
        T ans = data[0];

        // Place last element at index 0
        data[0] = data[data.size() - 1];

        // Delete last element of vector
        data.pop_back();

        // Repeat - 
        // Compare parent with its left & right child
        // If parent is smallest, return ans
        // Else - swap parent with smallest element
        // New_Parent - smallest of left or child

        int parentIndex = 0;
        while(true) {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = leftChildIndex + 1;

            int minIndex = parentIndex;
            if(leftChildIndex < data.size() && data[leftChildIndex] < data[minIndex]) {
                minIndex = leftChildIndex;
            }

            if(rightChildIndex < data.size() && data[rightChildIndex] < data[minIndex]) {
                minIndex = rightChildIndex;
            }

            if(minIndex == parentIndex) {
                return ans;
            }

            T temp = data[minIndex];
            data[minIndex] = data[parentIndex];
            data[parentIndex] = temp;

            parentIndex = minIndex;
        }
    }
    return ans;

};




































