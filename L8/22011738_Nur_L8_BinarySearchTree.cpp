/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L8
Group: G3
**********************************/

#include <iostream>
using namespace std;

// Node class represents a tree node
class Node {
public:
    int value;
    Node* left;
    Node* right;

    // Constructor to initialize node
    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

// Tree class represents the binary search tree
class Tree {
public:
    Node* root;

    // Constructor to initialize empty tree
    Tree() {
        root = nullptr;
    }

    // Add root node
    void add_root(int value) {
        root = new Node(value);
    }

    // Add left child to a parent node
    void add_left(Node* parent, int value) {
        if (parent != nullptr) {
            parent->left = new Node(value);
        }
    }

    // Add right child to a parent node
    void add_right(Node* parent, int value) {
        if (parent != nullptr) {
            parent->right = new Node(value);
        }
    }

    // Find node by value (recursive)
    Node* find(Node* node, int target) {
        if (node == nullptr) return nullptr;
        if (node->value == target) return node;

        if (target < node->value)
            return find(node->left, target);
        else
            return find(node->right, target);
    }

    // Print value of root
    void print_root() {
        if (root != nullptr)
            cout << "Root: " << root->value << endl;
    }

    // Print left child of a node
    void print_left(Node* parent) {
        if (parent && parent->left)
            cout << "Left child of " << parent->value << ": " << parent->left->value << endl;
    }

    // Print right child of a node
    void print_right(Node* parent) {
        if (parent && parent->right)
            cout << "Right child of " << parent->value << ": " << parent->right->value << endl;
    }
};


int main() {
    Tree tree;

    cout << "=== Binary Search Tree ===" << endl;

    // Build the tree
    tree.add_root(50);
    tree.add_left(tree.root, 30);
    tree.add_right(tree.root, 70);
    tree.add_left(tree.root->left, 20);
    tree.add_right(tree.root->left, 40);
    tree.add_left(tree.root->right, 60);
    tree.add_right(tree.root->right, 80);

    // Search for target
    int target = 60;
    cout << "\nSearching for value: " << target << endl;
    Node* result = tree.find(tree.root, target);

    if (result != nullptr)
        cout << "Found node with value: " << result->value << endl;
    else
        cout << "Node with value " << target << " not found." << endl;

    return 0;
}
