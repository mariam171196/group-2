#include <iostream>
#include "queue.h"
int main() {
    Queue q(15);
    q.Dequeue();
    for (int i = 1; i < 10; i ++) {
        q.Enqueue(i);
    }
    q.Print();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Print();
    std::cout << "Length = " << q.GetLength() << std::endl;
}
