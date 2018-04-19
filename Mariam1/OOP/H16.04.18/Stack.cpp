#include <iostream>

class Stack {
    private:     
        unsigned int top;
        unsigned int number;
        int *arr;
    public:
        Stack (unsigned int number = 10) {
            top = 0;
            this->number = number;
            arr = new int [number];
        }
        ~Stack() {
        delete []arr;
        }
 
        void push (int element) {
            if (top == 10) {
                std::cout << "Your stack is full!" << std::endl;
            } else {
                arr[top++] = element;
            }
        }  
        int pop() {
            if (isEmpty()) {
                std:: cout<< "Your stack is empty!" << std::endl;    
            } else { 
                return arr[top--];
            } 
         return -1;
         } 
        
         bool isEmpty() { 
             return top==0;
         }   
      
         void printStack () {
             for (int i = 0; i < top; i++) {
                std::cout << arr[i] << std::endl;
         }
             std::cout << "Size of your Stuck is: " << top << std::endl;
        }
};

int main() {

    Stack a;
    a.push(1);
    a.pop();
    a.pop();
    a.push(2);
    a.push(3);
    a.push (2);
    a.push (3);
    a.printStack();

    return 0;
}
    
