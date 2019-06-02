#include <iostream>
using namespace std;
#include "TreeNode.h"
#include <queue>

void printLevelWise(TreeNode<int> *root) {
    cout << root -> data << " ";

    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode<int> *current = q.front();
        q.pop();
        for(int i = 0; i < current -> children.size(); i++) {
            cout << current -> children[i] -> data << " ";
            q.push(current -> children[i]);
        }
    }
    cout << endl;

}





















// Pre-order
void printRec(TreeNode<int> *root) {
    cout << root -> data << " ";
    for(int i = 0; i < root -> children.size(); i++) {
        TreeNode<int> *temp = root -> children[i];
        printRec(temp);
    }
}


void print(TreeNode<int> *root) {
    // Print details of root 
    cout << root -> data << " : ";
    for(int i = 0; i < root -> children.size(); i++) {
        cout << root -> children[i] -> data << ", ";
    }
    cout << endl;

    // Call recursion to print remaining tree nodes
    for(int i = 0; i < root -> children.size(); i++) {
        TreeNode<int> *temp = root -> children[i];
        print(temp);
    }
}




















int countNode(TreeNode<int> *root) {
    int count = 0;
    for(int i = 0; i < root -> children.size(); i++) {
        TreeNode<int> *temp = root -> children[i];
        count += countNode(temp);
    }
    return count + 1;
}

// Take elements input from user, create tree and return root
TreeNode<int>* takeInput() {
    // Data of root node
    int elem;
    cout << "Enter elem : " << endl;
    cin >> elem;

    TreeNode<int> *root = new TreeNode<int>(elem);

    // No. of children of root
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        TreeNode<int> *temp = takeInput();
        root -> children.push_back(temp);
    }
    return root;
}

int main() {
    TreeNode<int> *root = takeInput();   
    cout << "Recursive print : ";
    printRec(root);
    cout << "LevelWise print : ";
    printLevelWise(root);

    cout << "Recursive Tree Structure : " << endl;
    print(root);
}
