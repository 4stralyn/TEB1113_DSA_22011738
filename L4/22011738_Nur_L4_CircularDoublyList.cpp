/* ______________________________________________
Name: Nur Aina Najwa binti Rosdi     
ID: 22011738                        
Group: G3                            
Lab: L4                           
Task: To create a circular doubly linked list 
______________________________________________*/

#include <iostream>
using namespace std;

// Node class for doubly circular linked list
class Node {
public:
    string name;
    Node* next_pointer;
    Node* prev_pointer;

    Node(string name1) {
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
    // Constructor
    Linkedlist() {
        head = nullptr;
        tail = nullptr;
    }

    // Insert node at the end
    void insert_node(string name) {
        Node* node = new Node(name);
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

    // Display list from head to tail
    void display_foward() {
        Node* currNode = head;
        do {
            cout << currNode->name << " <-> ";
            currNode = currNode->next_pointer;
        } while (currNode != head);
        cout << head->name << endl;
    }

    // Display list from tail to head
    void display_backward() {
        Node* currNode = tail;
        do {
            cout << currNode->name << " <-> ";
            currNode = currNode->prev_pointer;
        } while (currNode != tail);
        cout << tail->name << endl;
    }
};

int main() {
    Linkedlist std_names;

    std_names.insert_node("Ali");
    std_names.insert_node("Alicia");
    std_names.insert_node("Ahmed");

    cout << "\nFoward: ";
    std_names.display_foward();
    cout << "\nBackward: ";
    std_names.display_backward();

    return 0;
}
