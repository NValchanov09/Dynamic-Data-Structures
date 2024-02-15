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
|insert(Type value)|Inserts the given value to the beginning of the Linked List.|O(1)|O(1)|
|remove()|Removes the first element of the Linked List.|O(1)|O(1)|
|clear()|Removes all elements in the Linked List.|O(N)|O(1)|
|size()|Returns the size of the Linked List.|O(1)|O(1)|
|empty()|Returns true / false whether the Linked List is empty or not.|O(1)|O(1)|
|front()|Returns the value of the first element of the Linked List.|O(1)|O(1)|
|begin()|Returns the address to the first element of the Linked List.|O(1)|O(1)|
|print()|Prints all elements of the Linked List (from the head to the tail).|O(N)|O(1)|
|LinkedList()|Basic Constructor - gives initial values.|O(1)|O(1)|
|~LinkedList()|Basic Deconstructor - deletes the whole Linked List.|O(N)|O(1)|
