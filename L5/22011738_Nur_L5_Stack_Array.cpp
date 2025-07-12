/**********************************
Name: Nur Aina Najwa binti Rosdi
ID: 22011738
Lab: L5
Group: G3
**********************************/

#include <iostream>
using namespace std;

const int MAX = 100;  // maximum stack size

class Stack {
private:
    string arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void isFull() {
        cout << "Stack is empty!" << endl;
    }

    void push(string name) {
        if (top >= MAX - 1) {
            isFull();
        }
        arr[++top] = name;
    }

    void pop() {
        if (top == -1) {
            isEmpty();
        } else {
            cout << arr[top--] << endl;
        }
    }

    void peek() {
        if (top == -1) {
            isEmpty();
        } else {
            cout << arr[top] << endl;
        }
    }

    void isEmpty() {
        cout << "Stack is empty!" << endl;
    }

    void display_stack() {
        if (top == -1) {
            cout << "NULL" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " -> ";
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

    stack.pop(); // Should print Ahmed

    cout << "Peek: ";
    stack.peek(); // Should print Alicia

    stack.pop(); // Alicia
    stack.pop(); // Ali
    stack.pop(); // Stack is empty!

    return 0;
}
