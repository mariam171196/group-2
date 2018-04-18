#include <iostream>

class Stack {
    private:
        unsigned int top;
        int number = 0;
        int *arr;
    public:
        Stack( int number = 10) {
            top = 0;
            this->number = number;
            arr = new int[number];
        }
         
        void push(int element) {
            if (top == number) {
                std::cout << "Your stack is full!";
            } else {
                arr[top] = element;    
                top++;
            }
         
        }  
        int pop() {
            if (top == 0) {
                std:: cout<< "Empty";
            } else {
                int num = arr[top];
                arr[top] = 0;
                top--;
                return num;
            } 
         } 
        
        bool isEmpty() {
            if (top == 0) {
                return false;
            } else {
                return true;
            }
        }   
        unsigned int size() {
            return top;
            }
};
    
