# Vector

## 1. What is a Vector?
A Vector is a dynamic array with can resize. The Vector has capacity and size. The problem it solves from the normal array is inserting an element. When you insert a new element to an array you have to create an auxiliary array with size 1 more element and copy all elements. The Vector a has a certain capacity (allocated space) which can be used. Each time you add an element you use the capacity of the Vector. If the Vector is currently using the whole capacity (size = capacity) the Vector will double it's capacity and then add the element. Here is an example of a Vector : 👇
![vector](https://github.com/NValchanov09/Dynamic-Data-Structures/assets/158312030/813dcd3d-ca61-4d22-8f1a-490459a8c1e5)
