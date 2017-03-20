#ifndef STACK_HPP
#define STACK_HPP
#include "NumStack.hpp"

class Stack : public NumStack
{
public:
   // Constructor
   Stack(int s) : NumStack(s) {}

   // MathStack operations
   void add();
   void sub();
   void mult();
   void div();
   void addAll();
   void multAll();
};

#endif // STACK_HPP_INCLUDED
