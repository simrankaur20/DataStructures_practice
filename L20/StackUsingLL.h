template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;

    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};


template <typename V>
class Stack {
    Node<V> *head;         // Address of top-most node
    int size;           // Number of elements present in stack currently


    public :
    Stack() {

    }

    // Return number of elements present in stack currently
    int getSize() {
        
    }

    bool isEmpty() {

    }

    void push(T elem) {
        // Create a new node
        // Node *newNode = new Node(elem);

        Node<T> *newNode = new Node<T>(elem);

        //Node *temp;
        Node<T> *temp;

        // Check if stack is empty - Update head & size accordingly
        // If stack is not empty
            // Connect new_node with head
            // Update head and size
    }

    int top() {
        // Check if stack is empty
        // Otherwise return element
    }

    int pop() {
        // Check if stack is empty
        // Otherwise, Update head, delete node and update size
        // Return the deleted element
    }
    






};
