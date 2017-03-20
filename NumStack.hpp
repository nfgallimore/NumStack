#ifndef NUMSTACK_HPP_INCLUDED
#define NUMSTACK_HPP_INCLUDED

class NumStack
{
private:
   int *stackArray;  // Pointer to the stack array
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

   void push(int);
   void pop(int &);
   bool isFull() const;
   bool isEmpty() const;
};

#endif // NUMSTACK_HPP_INCLUDED
