#include <iostream>
#include "Queue.h"

int main(){
    
   Queue<int> *x = new Queue<int>();
    x->Enqueue(10);
    x->Enqueue(20);
    x->Enqueue(30);
    x->Enqueue(40);

    x->Dequeue();


    Queue<double> *y = new Queue<double>();
    y->Enqueue(10.1);
    y->Enqueue(10.5);
    y->Enqueue(10.3);
    y->Enqueue(10.2);



    std::cout<<"Check mem"<<std::endl;

    return 0;
}