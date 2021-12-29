#include <iostream>
#include "Node.h"

template <typename T>
Node<T>::Node(T x){
    this->value=x;
    this->next=nullptr;
}

template <typename T>
Node<T>* Node<T>::getNext(){
    return this->next;
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
    this->next=next;
}

template <typename T>
int Node<T>::getValue(){
    return this->value;
}

template class Node<int>;
template class Node<double>;