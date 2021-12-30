#include <iostream>
#include "Node.h"
#include "Queue.h"

template <typename T>
Queue<T>::Queue(){
    this->head=nullptr;
    this->tail=nullptr;
}

template <typename T>
void Queue<T>::Enqueue(T x){
    Node<T>* temp = new Node(x);
    if (this->head==nullptr)
    {
        this->head=temp;
        this->tail=temp;
        return;
    } 
    this->tail->setNext(temp);
    this->tail = temp;
}

template <typename T>
T Queue<T>::Dequeue(){

    if(this->head==nullptr){
        std::cout<<"Cant Dequeue from empty queue"<<std::endl;
        return -1;
    }
    T value = this->head->getValue();
    
    if(this->head->getNext()==nullptr){
        free(this->tail);
        this->tail=nullptr;
        this->head=nullptr;
        return value;
    }
    
    Node<T>* temp = this->head;
    this->head=this->head->getNext();

    free(temp);
    temp=nullptr;

    return value;
}

template class Queue<int>;
template class Queue<double>;