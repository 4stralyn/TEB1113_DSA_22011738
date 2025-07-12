/*_____________________________________
Name: Nur Aina Najwa binti Rosdi      |
ID: 22011738                          |
Group: G3                             |
Lab: L3                               | 
Task: To create a doubly linked list  |
_____________________________________*/

#include <iostream>
using namespace std;

// Node class for doubly linked list
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
    // Constructor to initialize head and tail
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
        } else {
            tail->next_pointer = node;
            node->prev_pointer = tail;
            tail = node;
        }
    }

    // Delete node by name
    void delete_node(string name) {
        if (head == nullptr) return;

        Node* curr = head;

        // Search for the node
        while (curr != nullptr && curr->name != name) {
            curr = curr->next_pointer;
        }

        if (curr == nullptr) return; // Not found

        // If node is head
        if (curr == head) {
            head = curr->next_pointer;
            if (head != nullptr)
                head->prev_pointer = nullptr;
            else
                tail = nullptr; // list is now empty
            delete curr;
            return;
        }

        // If node is tail
        if (curr == tail) {
            tail = curr->prev_pointer;
            if (tail != nullptr)
                tail->next_pointer = nullptr;
            delete curr;
            return;
        }

        // Node is in the middle
        curr->prev_pointer->next_pointer = curr->next_pointer;
        curr->next_pointer->prev_pointer = curr->prev_pointer;
        delete curr;
    }

    // Display list from head to tail
    void display_foward() {
        Node* currNode = head;
        while (currNode != nullptr) {
            cout << currNode->name << " <-> ";
            currNode = currNode->next_pointer;
        }
        cout << "NULL" << endl;
    }

    // Display list from tail to head
    void display_backward() {
        Node* currNode = tail;
        while (currNode != nullptr) {
            cout << currNode->name << " <-> ";
            currNode = currNode->prev_pointer;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~Linkedlist() {
        Node* curr = head;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next_pointer;
            delete temp;
        }
    }
};

int main() {
    Linkedlist std_names;

    std_names.insert_node("Ali");
    std_names.insert_node("Alicia");
    std_names.insert_node("Ahmed");

    cout << "\nFoward: ";
    std_names.display_foward();

    std_names.delete_node("Alicia"); // Remove node named "Alicia"

    cout << "\nAfter deleting Alicia:";
    cout << "\nFoward: ";
    std_names.display_foward();
    cout << "\nBackward: ";
    std_names.display_backward();

    return 0;
}
