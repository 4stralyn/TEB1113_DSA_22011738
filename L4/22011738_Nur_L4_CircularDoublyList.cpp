/*
______________________________________________
Name: Nur Aina Najwa binti Rosdi     
ID: 22011738                        
Group: G3                            
Lab: L3                              
Task: To create a circular doubly linked list 
______________________________________________
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
            head->next_pointer = head;
            head->prev_pointer = head;

        } else {
            tail->next_pointer = node;
            node->prev_pointer = tail;
            tail = node;
            tail->next_pointer = head;
            head->prev_pointer = tail;
        }
    }
   
    //[node1, node2, node3]
    //Display foward
    void display_foward() {
    
        Node* currNode = head;

        do {
            cout << currNode -> name << " <-> ";
            currNode = currNode -> next_pointer;
        } while (currNode != head);
        cout << head->name << endl;
    }
    
    //Display backward
    void display_backward() {
    
        Node* currNode = tail;

        do {
            cout << currNode -> name << " <-> ";
            currNode = currNode -> prev_pointer;
        } while (currNode != tail);
        cout << tail->name << endl;
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
    cout << "\nBackward: ";
    std_names.display_backward();
    
    
    return 0;
}