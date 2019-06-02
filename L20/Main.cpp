#include <iostream>
using namespace std;
#include "Stack.h"

int main() {

    Stack<int> s1;
    Stack<char> s2;
    s2.push('a');
    s2.push('b');
    s2.push('c');
    s2.push('d');
    s2.push('e');
    s2.push('f');
    

    cout << s2.top() << endl;
    
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
