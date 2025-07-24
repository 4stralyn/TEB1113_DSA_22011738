#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include <QString>
#include <vector>

class LinkedListQueue {
public:
    LinkedListQueue();
    ~LinkedListQueue();

    void enqueue(const QString &item);
    void dequeue();
    void reset();
    bool isEmpty() const;
    std::vector<QString> getAll() const;

    int getStepCount() const;
    void resetStepCount();

private:
    struct Node {
        QString data;
        Node *next;
    };

    Node *head;
    Node *tail;
    int stepCount; // Tracks operation steps
};

#endif // LINKEDLISTQUEUE_H
