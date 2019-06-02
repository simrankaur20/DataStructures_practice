
class Pair {
    public:
    int height;
    int diameter;
}

Pair diameterBetter(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        Pair ans;
        ans.height = 0;
        ans.diameter = 0;
        return ans;
    }

    Pair leftAns = diameterBetter(root -> left);
    Pair rightAns = diameterBetter(root -> right);

    int d1 = leftAns.diameter;
    int d2 = rightAns.diameter;
    int d3 = leftAns.height + rightAns.height + 1;

    Pair ans;
    ans.diameter = max(d1, max(d2, d3));
    ans.height = max(leftAns.height, rightAns.height) + 1;

    return ans;
}

int diameter(BinaryTreeNode<int> *root) {
    return diameterBetter(root).diameter;
}













int diameter(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return 0;
    }

    int d1, h1 = diameter(root -> left);
    int d2, h2 = diameter(root -> right);
    int d3 = height(root -> left) + height(root -> right) + 1;

    return max(d1, max(d2, d3));
}




























int minNode(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return INT_MAX;
    }

    int a = minNode(root -> left);
    int b = minNode(root -> right);
    return min(a, min(b, root -> data));
}

bool checkBSt(BinaryTreeNode<int> *root) {
    // Base case
    // Find max of left subtree and min of right subtree
    // Compare root with max and min (calculated above)
    // Call recursion if root is fine
}












int countNodes(BinaryTreeNode<int> *root ) {
    if(root == NULL) {
        return 0;
    }

    int x = countNodes(root -> left);
    int y = countNodes(root -> right);

    return x + y + 1;
}
