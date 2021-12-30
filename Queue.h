#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
template <typename T>
class Queue{
    private:
        Node<T> *head;
        Node<T> *tail;
    public:
        Queue(); 
        void Enqueue(T x);
        T Dequeue();
};

#endif