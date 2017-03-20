/*
   COPYRIGHT (C) 2017 Student Name (UANET ID ) All rights reserved.
   CSII assignment
   Author.  Student Name
            zippy@zips.uakron.edu
   Version. 1.01 09.09.2017
   Purpose: This program ...
*/
// Implementation file for the NumStack class
#include <iostream>
#include "NumStack.hpp"


//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************

NumStack::NumStack(int size)
{
   stackArray = new int[size];
   stackSize = size;
   top = -1;
}

//***********************************************
// Copy constructor                             *
//***********************************************
NumStack::NumStack(const NumStack &obj)
{
   // Create the stack array.
   if (obj.stackSize > 0)
      stackArray = new int[obj.stackSize];
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

NumStack::~NumStack()
{
   delete [] stackArray;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

void NumStack::push(int num)
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

void NumStack::pop(int &num)
{
   if (isEmpty())
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

bool NumStack::isFull() const
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

bool NumStack::isEmpty() const
{
   bool status;

   if (top == -1)
      status = true;
   else
      status = false;

   return status;
}
