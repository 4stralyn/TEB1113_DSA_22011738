#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include <QString>
#include <vector>

const int MAX_SIZE = 100;

class ArrayQueue {
public:
    ArrayQueue();

    void enqueue(const QString &item);
    void dequeue();
    void reset();
    bool isEmpty() const;
    bool isFull() const;
    std::vector<QString> getAll() const;

    int getStepCount() const;
    void resetStepCount();

private:
    QString data[MAX_SIZE];
    int rear;
    int count;
    int stepCount; // Tracks operation steps
};

#endif// ARRAYQUEUE_H
