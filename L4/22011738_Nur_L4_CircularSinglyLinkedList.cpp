/*
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
GP: Group 
Lab: L4
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
            tail -> next_pointer = head;
        }
    }
    
    
    //[node1, node2, node3]
    //Display list
    void display_list() {
    
        Node* currNode = head;

        do  {
            cout << currNode -> name << " -> ";
            currNode = currNode -> next_pointer;
            
        } while (currNode != head);
        
        cout << currNode -> name << endl;
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

    cout << "Initial list: ";
    std_names.display_list();

    
    return 0;
}