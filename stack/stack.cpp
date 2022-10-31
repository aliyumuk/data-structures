#include <iostream>

class Stack
{
private:
    /* data */
    int * arr;
    int top;
    int capacity;
public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = -1;
        arr = new int[capacity];
        std::cout << "constructer called" << std::endl;  
    }
    ~Stack()
    {
        delete[] arr;
        std::cout << "destructer called" << std::endl;    
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        return top == -1;       
    }
    bool isFull()
    {
        return (top+1) == capacity;
    }
    void push(int value)
    {
        if(!isFull())
        {
            top++;
            arr[top] = value;
        }
        else
        {
            std::cout << "Stack is full!" << std::endl;  
        }
    }
    int pop()
    {
        if(!isEmpty())
        {
            int topValue = arr[top];
            top--;
            return topValue;
        }
        else
        {
            std::cout << "Stack is empty!" << std::endl;  
            return 0;
        }
    }
    int peek()
    {
        if(!isEmpty())
        {
            return arr[top];
        }
        else
        {
            std::cout << "Stack is empty!" << std::endl;  
            return 0;
        }
    }    
};

int main(){
    Stack myStack(3);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.isEmpty() << std::endl;
    std::cout << myStack.isFull() << std::endl;
    myStack.push(1);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    myStack.push(2);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    myStack.push(3);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    myStack.push(4);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    myStack.push(5);
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.pop() << std::endl;
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.pop() << std::endl;  
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.pop() << std::endl;   
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.pop() << std::endl;   
    std::cout << "Size of the stack is: " << myStack.size() << std::endl;
    std::cout << myStack.pop() << std::endl;              
    return 0;
}