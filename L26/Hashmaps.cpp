#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>

// Find out code for every node and add in hashmap
void helper(BinaryTreeNode<int> *root, unordered_map<int, vector<int>> &m, int code = 0) {
    // Base case
    // Insert entry for root in hashmap
    // Call recursion on left and right
}

// Print vectors from hashmap
void printVerticalOrder(BinaryTreeNode<int> *root) {
    unordered_map<int, vector<int>> m;
    helper(root, m);


    // Traverse the hashmap and print every vector in new line

    
}






void fun(int *input, int n) {
    unordered_map<int, bool> m;

    for(int i = 0; i < n; i++) {
        int key = input[i];
    
        if(m.count(key) == 0) {
            m[key] = 1;
        }
        else {
            m[key]++;
        }
    }

}

vector<int> removeDuplicates(int *input, int n) {
    // Create hashmap
    unordered_map<int, bool> m;

    for(int i = 0; i < n; i++) {
        int key = input[i];
        m[key] = true;
    }

    // Put elements in vector
    vector<int> output;

    for(int i = 0; i < n; i++) {
        int key = input[i];
        if(m.count(key) == 1) {
            output.push_back(key);
            m.erase(key);
        }
    }
    return ouptut;

}


int main() {
    unordered_map<string, int> m;
    
    int a[10];
    a[0] = 1;
    a[0] = 9;

    m["abc"] = 10;
    m["abc"] = 8;

    m["def"] = 7;
    m["xyz"] = 5;
    m["gh"] = 5;

    // Size
    cout << "Size : " << m.size() << endl;      // 4

    // To check if any particular key is present or not
    if(m.count("def") == 1) {
        cout << "Present " << endl;
    }
    else {
        cout << "Not present " << endl;
    }

    // Access value present at any particular key
    cout << m["gh"] << endl;
    cout << a[0] << endl;

    // Remove any entry
    m.erase("def");

    if(m.count("def") == 1) {
        cout << "Present " << endl;
    }
    else {
        cout << "Not present " << endl;
    }

}














