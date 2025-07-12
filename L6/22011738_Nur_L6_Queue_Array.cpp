/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L6
Group: G3
**********************************/

#include <iostream>
using namespace std;

const int MAX = 100;  // Maximum size of the queue

class Queue {
private:
    string arr[MAX];  // Array to hold queue elements
    int front;        // Index of front element
    int rear;         // Index of rear element

public:
    // Constructor
    Queue() {
        front = 0;
        rear = -1;
    }

    // Add new element to the rear
    void enqueue(string name) {
        if (rear >= MAX - 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        arr[++rear] = name;  // Insert and move rear forward
    }

    // Remove element from the front
    void dequeue() {
        if (front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front++] << endl;
    }

    // Display all elements in the queue
    void display() {
        if (front > rear) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i < rear)
                cout << " <- ";
        }
        cout << endl;
    }

};

int main() {
    Queue q;

    q.enqueue("Ali");
    q.enqueue("Alicia");
    q.enqueue("Ahmed");

    q.display();       // Show current queue

    q.dequeue();       // Remove one element
    q.display();       // Show updated queue

    q.dequeue();       // Remove second element
    q.dequeue();       // Remove third element
    q.dequeue();       // Try removing when queue is empty

    return 0;
}
