#include "arrayqueue.h"

ArrayQueue::ArrayQueue() {
    rear = -1;
    count = 0;
    stepCount = 0;
}

bool ArrayQueue::isEmpty() const {
    return count == 0;
}

bool ArrayQueue::isFull() const {
    return count == MAX_SIZE;
}

void ArrayQueue::enqueue(const QString &item) {
    if (!isFull()) {
        rear++;                       // 1 step
        data[rear] = item;           // 1 step
        ++count;                     // 1 step
        stepCount += 3;
    }
}

void ArrayQueue::dequeue() {
    if (!isEmpty()) {
        // Shift elements to the left
        for (int i = 0; i < rear; ++i) {
            data[i] = data[i + 1];
            stepCount++; // 1 step per shift
        }
        rear--;       // 1 step
        count--;      // 1 step
        stepCount += 2;
    }
}

void ArrayQueue::reset() {
    rear = -1;
    count = 0;
    stepCount = 0;
}

std::vector<QString> ArrayQueue::getAll() const {
    std::vector<QString> items;
    for (int i = 0; i <= rear; ++i) {
        items.push_back(data[i]);
    }
    return items;
}

int ArrayQueue::getStepCount() const {
    return stepCount;
}

void ArrayQueue::resetStepCount() {
    stepCount = 0;
}
