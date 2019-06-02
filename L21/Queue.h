template <typename T>
class Queue {
    T *data;
    int nextIndex;          // index for next element to be added in queue
    int frontIndex;         // Index of first element present in queue
    int size;               // No. of elements present in Queue currently
    int totalSize;          // Total elements can be saved in queue

    public :
    Queue(int s = 5) {
        data = new T[s];
        nextIndex = 0;
        frontIndex = -1;
        size = 0;
        totalSize = s;
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(T element) {
        if(size == totalSize) {
            
            T *temp = new T[2 * totalSize];
            int j = 0;
            for(int i = frontIndex; i < size; i++) {
                temp[j++] = data[i];
            }

            for(int i = 0; i < frontIndex; i++) {
                temp[j++] = data[i];
            }

            delete [] data;
            data = temp;
            totalSize *= 2;

            frontIndex = 0;
            nextIndex = size;
            
            /*
            cout << "Queue is full ! " << endl;
            return;
            */
        }
        data[nextIndex] = element;
        
        if(frontIndex == -1) {
            frontIndex = 0;
        }

        /*if(size == 0) {
            frontIndex = 0;
        }*/
        size++;
        nextIndex = (nextIndex + 1) % totalSize;
    }

    T front() {
        if(size == 0) {
            cout << "Queue is empty ! " << endl;
            return 0;
        }
        return data[frontIndex];
    }

    T dequeue() {
        if(size == 0) {
            cout << "Queue is empty ! " << endl;
            return 0;
        }
        T ans = data[frontIndex];
        size--;
        frontIndex = (frontIndex + 1) % totalSize;
        /*
        if(size == 0) {
            frontIndex = -1;
            nextIndex = 0;
        }*/
        return ans;
    }












};
