#ifndef QUEUE
#define QUEUE

class Queue {
    private:
        int *_arr;
        int _size;
        int _start;
        int _end;
        int _length;
    public:
        Queue (int = 10);
        Queue(const Queue &);
        ~Queue();
        bool isEmpty();
        bool isFull();
        void Enqueue(int);
        int Dequeue();
        int GetLength();
        void Print();
};
#endif
