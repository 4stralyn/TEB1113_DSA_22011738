/*_____________________________________
Name: Nur Aina Najwa binti Rosdi      |
ID: 22011738                          |
Group: G3                             |
Lab: L3                               | 
Task: To create a singly linked list  |
_____________________________________*/

#include <iostream>
using namespace std;

// Node class for singly linked list
class Node {
public:
    string name;
    Node* next_pointer;

    // Constructor to initialize node with a name
    Node(string name1) {
        name = name1;
        next_pointer = nullptr;
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

    // Insert new node at the end
    void insert_node(string name) {
        Node* node = new Node(name);
        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next_pointer = node;
            tail = node;
        }
    }

    // Delete node by name
    void delete_node(string name) {
        if (head == nullptr) return;

        // If head needs to be deleted
        if (head->name == name) {
            Node* temp = head;
            head = head->next_pointer;
            delete temp;
            return;
        }

        Node* curr = head;
        Node* prev = nullptr;

        // Find node to delete
        while (curr != nullptr && curr->name != name) {
            prev = curr;
            curr = curr->next_pointer;
        }

        if (curr == nullptr) return; // Name not found

        prev->next_pointer = curr->next_pointer;

        // If tail is deleted
        if (curr == tail) {
            tail = prev;
        }

        delete curr;
    }

    // Display the full list
    void display_list() {
        Node* currNode = head;
        while (currNode != nullptr) {
            cout << currNode->name << " -> ";
            currNode = currNode->next_pointer;
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

    cout << "Initial list: ";
    std_names.display_list();

    std_names.delete_node("Alicia");

    cout << "\nAfter deleting Alicia: ";
    std_names.display_list();

    return 0;
}
