#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class BinarySearchTree
{
    public:
    node *root;

    BinarySearchTree()
    {
        root=NULL;
    }
};

int main()
{
    cout<<"Code is cooking"<<endl;
}