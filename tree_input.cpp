#include<iostream>
#include<queue>
#include "Treeclass.h"
using namespace std;
/*template <typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data)
    {
            this->data = data;
    }

    ~TreeNode()
    {
        for(int i=0;i<children.size();i++)
        {
            delete children[i];
        }
    }
};
*/

TreeNode<int>* takeinputlevelwise()
{
    int rd;
    cin>>rd;
    TreeNode<int> *root = new TreeNode<int>(rd);
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int> * temp = q.front();
        q.pop();
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
           int c;
           cin>>c;
          TreeNode<int> * child = new TreeNode<int>(c);
          temp->children.push_back(child);
          q.push(child);
        }
    }
    return root;
}

void printlevelwise(TreeNode<int>*root)
{
   queue<TreeNode<int>*> q;
   q.push(root);
   while(!q.empty())
   {

       cout<< (q.front())->data<<" ";
       TreeNode<int> *t = q.front();
       q.pop();
       for(int i=0;i<t->children.size();i++)
       {
           q.push(t->children[i]);
       }
       cout<<endl;
   }
}
int main()
{
        TreeNode<int> *t =takeinputlevelwise();
printlevelwise(t);
}
