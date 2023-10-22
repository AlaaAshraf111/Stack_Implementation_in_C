# Stack_Implementation_in_C
Implementing stack data structure using array and linkedlist in C language
with this repository https://github.com/AlaaAshraf111/Implementing-Linkedlist-Types-in-C-language-/tree/main/Single%20Linkedlist

## What is Stack?
A stack is a linear data structure with some rules to manipulate.
Metaphoricallyو It could be rules applied on linear data structures, such array or linkedlist, where the insertion of a new element and removal of an existing element takes place at the same end represented as the top of the stack.
### LIFO( Last In First Out ):
This strategy states that the element that is inserted last will come out first. You can take a pile of plates kept on top of each other as a real-life example. The plate which we put last is on the top and since we remove the plate that is at the top, we can say that the plate that was put last comes out first.
## Basic Operations on Stack
In order to make manipulations in a stack,
1. PUSH operation to insert an element into the stack
2. POP operation to take the last element from the stack then remove it
3. PEEK operation to read the last element from the stack without removing it
4. IsEmpty operation to check if the stack is empty or not
5. IsFull operation to check if the stack is full or not
6. Size operation to calculate the size of data stored in the stack
7. Display operation to display elements of the stack

![Stack-660x566](https://github.com/AlaaAshraf111/Stack_Implementation_in_C/assets/99663447/53d3d3ff-3354-4823-8b30-008fb4665e6c)

## Types of Stacks
- Fixed Size Stack (In this repository, it is implemented using an array)
  A fixed size stack has a fixed size and cannot grow or shrink dynamically. If the stack is
  full and an attempt is made to add an element to it, an overflow error occurs. If the stack is
  empty and an attempt is made to remove an element from it, an underflow error occurs.
- Dynamic Size Stack (In this repository, it is implementated using a single linkedlist)
  A dynamic size stack can grow or shrink dynamically. When the stack is full, it automatically
  increases its size to accommodate the new element, and when the stack is empty, it decreases
  its  size.
  In addition to these two main types, there are several other variations of Stacks.
