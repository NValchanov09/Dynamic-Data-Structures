# Vector

## 1. What is a Vector?
A Vector is a dynamic array with can resize. The Vector has capacity and size. The problem it solves from the normal array is inserting an element. When you insert a new element to an array you have to create an auxiliary array with size 1 more element and copy all elements. The Vector a has a certain capacity (allocated space) which can be used. Each time you add an element you use the capacity of the Vector. If the Vector is currently using the whole capacity (size = capacity) the Vector will double it's capacity and then add the element. Here is an example of a Vector : 👇
![vector](https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/813dcd3d-ca61-4d22-8f1a-490459a8c1e5)

## 2. Vector VS Array

### 2.1. Vector
 - Advantages 👍 :
     - Most of the time it is faster.
     - Has builtin functions / No need to write your own functions.
 - Disadvantages 👎 :
     - Uses large amounts of extra memory - for size of N can use 2*N memory.
     - Most other functions have the same time complexity as the Array.
### 2.2. Array
  - Advantages 👍 :
     - Uses less memory than Vector.
     - Has more simple syntax.
  - Disadvantages 👎 :
     - Uses more time and space at inserting.
     - Doesn't have builtin functions.
   
## 3. The Implementation
The implementation uses the standard logic of a Vector. The source code includes comments.

I have implemented most of the commonly used commands for Vector. Here is table of all the commands which are included :

|Command|Semantic|Time Complexity|Space Complexity|
|-------|--------|---------------|----------------|
|empty()|Returns true / false whether the Vector is empty or not.|O(1)|O(1)|
|size()|Returns the size of the Vector|O(1)|O(1)|
|capacity()|Returns the current capacity of the Vector|O(1)|O(1)|
|begin()|Returns the address of the first element of the Vector|O(1)|O(1)|
|end()|Returns the address of the last element of the Vector|O(1)|O(1)|
|front()|Returns the value at the first element of the Vector|O(1)|O(1)|
|back()|Returns the value at the last element of the Vector|O(1)|O(1)|
|pop_back()|Removes the last element of the Vector|O(1)|O(1)|
|pop_front()|Removes the first element of the Vector|O(N)|O(N)|
|push_back(Type value)|Inserts the given value at the end of the Vector|O(1) / O(N)|O(1) / O(N)| (Because of the Vector logic)
|push_front(Type value)|Inserts the given value at the beginning of the Vector|O(N)|O(1) / O(N)|
|clear()|Removes all elements from the Vector|O(N)|O(1)|
|Vector()|Constructor - Gives initial values to the Vector|O(1)|O(1)|
|~Vector()|Destructor - Deletes the whole Vector|O(N)|O(1)|
