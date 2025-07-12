/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L6
Group: G3
**********************************/

#include <iostream>
using namespace std;

const int MAX = 5; // Maximum size of the circular queue

class CircularQueue {
private:
    string arr[MAX]; // Array to store queue elements
    int front, rear; // Indices for front and rear of the queue

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        return (front == (rear + 1) % MAX);
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Add a new element to the rear of the queue
    void enqueue(string name) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }

        // If queue is empty, set front and rear to 0
        if (isEmpty()) {
            front = rear = 0;
        } else {
            // Move rear to the next position circularly
            rear = (rear + 1) % MAX;
        }
        arr[rear] = name; // Insert the element
    }

    // Remove the front element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Dequeued: " << arr[front] << endl;

        // If only one element was present
        if (front == rear) {
            front = rear = -1;
        } else {
            // Move front to the next position circularly
            front = (front + 1) % MAX;
        }
    }

    // Display all elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
    
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << " <- ";
            i = (i + 1) % MAX; // Move circularly
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    // Insert 5 elements (fill the queue)
    q.enqueue("Ali");
    q.enqueue("Alicia");
    q.enqueue("Ahmed");
    q.enqueue("Amir");
    q.enqueue("Alia"); // This should fill the queue

    q.display(); // Display all elements

    q.dequeue(); // Remove 2 elements from front
    q.dequeue();

    q.enqueue("Aysha"); // These should wrap around (circular)
    q.enqueue("Azim");  
    q.enqueue("Extra"); // Queue is full now

    q.display(); // Final state of the queue

    return 0;
}
