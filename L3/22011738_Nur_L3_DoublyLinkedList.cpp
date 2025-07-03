/*
______________________________________
Name: Nur Aina Najwa binti Rosdi     |
ID: 22011738                         |
Group: G3                            |
Lab: L3                              | 
Task: To create a doubly linked list |
_____________________________________|
*/

#include <iostream>
using namespace std;


class Node {
public:
    string name;
    Node* next_pointer;
    Node* prev_pointer;
    
    //constructor
    Node(string name1){
        name = name1;
        next_pointer = nullptr;
        prev_pointer = nullptr;
    }
};

class Linkedlist {
private:
    Node* head;
    Node* tail;
    
public:
    Linkedlist(){
        head = nullptr;
        tail = nullptr; 
    }
    
    
    //to insert node at the end
    void insert_node(Node* node) {
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail -> next_pointer = node;
            node -> prev_pointer = tail;
            tail = node;
        }
    }
    
    //to delete node by the pointer
    void delete_node(Node* node){
        if (head ==nullptr || node == nullptr) {
            return;
        }
        
        if (node == head) {
            head = head -> next_pointer;
            if (head != nullptr)
                head -> prev_pointer = nullptr;
            else
                tail = nullptr; //list becames empty
            delete node;
            return;
        }
        
        
        if (node ==tail) {
            tail = node -> prev_pointer;
            if (tail != nullptr)
                tail -> next_pointer = nullptr;
            delete node;
            return;
        }
        
        node -> prev_pointer -> next_pointer = node -> next_pointer;
        node -> next_pointer -> prev_pointer = node -> prev_pointer;
        delete node;
    }
    
    //[node1, node2, node3]
    //Display foward
    void display_foward() {
    
        Node* currNode = head;

        while (currNode != nullptr) {
            cout << currNode -> name << " <-> ";
            currNode = currNode -> next_pointer;
        }
        cout << "NULL" << endl;
    }
    
    //Display backward
    void display_backward() {
    
        Node* currNode = tail;

        while (currNode != nullptr) {
            cout << currNode -> name << " <-> ";
            currNode = currNode -> prev_pointer;
        }
        cout << "NULL" << endl;
    }
    
    //Destructor to clean up memory
    ~Linkedlist() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr -> next_pointer;
            delete temp;
        }
    }
};

int main() {
    
    Node* node1 = new Node ("Ali");
    Node* node2 = new Node ("Alicia");
    Node* node3 = new Node("Ahmed");
    
    Linkedlist std_names;
    std_names.insert_node(node1);
    std_names.insert_node(node2);
    std_names.insert_node(node3);

    cout << "\nFoward: ";
    std_names.display_foward();
    
    std_names.delete_node(node2);

    cout << "\nAfter deleting Alicia: ";
    cout << "\nFoward: ";
    std_names.display_foward();
    cout << "\nBackward: ";
    std_names.display_backward();
    
    return 0;
}