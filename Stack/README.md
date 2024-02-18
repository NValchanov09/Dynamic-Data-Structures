# Stack 📚

## 1. What is a stack?
A stack is a linear data structures that follows a particular order of operations.

The order is called **FILO**(First In Last Out) or **LIFO**(Last In First Out). 

This means that the first inserted element will be removed last.
Here's an example of a stack :
![stack](https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/f5ac625e-df1e-4c9f-99f7-46194c963e23)

The stack exists in real life. Here are some examples of a real-life stack : 👇
 - Books / Plates stacked one over another
 - Clothes stacked in a wardrobe
 - Undo / Redo functions in different softwares

> [!NOTE]
> Stack is used in programming and in real-life. It is one of the most used data structures you just don't know it. 🙂

## 2. The stack in programming
### 2.1. Memory Allocation
A stack is used in memory allocation. It is used to keep track of which memory blocks are in use. 
### 2.2. Recursion 
A stack is used in recursion. It keeps track of the order to execute recursive calls.
### 2.3. Delimiter Checking
Delimiter checking is a process that checks if a string of opening and closing parentheses is correct.
A *correct* string of parentheses means :
 - For every opening bracket there is a closing bracket matching it.
 - There isn't a closing bracket that doesn't match another opening bracket.


Examples of *correct* string of parentheses : ✔️
 - "()()()"
 - "(()())"
 - "()"
 - "" (empty string)
 - "(()(()))"

Examples of not *correct* string of parentheses : ✖️
 - ")("
 - "("
 - ")"
 - "(()"
 - "(()(()"

### 2.4. Find next smaller / greater element in an array

### 2.5. Check if a Binary Tree is a BST

## 3. The Implementation
The implementation uses the standard FILO / LIFO order.
The source code (Stack.cpp) includes comments.

I have implemented most of the commonly used commands for Stack. Here is a table of all commands which are included : 👇
|Command|Semantic|Time complexity|Auxiliary space|
|-------|--------|---------------|---------------|
|empty()|Returns true / false if the Stack is empty or not|O(1)|O(1)|
|size()|Returns the size of the Stack|O(1)|O(1)|
|push(Type value)|Inserts the given value at the top of the Stack|O(1)|O(1)|
|pop()|Removes the value at the top of the Stack|O(1)|O(1)|
|top()|Returns the value at the top of the Stack|O(1)|O(1)|
|begin()|Returns the address of the top of the Stack|O(1)|O(1)|
|clear()|Removes all elements of the Stack|O(N)|O(1)|
|Stack()|Constructor - Gives initial values to the Stack|O(1)|O(1)|
|~Stack()|Destructor - Destructs the Stack|O(N)|O(1)|

## 4. How to use the tester?
The tester can be found in the LinkedList-Test.cpp file. Compile the program. You will be greated with a message. Use the instructions below to use the tester right : ❓
|Command|Semantic|
|-------|--------|
|create <Type>|Creates a Linked List with the given type (Works with "int", "char" and "string" only).|
|terminate|Terminates the tester.|
|clear|Removes all elements from the Stack.|
|empty|Returns true / false if the Stack is empty or not.|
|size|Returns the size of the Stack.|
|push <value>|Inserts the given value at the top of the Stack.|
|pop|Removes the value at the top of the Stack.|
|top|Returns the value at the top of the Stack.|
|begin|Returns the address of the value at the top of the Stack.|

> [!CAUTION]
> The tester only works with integer, character and string types ❗

> [!IMPORTANT]
> To use the tester you should also download the source code for the Dynamic Stack(Stack.cpp). You also have to put them in the same folder and then run Stack-Test.cpp. 💜

Here's an example of a conversationn between the tester and the user. 👇
