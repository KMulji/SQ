#ifndef NODE_H
#define NODE_H

template <typename T>
class Node{
    private:
        T value;
        Node* next;
    public:
        Node(T x);
        Node<T>* getNext();
        void setNext(Node<T>* next);
        int getValue();

};
#endif