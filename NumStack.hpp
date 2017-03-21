#ifndef NUMSTACK_HPP_INCLUDED
#define NUMSTACK_HPP_INCLUDED

#include <iostream>

template <class T>
class NumStack
{
private:
   T *stackArray;  // Pointer to the stack array
   int stackSize;    // The stack size
   int top;          // Indicates the top of the stack
public:
   // Constructor
   NumStack(int);

   // Copy constructor
   NumStack(const NumStack &);

   // Destructor
   ~NumStack();

   // Stack operations

   void push(T);
   void pop(T &);
   bool isFull() const;
   bool isEmpty() const;
};


//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************
template <class T>
NumStack<T>::NumStack(int size)
{
   stackArray = new T[size];
   stackSize = size;
   top = -1;
}

//***********************************************
// Copy constructor                             *
//***********************************************
template <class T>
NumStack<T>::NumStack(const NumStack &obj)
{
   // Create the stack array.
   if (obj.stackSize > 0)
      stackArray = new T[obj.stackSize];
   else
      stackArray = nullptr;

   // Copy the stackSize attribute.
   stackSize = obj.stackSize;

   // Copy the stack contents.
   for (int count = 0; count < stackSize; count++)
      stackArray[count] = obj.stackArray[count];

   // Set the top of the stack.
   top = obj.top;
}

//***********************************************
// Destructor                                   *
//***********************************************
template <class T>
NumStack<T>::~NumStack()
{
   delete [] stackArray;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************
template <class T>
void NumStack<T>::push(T num)
{
   if (isFull())
   {
      std::cout << "The stack is full.\n";
   }
   else
   {
      top++;
      stackArray[top] = num;
   }
}

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************
template <class T>
void NumStack<T>::pop(T &num)
{
   if (NumStack<T>::isEmpty())
   {
      std::cout << "The stack is empty.\n";
   }
   else
   {
      num = stackArray[top];
      top--;
   }
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************
template <class T>
bool NumStack<T>::isFull() const
{
   bool status;

   if (top == stackSize - 1)
      status = true;
   else
      status = false;

   return status;
}

//****************************************************
// Member function isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************
template <class T>
bool NumStack<T>::isEmpty() const
{
   bool status;

   if (top == -1)
      status = true;
   else
      status = false;

   return status;
}

#endif // NUMSTACK_HPP_INCLUDED