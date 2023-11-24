//10.Write a program to create a Binary Search Tree of n elements and then display the
//elements (preorder, in order and post order) of the tree.

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node *insert(Node *root, int key)
{
    if (root == nullptr)
    {
        return new Node(key);
    }

    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void preorder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root)
{
    if (root != nullptr)
    {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = nullptr;

    cout << "Enter the size of BST (N):" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements of BST:" << endl;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout << "Preorder: ";
    preorder(root);
    cout << "\nInorder: ";
    inorder(root);
    cout << "\nPostorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
