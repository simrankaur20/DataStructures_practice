template <typename T>
class Stack {
    T *data;
   // int *data = new int[100];
    int nextIndex;          // index of next element to be inserted
    int totalSize;          // Total size of array created

    public:
    Stack(int size = 5) {
        data = new T[size];
        nextIndex = 0;
        totalSize = size;
    }

    // Return size of stack i.e. no. of elements present in stack
    int getSize() {
        return nextIndex;
    }

    // Return true if stack is empty, else return false
    bool isEmpty() {
        // return !nextIndex;

        return nextIndex == 0;

        /*
        if(nextIndex == 0) {
            return true;
        }
        else {
            return false;
        }*/
    }

    void push(T element) {
        // Check if stack is full
        if(totalSize == nextIndex) {
            
            T *newData = new T[2 * totalSize];
            for(int i = 0; i < totalSize; i++) {
                newData[i] = data[i];
            }

            delete [] data;

            data = newData;
            totalSize *= 2;

            // cout << "Stack is full ! " << endl;
            // return;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // Read and return the top-most element
    T top() {
        // Check if stack is empty
        if(nextIndex == 0) {
            cout << "Stack is empty ! " << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }

    // Delete the top-most element and return the deleted element
    T pop() {
        // Check if stack is empty
        if(nextIndex == 0) {
            cout << "Stack is empty ! " << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }


};








