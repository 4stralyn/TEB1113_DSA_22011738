/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L6
Group: G3
**********************************/

#include <iostream>
using namespace std;

// Node class to represent each person in the queue
class Node {
public:
    string name;
    Node* next;

    Node(string name) {
        this->name = name;
        this->next = nullptr;
    }
};

// Queue class using linked list
class Queue {
private:
    Node* front;  // Points to the front of the queue
    Node* rear;   // Points to the rear of the queue

public:
    // Constructor
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Add new element to the rear of the queue
    void enqueue(string name) {
        Node* node = new Node(name);
        if (rear == nullptr) {
            front = rear = node; // First node in queue
        } else {
            rear->next = node;   // Link new node to the end
            rear = node;         // Update rear pointer
        }
    }

    // Remove element from the front of the queue
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Dequeued: " << front->name << endl;
        Node* temp = front;
        front = front->next;     // Move front pointer
        if (front == nullptr)    // Queue is now empty
            rear = nullptr;
        delete temp;             // Free memory
    }

    // Display current queue
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }
    
        cout << "Queue: ";
        Node* curr = front;
        while (curr != nullptr) {
            cout << curr->name;
            if (curr->next != nullptr)
                cout << " <- ";
            curr = curr->next;
        }
        cout << endl;
    }

    // Destructor to free all nodes
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    Queue q;

    q.enqueue("Ali");
    q.enqueue("Alicia");
    q.enqueue("Ahmed");

    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue(); // Should show empty

    return 0;
}
