#ifndef STACK_H
#define STACK_H
#include "Node.h"
template <typename T>
class Stack{
    private:
        Node<T>* head;
    public:
        Stack();
        void Push(T x);
        T Pop();

        
};




#endif