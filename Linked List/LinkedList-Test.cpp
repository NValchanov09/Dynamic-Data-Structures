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
    Node<Type>* begin();
    void insert(Type);
    void remove();
    void clear();
    void print();
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
Node<Type>* LinkedList<Type> :: begin()
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

/// Clears the LinkedList / Removes all elements

template <typename Type>
void LinkedList<Type> :: clear()
{
    while(!empty())
        remove();
}

/// Prints the LinkedList

template <typename Type>
void LinkedList<Type> :: print()
{
    Node<Type>* ptr = head;
    while(ptr != nullptr)
    {
        Type data = ptr -> data;
        cout << data << " ";
        ptr = ptr -> next;
    }
}

LinkedList<int> list_int;
LinkedList<string> list_str;
LinkedList<char> list_char;

bool created;

/// Terminates the program

void Terminate()
{
    cout << "Terminating Program." << endl;
    cout << "The program has been successfully terminated" << endl;
    exit(0);
}

/// Creates a LinkedList

void Create_LinkedList(string& type)
{
    cin >> type;

    if(type == "int")
    {
        list_str.~LinkedList();
        list_char.~LinkedList();
        created = true;
        cout << "A LinkedList has been successfully created." << endl;
    }
    else if(type == "char")
    {
        list_str.~LinkedList();
        list_int.~LinkedList();
        created = true;
        cout << "A LinkedList has been successfully created." << endl;
    }
    else if(type == "string")
    {
        list_int.~LinkedList();
        list_char.~LinkedList();
        created = true;
        cout << "A LinkedList has been successfully created." << endl;
    }
    else
    {
        cout << "Incorrect type format given!" << endl;
    }
}

/// Removes all objects from the LinkedList

void Clear(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        list_int.clear();
    }
    else if(type == "char")
    {
        list_char.clear();
    }
    else if(type == "string")
    {
        list_str.clear();
    }

    cout << "The LinkedList has been cleared successfully." << endl;
}

/// Returns if the LinkedList is empty

void Empty(string& type)
{
    bool state;
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        state = list_int.empty();
    }
    else if(type == "char")
    {
        state = list_char.empty();
    }
    else if(type == "string")
    {
        state = list_str.empty();
    }

    if(state == true)
    {
        cout << "The Linked List is empty." << endl;
    }
    else
    {
        cout << "The Linked List is not empty." << endl;
    }
}

/// Returns the size of the LinkedList

void Size(string& type)
{
    int list_size;
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        list_size = list_int.size();
    }
    else if(type == "char")
    {
        list_size = list_char.size();
    }
    else if(type == "string")
    {
        list_size = list_str.size();
    }

    cout << "The current size of the LinkedList " << list_size << endl;
}

/// Inserts the given value at the beginning

void Insert(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        int value;
        cin >> value;
        list_int.insert(value);
    }
    else if(type == "char")
    {
        char value;
        cin >> value;
        list_char.insert(value);
    }
    else if(type == "string")
    {
        string value;
        cin >> value;
        list_str.insert(value);
    }
    cout << "The value has been added to the beginning of the LinkedList successfully." << endl;
}

/// Removes the first element

void Remove(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        list_int.remove();
    }
    else if(type == "char")
    {
        list_char.remove();
    }
    else if(type == "string")
    {
        list_str.remove();
    }
    cout << "The first element has been removed successfully." << endl;
}

/// Returns a pointer to the beginning of the LinkedList

void Begin(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        cout << "The beginning of the LinkedList is at " << list_int.begin() << endl;
    }
    else if(type == "char")
    {
        cout << "The beginning of the LinkedList is at " << list_char.begin() << endl;
    }
    else if(type == "string")
    {
        cout << "The beginning of the LinkedList is at " << list_str.begin() << endl;
    }
}

/// Returns the value of the first element of the LinkedList

void Front(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        cout << "The value of the first element is " << list_int.front() << endl;
    }
    else if(type == "char")
    {
        cout << "The value of the first element is " << list_char.front() << endl;
    }
    else if(type == "string")
    {
        cout << "The value of the first element is " << list_str.front() << endl;
    }
}

/// Print the whole LinkedList

void Print(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }

    bool lamp = false;

    if(type == "int")
    {
        if(!list_int.empty())
        {
            lamp = true;
            cout << "The LinkedList contains : " << endl;
            list_int.print();
        }
    }
    else if(type == "char")
    {
        if(!list_char.empty())
        {
            lamp = true;
            cout << "The LinkedList contains : " << endl;
            list_char.print();
        }
    }
    else if(type == "string")
    {
        if(!list_str.empty())
        {
            lamp = true;
            cout << "The LinkedList contains : " << endl;
            list_str.print();
        }
    }
    if(lamp == false)
    {
        cout << "The LinkedList is empty." << endl;
    }
}

/// Process the current command

void Process_Command(string command, string& type)
{
    if(command == "terminate")
    {
        Terminate();
    }
    else if(command == "create")
    {
        Create_LinkedList(type);
    }
    else if(command == "clear")
    {
        Clear(type);
    }
    else if(command == "empty")
    {
        Empty(type);
    }
    else if(command == "size")
    {
        Size(type);
    }
    else if(command == "insert")
    {
        Insert(type);
    }
    else if(command == "remove")
    {
        Remove(type);
    }
    else if(command == "front")
    {
        Front(type);
    }
    else if(command == "begin")
    {
        Begin(type);
    }
    else if(command == "print")
    {
        Print(type);
    }
    else
    {
        cout << "Incorrect command format!" << endl;
    }
}

/// Testing LinkedList


void Test()
{
    cout << "Hello, this program was made to test this implementation of Linked List. " << endl;
    cout << "Use the directory on \"How to use the tester?\". " << endl;

    string command, type;

    while(true)
    {
        cout << "Please, enter your command : " << endl << endl;
        cin >> command;
        Process_Command(command, type);
        cout << endl;
    }
}

int main()
{
    Test();
	return 0;
}
