# Linked List




## 1. What is a linked list?

A linked list is a linear data structure. However the linked list doesn't use a contiguous memory, it uses the idea of "linking".

"Linking" consists of connecting each element with the next using pointers. This means we don't need to use contiguous memory cells. 

<ul class="comments_list"><img src = "https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/bc6290e2-f54c-4436-bff5-080bef0ca72e" style = " display:flex; justify-content: center; align-items: center; width: 800px;"/></ul>
<!--
<img src = "https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/23220bba-fe69-40b6-b292-825a9acbd115" style = "width : 1000px;"/>
-->

## 2. Linked List VS Array

### 2.1. Array
 - Advantages :
   - Contiguous memory locations makes the access to an element easy by using address calculations - O(1) time complexity.
   - Uses less memory - O(N) memory.
 - Disadvantages :
   - Insertion and deletion of an element take longer - O(N) time complexity and O(N) memory.
   - The size of an array is fixed.

### 2.2. Linked List
 - Advantages :
   - Fast insertion and deletion of an element - O(1) time complexity and O(1) memory.
   - A linked list has dynamic size.
 - Disadvantages :
   - Accessing an element requires to traverse the whole linked list - O(N) time complexity.
   - Uses 2 times more memory (to store pointers to the next element) - O(2*N) memory.

  >[!NOTE]
  > Linked Lists and Arrays are both very similar and very different. They use different amounts of memory and time for each operation.
  >
  > You should choose the data strucutures which helps you solve the problem.

## To summarise :
  
  >[!IMPORTANT]
  > Using a Linked List or an Array depends on the problem!


## 3. The Implementation
The implementation uses the standard logic of a Linked List. 
The source code includes comments.

I have implemented most of the commonly used commands for Linked List. Here is table of all the commands which are included :
|Name of the command|Semantic|Time complexity|Space Complexity|
|-------------------|--------|---------------|----------------|
|insert(Type value)|Inserts the value to the beginning of the Linked List.|O(1)|O(1)|
|remove()|Removes the first element of the Linked List.|O(1)|O(1)|
|accessAt(int pos)|Returns the value at position pos|O(N)|O(1)|
|insertAt(Type value, int pos)|Inserts the value at position pos|O(N)|O(1)|
|removeAt(int pos)|Removes the element at position pos|O(N)|O(1)|
|clear()|Removes all elements in the Linked List.|O(N)|O(1)|
|size()|Returns the size of the Linked List.|O(1)|O(1)|
|empty()|Returns true / false whether the Linked List is empty or not.|O(1)|O(1)|
|front()|Returns the value of the first element of the Linked List.|O(1)|O(1)|
|begin()|Returns the address to the first element of the Linked List.|O(1)|O(1)|
|LinkedList()|Basic Constructor - gives initial values.|O(1)|O(1)|
|~LinkedList()|Basic Destructor - deletes the whole Linked List.|O(N)|O(1)|


## 4. How to use the tester?

The tester can be found in the LinkedList-Test.cpp file. Compile the program. You will be greated with a message. 
Use the instructions below to use the tester right :
|Command|Semantic|
|-------|--------|
|create \<Type\>|Creates a Linked List with the given type (Works with "int", "char" and "string" only).|
|terminate|Terminates the tester|
|insert \<value\>|Inserts the value to the beginning of the Linked List.|
|remove|Removes the first element of the Linked List.|
|accessAt \<pos\>|Returns the value at position pos.|
|insertAt \<value\> \<pos\>|Inserts the value at position pos.|
|removeAt \<pos\>|Removes the element at position pos.|
|clear|Removes all elements in the Linked List.|
|size|Returns the size of the Linked List.|
|empty|Returns true / false whether the Linked List is empty or not.|
|front|Returns the value of the first element.|
|begin|Returns the address of the Linked List|
|print|Prints all elements of the Linked List|

> [!CAUTION]
> The tester only works with integer, character and string types

Here's an example of a conversationn between the tester and the user.


<ul class="comments_list"><img src = "https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/4783b388-730b-4c9b-970c-7bb5ab382e33" style = " display:flex; justify-content: center; align-items: center; width: 750px;"/></ul>
