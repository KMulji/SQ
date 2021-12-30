#include <iostream>
#include "Stack.h"
#include "Node.h"

template <typename T>
Stack<T>::Stack(){
    this->head=nullptr;
}

template <typename T>
void Stack<T>::Push(T x){
    Node<T>* temp = new Node(x);
    temp->setNext(nullptr);

    if (this->head==nullptr)
    {
        this->head=temp;
        return;
    }
    temp->setNext(this->head);
    this->head=temp;
}

template <typename T>
T Stack<T>::Pop(){

    if (this->head==nullptr)
    {
        std::cout<<"Cant pop empty stack"<<std::endl;
        return -1;
    }
    
    T value = this->head->getValue();
    
    
    if(this->head->getNext()==nullptr){
        free(head);
        this->head=nullptr;
        return value;
    }
    Node<T>* temp= this->head;
    this->head = this->head->getNext();
    temp->setNext(nullptr);
    free(temp);
    temp=nullptr;

    return value;

}

template class Stack<int>;
template class Stack<double>;