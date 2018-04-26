#include <iostream>
#include "queue.h"
Queue::Queue (int a):
     _start(0)
    ,_end(0)
    ,_size(a)
    ,_length(0)
    {
        _arr = new int [a];
    }
Queue::Queue(const Queue &q){
    _start = q._start;
    _end = q._end;
    _size = q._size;
    _length = q._length;
    _arr = new int [_size];
    for(int i = 0; i < _size; ++i){
        _arr[i] = q._arr[i];
    }
}
Queue::~Queue() {
    delete [] _arr;
    }
int Queue::GetLength() {
    return _length;
}
bool Queue::isEmpty() {
    _length == 0;
    return _length;
    }
bool Queue::isFull() {
    _length == _size;
    return _size;
    }
void Queue::Enqueue(int number) {
    if (_start != GetLength()) {
        _arr[_end++] = number;
        } else {
            std::cout<< "Queue is full!";
        }
    }
int Queue::Dequeue() {
    if (!isEmpty()) {
        return _arr[_start++] = 0;
        } else { 
            std::cout << "Queue is empty!";
        }
    }
void Queue::Print() {
    for(int i = _end; i >= _start; i--) {
        std::cout << _arr[i] << " ";
    }
}
