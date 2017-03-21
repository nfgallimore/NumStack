/*
   COPYRIGHT (C) 2017 Student Name (UANET ID ) All rights reserved.
   CSII assignment
   Author.  Student Name
            zippy@zips.uakron.edu
   Version. 1.01 09.09.2017
   Purpose: This program ...
*/
#include "Stack.hpp"

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
// pre: no parameters                           *
// post: return the  new stack entry of sum     *
//***********************************************

void Stack::add()
{
   int num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
// pre: no parameters                           *
// post: return the  new stack entry of diff    *
//***********************************************

void Stack::sub()
{
   int num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}

void Stack::mult()
{
   int num, product;
   pop(product);
   pop(num);
   product *= num;
}


void Stack::div()
{
   int num, quotient;
   pop(quotient);
   pop(num);
   quotient /= num;
}

void Stack::addAll()
{
   int num, sum;
   pop(sum);
   while (!isEmpty()) {
      pop(num);
      sum += num;
   }
}

void Stack::multAll()
{
   int num, product;
   pop(product);
   while (!isEmpty()) {
      pop(product);
      product *= num;
   }
}

