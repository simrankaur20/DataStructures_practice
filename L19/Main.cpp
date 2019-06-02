#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
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
    
}
