/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L7
Group: G3
**********************************/

#include <iostream>
using namespace std;


// Node class represents a tree node
class Node {
    public: string name;
    Node* left;
    Node* right;
    
    
    // Constructor to initialize node
    Node(string n) {
        name = n;
        left = nullptr;
        right = nullptr;        
    }
};


// Tree class represents the binary tree
class Tree{
    public:
    Node* root;
    
    
    // Constructor to initialize empty tree
    Tree() {
        root = nullptr;
    }
    
    
    // Add root node
    void add_root(string name) {
        root = new Node(name);
    }
    
    
    // Find node by name (recursive)
    Node* find(Node* node, string name) {
        if (node == nullptr) return nullptr;
        if (node -> name == name) return node;
        
        Node* leftResult = find (node -> left, name);
        if (leftResult != nullptr) return leftResult;
        
        return find (node -> right, name);
    }
    
    
    // Add left child to a parent node
    void add_left(string parentName, string childName) {
        Node* parent = find(root, parentName);
        if (parent != nullptr) {
            parent -> left = new Node(childName);
        }
    }
    
    
    // Add right child to a parent node
    void add_right(string parentName, string childName) {
        Node* parent = find(root, parentName);
        if (parent != nullptr) {
            parent -> right = new Node(childName);
        }
    }
    
    
    // Print root node
    void print_root() {
        if (root != nullptr)
            cout << "Root: " << root -> name << endl;
    }
    
    
    // Print left child of a node
    void print_left(string parentName) {
        Node* parent = find(root, parentName);
        if (parent && parent -> left)
            cout << "Left child of " << parentName << ": " << parent -> left -> name << endl;
    }
    
    
    // Print right child of a node
    void print_right(string parentName) {
        Node* parent = find (root, parentName);
        if (parent && parent->right)
            cout << "Right child of " << parentName << ": " << parent -> right -> name << endl;
    }
};

int main () {
    Tree tree;
    
    
    // Build the tree
    tree.add_root("A");
    tree.add_left("A", "B");
    tree.add_right("A", "C");
    tree.add_left("B", "D");
    tree.add_right("B", "E");
    tree.add_left("C", "F");
    tree.add_right("C", "G");
    
    
    // Print tree structure
    tree.print_root();
    tree.print_left("A");
    tree.print_right("A");
    tree.print_left("B");
    tree.print_right("B");
    tree.print_left("C");
    tree.print_right("C");
    
    return 0;
}
