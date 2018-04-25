#include "queue.h"
#include <iostream>

Queue::Queue(unsigned int m):
    start(0)
    ,end(0)
    ,size(m)
    ,length(0)
    {
    arr = new int [m];
    }
Queue::Queue(const Queue &q){
    start = q.start;
    end = q.end;
    size = q.size;
    length = q.length;
    arr = new int [size];
}
Queue::~Queue() {
    delete [] arr;
    }
    int Queue::getlength() {
    return length;
}
bool Queue::isEmpty() {
    length == 0;
    return length;
    }
bool Queue::isFull() {
    length == size;
    return size;
    }
int Queue::enqueue(int number) {
    if (!isFull()) {
        number = arr[end];
        ++length;
        } else {
            std::cout<< "Queue is full!";
        }
    }
int Queue::dequeue() {
    if (!isEmpty()) {
        return arr[--end];
        --length;
        } else { 
            std::cout << "Queue is empty!";
        }
    }
