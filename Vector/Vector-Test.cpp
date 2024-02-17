#include <iostream>
#include "Vector.cpp"

using namespace std;

Vector<int> vec_int;
Vector<char> vec_char;
Vector<string> vec_str;

bool created;

/// Terminates the program

void Terminate()
{
    cout << "Terminating Program." << endl;
    cout << "The program has been successfully terminated" << endl;
    exit(0);
}

/// Creates a Vector

void Create(string& type)
{
    if(created)
    {
        cout << "Error : Vector already created." << endl;
        return;
    }
    cin >> type;

    if(type == "int")
    {
        vec_str.~Vector();
        vec_char.~Vector();
        created = true;
        cout << "A Vector has been successfully created." << endl;
    }
    else if(type == "char")
    {
        vec_str.~Vector();
        vec_int.~Vector();
        created = true;
        cout << "A Vector has been successfully created." << endl;
    }
    else if(type == "string")
    {
        vec_int.~Vector();
        vec_char.~Vector();
        created = true;
        cout << "A Vector has been successfully created." << endl;
    }
    else
    {
        cout << "Incorrect type format given!" << endl;
    }
}

/// Removes all elements from the Vector

void Clear(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        vec_int.clear();
    }
    else if(type == "char")
    {
        vec_char.clear();
    }
    else if(type == "string")
    {
        vec_str.clear();
    }
    cout << "The Vector has been cleared successfully." << endl;
}

/// Returns if the Vector is empty or not


void Empty(string& type)
{
    bool state;
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        state = vec_int.empty();
    }
    else if(type == "char")
    {
        state = vec_char.empty();
    }
    else if(type == "string")
    {
        state = vec_str.empty();
    }

    if(state == true)
    {
        cout << "The Vector is empty." << endl;
    }
    else
    {
        cout << "The Vector is not empty." << endl;
    }
}

/// Returns the size of the Vector

void Size(string& type)
{
    int vec_size;
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        vec_size = vec_int.size();
    }
    else if(type == "char")
    {
        vec_size = vec_char.size();
    }
    else if(type == "string")
    {
        vec_size = vec_str.size();
    }

    cout << "The current size of the Vector " << vec_size << endl;
}

/// Returns the capacity of the Vector

void Capacity(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    int cap;
    if(type == "int")
    {
        cap = vec_int.capacity();
    }
    else if(type == "char")
    {
        cap = vec_char.capacity();
    }
    else if(type == "string")
    {
        cap = vec_str.capacity();
    }
    cout << "The capacity of the Vector is " << cap << endl;

}

/// Returns the address of the beginning of the Vector

void Begin(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        if(vec_int.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The beginning of the Vector is at " << vec_int.begin() << endl;
    }
    else if(type == "char")
    {
        if(vec_char.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The beginning of the Vector is at " << vec_char.begin() << endl;
    }
    else if(type == "string")
    {
        if(vec_str.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The beginning of the Vector is at " << vec_str.begin() << endl;
    }
}

/// Returns the address of the end of the Vector

void End(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        if(vec_int.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The end of the Vector is at " << vec_int.end() << endl;
    }
    else if(type == "char")
    {
        if(vec_char.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The end of the Vector is at " << vec_char.end() << endl;
    }
    else if(type == "string")
    {
        if(vec_str.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The end of the Vector is at " << vec_str.end() << endl;
    }
}

/// Returns the value at the beginning of the Vector

void Front(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        if(vec_int.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the beginning of the Vector is " << vec_int.front() << endl;
    }
    else if(type == "char")
    {
        if(vec_char.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the beginning of the Vector is " << vec_char.front() << endl;
    }
    else if(type == "string")
    {
        if(vec_str.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the beginning of the Vector is " << vec_str.front() << endl;
    }
}

/// Returns the value at the end of the Vector

void Back(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        if(vec_int.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the end of the Vector is " << vec_int.back() << endl;
    }
    else if(type == "char")
    {
        if(vec_char.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the end of the Vector is " << vec_char.back() << endl;
    }
    else if(type == "string")
    {
        if(vec_str.empty())
        {
            cout << "Unable to execute command. Vector is empty." << endl;
            return;
        }
        cout << "The value at the end of the Vector is " << vec_str.back() << endl;
    }
}

/// Returns the value stored at the given position in the Vector

void Access(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < vec_int.size()))
        {
            cout << "The given index is out of range. " << endl;
            return;
        }
        cout << "The value at position " << idx << " is " << vec_int[idx] << endl;
    }
    else if(type == "char")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < vec_char.size()))
        {
            cout << "The given index is out of range. " << endl;
            return;
        }
        cout << "The value at position " << idx << " is " << vec_char[idx] << endl;
    }
    else if(type == "string")
    {
        int idx;
        cin >> idx;
        if(!(0 <= idx && idx < vec_str.size()))
        {
            cout << "The given index is out of range. " << endl;
            return;
        }
        cout << "The value at position " << idx << " is " << vec_str[idx] << endl;
    }
}

/// Inserts the given value at the beginning of the Vector

void Pushfront(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        int value;
        cin >> value;
        vec_int.push_front(value);
    }
    else if(type == "char")
    {
        char value;
        cin >> value;
        vec_char.push_front(value);
    }
    else if(type == "string")
    {
        string value;
        cin >> value;
        vec_str.push_front(value);
    }
     cout << "The value has been added to the beginning of the Vector successfully." << endl;
}

/// Inserts the given value at the end of the Vector

void Pushback(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        int value;
        cin >> value;
        vec_int.push_back(value);
    }
    else if(type == "char")
    {
        char value;
        cin >> value;
        vec_char.push_back(value);
    }
    else if(type == "string")
    {
        string value;
        cin >> value;
        vec_str.push_back(value);
    }
     cout << "The value has been added to the end of the Vector successfully." << endl;
}

/// Removes the first element of the Vector

void Popfront(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        vec_int.pop_front();
    }
    else if(type == "char")
    {
        vec_char.pop_front();
    }
    else if(type == "string")
    {
        vec_str.pop_front();
    }
    cout << "The first element of the Vector has been removed successfully." << endl;
}

/// Removes the last element of the Vector

void Popback(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        vec_int.pop_back();
    }
    else if(type == "char")
    {
        vec_char.pop_back();
    }
    else if(type == "string")
    {
        vec_str.pop_back();
    }
    cout << "The last element of the Vector has been removed successfully." << endl;
}

/// Prints the whole Vector

void Print(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Vector." << endl;
        return;
    }
    if(type == "int")
    {
        cout << "The Vector contains : ";
        int vec_size = vec_int.size();
        for(int i = 0; i < vec_size ; i++)
        {
            cout << vec_int[i] << " ";
        }
        cout << endl;
    }
    else if(type == "char")
    {
        cout << "The Vector contains : ";
        int vec_size = vec_char.size();
        for(int i = 0; i < vec_size ; i++)
        {
            cout << vec_char[i] << " ";
        }
        cout << endl;
    }
    else if(type == "string")
    {
        cout << "The Vector contains : ";
        int vec_size = vec_str.size();
        for(int i = 0; i < vec_size ; i++)
        {
            cout << vec_str[i] << " ";
        }
        cout << endl;
    }
}

/// Processes the current command

void Process_Command(string command, string& type)
{
    if(command == "terminate")
    {
        Terminate();
    }
    else if(command == "create")
    {
        Create(type);
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
    else if(command == "capacity")
    {
        Capacity(type);
    }
    else if(command == "begin")
    {
        Begin(type);
    }
    else if(command == "end")
    {
        End(type);
    }
    else if(command == "front")
    {
        Front(type);
    }
    else if(command == "back")
    {
        Back(type);
    }
    else if(command == "access")
    {
        Access(type);
    }
    else if(command == "popback")
    {
        Popback(type);
    }
    else if(command == "popfront")
    {
        Popfront(type);
    }
    else if(command == "pushback")
    {
        Pushback(type);
    }
    else if(command == "pushfront")
    {
        Pushfront(type);
    }
    else if(command == "print")
    {
        Print(type);
    }
}

/// Testing Vector

void Test()
{
    cout << "Hello, this program was made to test this implementation of Vector. " << endl;
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
