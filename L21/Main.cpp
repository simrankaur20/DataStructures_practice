#include <iostream>
using namespace std;
//#include "Stack.h"
//#include "Queue.h"
#include <queue>
#include <stack>

int main() {
    stack<int> s1;
    queue<int> q1;


    s1.push(10);
    cout << s1.top();

    
    
    /*
    Queue<int> q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);

    cout << "Size : " << q1.getSize() << endl;      // 5
    cout << "Front : " << q1.front() << endl;       // 10

    while(!q1.isEmpty()) {
        cout << q1.dequeue() << endl;
    }
    
    
    */
    /*
    Stack<int> s1;
    Stack<char> s2;
    s2.push('a');
    s2.push('b');
    s2.push('c');
    s2.push('d');
    s2.push('e');
    s2.push('f');
    

    cout << s2.top() << endl;
    */
    /*
    Stack s1, s2, s3;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    cout << "Size : " << s1.getSize() << endl;      // 5
    cout << "Top : " << s1.top() << endl;           // 50
    cout << "Pop : " << s1.pop() << endl;           // 50
    cout << "Pop : " << s1.pop() << endl;           // 40
    cout << "Pop : " << s1.pop() << endl;           // 30
    */
}
