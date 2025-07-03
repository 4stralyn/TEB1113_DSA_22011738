/*
______________________________________
Name: Nur Aina Najwa binti Rosdi     |
ID: 22011738                         |
Group: G3                            |
Lab: L3                              | 
Task: To create a singly linked list |
_____________________________________|
*/

#include <iostream>
using namespace std;


//hold student names;
class Node {
public:
    string name;
    Node* next_pointer;
    
    //constructor
    Node(string name1){
        name = name1;
        next_pointer = nullptr;
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
            tail = node;
        }
    }
    
    //to delete node by the pointer
    void delete_node(Node* node){
        if (head ==nullptr || node == nullptr) {
            return;
        }
        
        if (head == node) {
            head = head -> next_pointer;
            delete node;
            return;
        }
        
        Node* curr = head;
        Node* prev = nullptr;
        
        while (curr != nullptr && curr != node) {
            prev = curr;
            curr = curr -> next_pointer;
        }
        
        
        prev -> next_pointer = curr -> next_pointer;
        if (curr == tail) {
            tail = prev;
        }
        delete curr;
    }
    
    //[node1, node2, node3]
    //Display list
    void display_list() {
    
        Node* currNode = head;

        while (currNode != nullptr) {
            cout << currNode -> name << " -> ";
            currNode = currNode -> next_pointer;
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
    };
};

int main() {
    
    Node* node1 = new Node ("Ali");
    Node* node2 = new Node ("Alicia");
    Node* node3 = new Node("Ahmed");
    
    Linkedlist std_names;
    std_names.insert_node(node1);
    std_names.insert_node(node2);
    std_names.insert_node(node3);

    cout << "Initial list: ";
    std_names.display_list();

    std_names.delete_node(node2);

    cout << "\nAfter deleting Alicia: ";
    std_names.display_list();
    
    return 0;
}




