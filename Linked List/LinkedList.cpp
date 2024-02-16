#include <iostream>

using namespace std;

template <typename Type>
class Node
{
public:

    Type data;
    Node *next;

    Node();
};

/// Constructor for Node - Sets initial values / Creates the data structure

template <typename Type>
Node<Type> :: Node()
{
    data = 0;
    next = nullptr;
}

template <typename Type>
class LinkedList
{
private:

    Node<Type>* head;
    int list_size;

public:

    LinkedList();
    ~LinkedList();
    bool empty();
    int size();
    Type front();
    Type* begin();
    void insert(Type);
    void remove();
    void insertAt(Type, int);
    void removeAt(int);
    Type accessAt(int);
    void clear();
};

/// Constructor for LinkedList - Sets initial values / Creates the data structure

template <typename Type>
LinkedList<Type> :: LinkedList()
{
    head = nullptr;
    list_size = 0;
}

/// Destructor for LinkedList - Deletes the whole data structure after the end of the execution

template <typename Type>
LinkedList<Type> :: ~LinkedList()
{
    clear();
}

/// Returns true or false if the LinkedList is empty or not

template <typename Type>
bool LinkedList<Type> :: empty()
{
    return list_size == 0;
}


/// Returns the size of the LinkedList

template <typename Type>
int LinkedList<Type> :: size()
{
    return list_size;
}

/// Returns the value of the first element / head of the LinkedList

template <typename Type>
Type LinkedList<Type> :: front()
{
    return head -> data;
}

/// Return a pointer / iterator to the first element / head of the LinkedList

template <typename Type>
Type* LinkedList<Type> :: begin()
{
    return head;
}

/// Inserts the given value to the beginning of the LinkedList

template <typename Type>
void LinkedList<Type> :: insert(Type value)
{
    Node<Type>* ptr = new Node<Type>();
    ptr -> data = value;
    ptr -> next = head;
    head = ptr;
    list_size++;
}

/// Removes the first element of the LinkedList

template <typename Type>
void LinkedList<Type> :: remove()
{
    Node<Type>* ptr = head;
    head = head -> next;
    delete ptr;
    list_size--;
}

/// Inserts the value at the given position

template <typename Type>
void LinkedList<Type> :: insertAt(Type value, int pos)
{
    if(!(0 <= pos && pos <= list_size))
    {
        cout << "Error : Position out of range." << endl;
        return;
    }
    if(pos == 0)
    {
        insert(value);
    }
    else
    {
        Node<Type>* ptr = new Node<Type>();
        ptr -> data = value;
        ptr -> next = nullptr;

        Node<Type>* tmp = head;
        int idx = 0;

        while(idx < pos - 1 && tmp != nullptr)
        {
            tmp = tmp -> next;
            idx++;
        }

        ptr -> next = tmp -> next;
        tmp -> next = ptr;
        list_size++;
    }
}

/// Removes the element at the given position

template <typename Type>
void LinkedList<Type> :: removeAt(int pos)
{
    if(!(0 <= pos && pos < list_size))
    {
        cout << "Error : Position is out of range" << endl;
        return;
    }
    if(pos == 0)
    {
        remove();
    }
    else
    {
        Node<Type>* tmp = head;
        int idx = 0;
        while(idx < pos - 1 && tmp != nullptr)
        {
            tmp = tmp -> next;
            idx++;
        }
        Node<Type>* ptr = tmp -> next;
        tmp -> next = tmp -> next -> next;
        delete ptr;
        list_size--;
    }
}

/// Clears the LinkedList / Removes all elements

template <typename Type>
void LinkedList<Type> :: clear()
{
    while(!empty())
        remove();
}

/// Returns the value at the given position

template <typename Type>
Type LinkedList<Type> :: accessAt(int pos)
{
    if(!(0 <= pos && pos < list_size))
    {
        cout << "Error : Position is out of range" << endl;
    }
    else
    {
        Node<Type>* ptr = head;
        int idx = 0;
        while(idx < pos && ptr != nullptr)
        {
            idx++;
            ptr = ptr -> next;
        }
        return ptr -> data;
    }
}
