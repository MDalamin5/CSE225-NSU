#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int key)
    {
        this->key = key;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *root = NULL;

void inorder(Node *node)
{
    if (node->left != NULL)
        inorder(node->left);
    cout << node->key << " ";
    if (node->right != NULL)
        inorder(node->right);
}
bool search(Node *node, int key)
{
    if (node == NULL)
        return false;

    if (node->key == key)
        return true;
    else if (key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}
Node *insert(Node *node, int key)
{
    if (node == NULL)
    {
        Node *newNode = new Node(key);
        return newNode;
    }

    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
int main()
{
    root = insert(root, 100);
    root = insert(root, 50);
    root = insert(root, 150);

    // inorder (root);

    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 120);
    root = insert(root, 200);
    root = insert(root, 65);
    inorder(root);
    cout << endl;

    cout << search(root, 80) << endl;  // 0
    cout << search(root, 120) << endl; // 1
}

/*

struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

*/