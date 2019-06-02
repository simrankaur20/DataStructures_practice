#include <iostream>
using namespace std;
#include "TreeNode.h"
#include <queue>

constructTree(int in[], int pre[], int inS, int inE, int preS, int preE) {
    // 0. Base case - 
    if(inS > inE || preS > preE) {
        return NULL;
    }
    // 1. Take first element of pre and make it root
    // 2. Search root->data in inOrder array and save its index in x
    // 3. Call recursion for left subtree
    // 4. Call recursion for right subtree
    // 5. Connect root with left and right
    // 6. Return root
}
























int diameter(BinaryTreeNode<int> *root) {
    // Base case
    if(root == NULL) {
        return 0;
    }

    int d1 = diameter(root -> left);
    int d2 = diameter(root -> right);

    int d3 = height(root -> left) + height(root -> right) + 1;

    return max(d1, max(d2, d3));
}
























int height(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return 0;
    }

    int x = height(root -> left);
    int y = height(root -> right);

    return max(x, y) + 1;
}


void levelWise(BinaryTreeNode<int> *root) {
    // 1. Create queue - q
    // 2. Push root
    // 3. Run a loop
        // a. Pop element from q and save in current
        // b. Print current -> data
        // c. Check its left child
            // NULL - print -1
            // not NULL - print its data, push in q
        // d. Same for right child
}























void printLevelWise(TreeNode<int> *root) {
    //cout << root -> data << " ";

    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode<int> *current = q.front();
        q.pop();
        
        cout << current -> data << ":";

        for(int i = 0; i < current -> children.size(); i++) {
            cout << current -> children[i] -> data;
            if(i < current -> children.size()-1) {
                cout << ",";
            }
            q.push(current -> children[i]);
        }
        cout << endl;
    }
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
