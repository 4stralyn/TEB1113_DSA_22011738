/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L5
Group: G3
**********************************/

#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next_pointer;

    Node(string name1) {
        this -> name = name1;
        this -> next_pointer = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(string name) {
        Node* node = new Node(name);
        if (top == nullptr) {
            top = node;
        } else {
            node -> next_pointer = top;
            top = node;
        }
    }

    void isEmpty() {
        cout << "Stack is empty!" << endl;
        return;
    }

    void pop() {
        Node* curr = top;
        Node* prev = nullptr;
        
        if (top == nullptr) {
           isEmpty();
        } else {
            cout << top -> name << endl;
            top = top -> next_pointer;

        }
    }

    void peek() {
        Node* curr = top;
        Node* prev = nullptr;
        
        if (top == nullptr) {
           isEmpty();
        } else {
            cout << top -> name << endl;
        }
    }


    ~Stack() {
        Node* curr = top;
        while (curr != nullptr) {
            Node* temp = curr;
            curr = curr->next_pointer;
            delete temp;
        }
    }
    
        void display_stack() {
        Node* currNode = top;
        while (currNode != nullptr) {
            cout << currNode->name << " -> ";
            currNode = currNode->next_pointer;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    
    Stack stack;

    stack.push("Ali");
    stack.push("Alicia");
    stack.push("Ahmed");


    cout << "\nStack: ";
    stack.display_stack();
    stack.pop();
    cout << "Peek: ";
    stack.peek();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
