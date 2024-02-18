#include <iostream>
#include "LinkedList.cpp"

using namespace std;

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
        if(list_int.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        list_int.remove();
    }
    else if(type == "char")
    {
        if(list_char.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        list_char.remove();
    }
    else if(type == "string")
    {
        if(list_str.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
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
        if(list_int.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        cout << "The beginning of the LinkedList is at " << list_int.begin() << endl;
    }
    else if(type == "char")
    {
        if(list_char.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        cout << "The beginning of the LinkedList is at " << list_char.begin() << endl;
    }
    else if(type == "string")
    {
        if(list_str.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
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
        if(list_int.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << list_int.front() << endl;
    }
    else if(type == "char")
    {
        if(list_char.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << list_char.front() << endl;
    }
    else if(type == "string")
    {
        if(list_str.empty())
        {
            cout << "Unable to execute command. The LinkedList is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << list_str.front() << endl;
    }
}

/// Inserts the value at the given position

void InsertAt(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        int value;
        int idx;
        cin >> value >> idx;
        if(!(0 <= idx && idx < list_int.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_int.insertAt(value, idx);
    }
    else if(type == "char")
    {
        char value;
        int idx;
        cin >> value >> idx;
        if(!(0 <= idx && idx < list_char.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_char.insertAt(value, idx);
    }
    else if(type == "string")
    {
        string value;
        int idx;
        cin >> value >> idx;
        if(!(0 <= idx && idx < list_str.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_str.insertAt(value, idx);
    }
    cout << "The value has been added to given position of the LinkedList successfully." << endl;
}

/// Removes the element at the given position

void RemoveAt(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }

    if(type == "int")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_int.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_int.removeAt(idx);
    }
    else if(type == "char")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_char.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_char.removeAt(idx);
    }
    else if(type == "string")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_str.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        list_str.removeAt(idx);
    }
    cout << "The element has been removed from the given position successfully." << endl;
}

/// Returns the value at the given position

void Access(string& type)
{
    if(created == false)
    {
        cout << "There is no existing LinkedList." << endl;
        return;
    }
    if(type == "int")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_int.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        int value = list_int.accessAt(idx);

        cout << "The value at position " << idx << " is " << value << endl;
    }
    else if(type == "char")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_char.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        char value = list_char.accessAt(idx);

        cout << "The value at position " << idx << " is " << value << endl;
    }
    else if(type == "string")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < list_str.size()))
        {
            cout << "Unable to execute command. The index is out of range." << endl;
            return;
        }
        string value = list_str.accessAt(idx);

        cout << "The value at position " << idx << " is " << value << endl;
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
    else if(command == "insertAt")
    {
        InsertAt(type);
    }
    else if(command == "removeAt")
    {
        RemoveAt(type);
    }
    else if(command == "access")
    {
        Access(type);
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
