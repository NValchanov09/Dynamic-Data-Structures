#include <iostream>
#include "Stack.cpp"

using namespace std;

Stack<int> stack_int;
Stack<string> stack_str;
Stack<char> stack_char;

bool created;

/// Terminates the program

void Terminate()
{
    cout << "Terminating Program." << endl;
    cout << "The program has been successfully terminated" << endl;
    exit(0);
}

/// Creates a Stack

void Create(string& type)
{
    cin >> type;

    if(type == "int")
    {
        stack_str.~Stack();
        stack_char.~Stack();
        created = true;
        cout << "A Stack has been successfully created." << endl;
    }
    else if(type == "char")
    {
        stack_str.~Stack();
        stack_int.~Stack();
        created = true;
        cout << "A Stack has been successfully created." << endl;
    }
    else if(type == "string")
    {
        stack_int.~Stack();
        stack_char.~Stack();
        created = true;
        cout << "A Stack has been successfully created." << endl;
    }
    else
    {
        cout << "Incorrect type format given!" << endl;
    }
}

/// Removes all objects from the Stack

void Clear(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        stack_int.clear();
    }
    else if(type == "char")
    {
        stack_char.clear();
    }
    else if(type == "string")
    {
        stack_str.clear();
    }

    cout << "The Stack has been cleared successfully." << endl;
}

/// Returns if the Stack is empty

void Empty(string& type)
{
    bool state;
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        state = stack_int.empty();
    }
    else if(type == "char")
    {
        state = stack_char.empty();
    }
    else if(type == "string")
    {
        state = stack_str.empty();
    }

    if(state == true)
    {
        cout << "The Stack is empty." << endl;
    }
    else
    {
        cout << "The Stack is not empty." << endl;
    }
}

/// Returns the size of the Stack

void Size(string& type)
{
    int stack_size;
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        stack_size = stack_int.size();
    }
    else if(type == "char")
    {
        stack_size = stack_char.size();
    }
    else if(type == "string")
    {
        stack_size = stack_str.size();
    }

    cout << "The current size of the Stack " << stack_size << endl;
}

/// Pushes the given value at top of the Stack

void Push(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        int value;
        cin >> value;
        stack_int.push(value);
    }
    else if(type == "char")
    {
        char value;
        cin >> value;
        stack_char.push(value);
    }
    else if(type == "string")
    {
        string value;
        cin >> value;
        stack_str.push(value);
    }
    cout << "The value has been added to the beginning of the Stack successfully." << endl;
}

/// Removes the first element

void Pop(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        stack_int.pop();
    }
    else if(type == "char")
    {
        stack_char.pop();
    }
    else if(type == "string")
    {
        stack_str.pop();
    }
    cout << "The first element has been popd successfully." << endl;
}

/// Returns a pointer to the beginning of the Stack

void Begin(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        if(stack_int.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The beginning of the Stack is at " << stack_int.begin() << endl;
    }
    else if(type == "char")
    {
        if(stack_char.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The beginning of the Stack is at " << stack_char.begin() << endl;
    }
    else if(type == "string")
    {
        if(stack_str.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The beginning of the Stack is at " << stack_str.begin() << endl;
    }
}

/// Returns the value of the first element of the Stack

void Top(string& type)
{
    if(created == false)
    {
        cout << "There is no existing Stack." << endl;
        return;
    }
    if(type == "int")
    {
        if(stack_int.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << stack_int.top() << endl;
    }
    else if(type == "char")
    {
        if(stack_char.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << stack_char.top() << endl;
    }
    else if(type == "string")
    {
        if(stack_str.empty())
        {
            cout << "Unable to execute command. Stack is empty." << endl;
            return;
        }
        cout << "The value of the first element is " << stack_str.top() << endl;
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
    else if(command == "push")
    {
        Push(type);
    }
    else if(command == "pop")
    {
        Pop(type);
    }
    else if(command == "top")
    {
        Top(type);
    }
    else if(command == "begin")
    {
        Begin(type);
    }
    else
    {
        cout << "Incorrect command format!" << endl;
    }
}

/// Testing Stack

void Test()
{
    cout << "Hello, this program was made to test this implementation of Stack. " << endl;
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
