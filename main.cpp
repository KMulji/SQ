#include <iostream>
#include "Queue.h"
#include "Stack.h"
int main(){
    
   Queue<int> *x = new Queue<int>();
    x->Enqueue(10);
    x->Enqueue(20);
    x->Enqueue(30);
    x->Enqueue(40);

    x->Dequeue();
    x->Dequeue();
    x->Dequeue();
    x->Dequeue();
    x->Dequeue();

    Stack<int> *z = new Stack<int>();
    z->Push(10);
    z->Push(20);
    z->Push(30);
    z->Push(40);
    z->Pop();
    z->Pop();
    z->Pop();
    z->Pop();
    z->Pop();
    return 0;
}