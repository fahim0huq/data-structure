//11. Write a program to create a Binary Search Tree of n elements and then search an element
//from the tree.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

bool search(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root != nullptr;
    }

    if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

int main() {
    Node* root = nullptr;

    cout << "Enter the size of BST (N):" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements of BST:" << endl;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cout << "Enter the element to search:" << endl;
    int item;
    cin >> item;

    if (search(root, item)) {
        cout << item << " is present in the BST." << endl;
    } else {
        cout << item << " is not present in the BST." << endl;
    }
    return 0;
}
