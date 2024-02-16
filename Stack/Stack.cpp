#include <iostream>

using namespace std;

template <typename Type>
class Node
{
public:
    Type data;
    Node<Type>* next;

    Node();
};

template <typename Type>
Node<Type> :: Node()
{
    next = nullptr;
}

template <typename Type>
class Stack
{
private:

    Node<Type>* stack_top;
    int stack_size;

public:
    Type top();
    Stack();
    ~Stack();
    bool empty();
    int size();
    void push(Type);
    void pop();
    Node<Type>* begin();
    void clear();
};

/// Sets initial values to the Stack

template <typename Type>
Stack<Type> :: Stack()
{
    stack_top = nullptr;
    stack_size = 0;
}

/// Deletes the whole Stack

template <typename Type>
Stack<Type> :: ~Stack()
{
    clear();
}

/// Returns true / false if the Stack is empty or not

template <typename Type>
bool Stack<Type> :: empty()
{
    return stack_size == 0;
}

/// Returns the size of the Stack

template <typename Type>
Stack<Type> :: size()
{
    return stack_size;
}

/// Adds value to the stack_top of the Stack

template <typename Type>
void Stack<Type> :: push(Type value)
{
    Node<Type>* ptr = new Node<Type>();
    ptr -> data = value;
    ptr -> next = stack_top;
    stack_top = ptr;
    stack_size++;
}

/// Removes the stack_top element of the Stack

template <typename Type>
void Stack<Type> :: pop()
{
    if(empty())
        return;
    Node<Type>* ptr = stack_top;
    stack_top = stack_top -> next;
    delete ptr;
    stack_size--;
}

/// Returns the value stored in the stack_top of the Stack

template <typename Type>
Type Stack<Type> :: top()
{
    return stack_top -> data;
}

/// Returns the address of the stack_top of the Stack

template <typename Type>
Node<Type>* Stack<Type> :: begin()
{
    return stack_top;
}

/// Removes all elements of the Stack

template <typename Type>
void Stack<Type> :: clear()
{
    while(!empty())
        pop();
}

int main()
{

	return 0;
}
