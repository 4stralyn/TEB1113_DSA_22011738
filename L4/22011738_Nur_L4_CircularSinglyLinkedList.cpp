/* ______________________________________________
Name: Nur Aina Najwa binti Rosdi     
ID: 22011738                        
Group: G3                            
Lab: L4                           
Task: To create a circular singly linked list 
______________________________________________*/

#include <iostream>
using namespace std;

// Node class for circular singly linked list
class Node {
public:
    string name;
    Node* next_pointer;

    Node(string name1) {
        this->name = name1;
        this->next_pointer = nullptr;
    }
};

class Linkedlist {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    Linkedlist() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert node at the end of the list
    void insert_node(string name) {
        Node* node = new Node(name);
        if (head == nullptr) {
            head = node;
            tail = node;
            tail->next_pointer = head;  // circular link to itself
        } else {
            tail->next_pointer = node;
            tail = node;
            tail->next_pointer = head;  // maintain circular link
        }
    }

    // Display all nodes in the list
    void display_list() {
        Node* currNode = head;
        do {
            cout << currNode->name << " -> ";
            currNode = currNode->next_pointer;
        } while (currNode != head);

        cout << currNode->name << endl;  // repeat head to show circular nature
    }
};

int main() {
    Linkedlist std_names;

    std_names.insert_node("Ali");
    std_names.insert_node("Alicia");
    std_names.insert_node("Ahmed");

    cout << "Initial list: ";
    std_names.display_list();

    return 0;
}
