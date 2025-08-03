#include "linkedlistqueue.h"

LinkedListQueue::LinkedListQueue() : head(nullptr), tail(nullptr), stepCount(0) {}

LinkedListQueue::~LinkedListQueue() {
    reset();
}

bool LinkedListQueue::isEmpty() const {
    return head == nullptr;
}

void LinkedListQueue::enqueue(const QString &item) {
    Node *newNode = new Node{ item, nullptr }; // 2 steps
    stepCount += 2;

    if (tail) {
        tail->next = newNode;  // 1 step
        stepCount += 1;
    } else {
        head = newNode;        // 1 step
        stepCount += 1;
    }

    tail = newNode;            // 1 step
    stepCount += 1;
}

void LinkedListQueue::dequeue() {
    if (!isEmpty()) {
        Node *temp = head;     // 1 step
        head = head->next;     // 1 step
        delete temp;           // 1 step
        stepCount += 3;

        if (!head) {
            tail = nullptr;    // 1 step
            stepCount += 1;
        }
    }
}

void LinkedListQueue::reset() {
    while (head) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
    stepCount = 0;
}

std::vector<QString> LinkedListQueue::getAll() const {
    std::vector<QString> items;
    Node *current = head;
    while (current) {
        items.push_back(current->data);
        current = current->next;
    }
    return items;
}

int LinkedListQueue::getStepCount() const {
    return stepCount;
}

void LinkedListQueue::resetStepCount() {
    stepCount = 0;
}
