#include <iostream>
using namespace std;
#include "Trees.cpp"


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
}
