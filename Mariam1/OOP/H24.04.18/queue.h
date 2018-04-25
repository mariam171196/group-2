#ifndef QUEUE_H
#define QUEUE_H

class Queue {
    private:
        int *arr;
        unsigned int size;
        int start;
        int end;
        int length;
    public:
        Queue (unsigned int length = 10);
        Queue(const Queue &);
        ~Queue();
        bool isEmpty();
        bool isFull();
        int enqueue(int number);
        int dequeue();
        int getlength();
};
#endif
