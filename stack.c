#include "stack.h"

// Creating and initializing a new stack
Stack* new_stack()
{
  Stack* st = (Stack*) malloc(sizeof(Stack));
  st->top = -1;
  st->size = 0;
  return st;
}

// Push the element i on the stack st
void push(Stack* st, char i)
{
  st->top++;
  st->size++;
  st->elements[st->top] = i;
}

// Pop the top element from the stack
char pop(Stack* st)
{
  int element = top(st);
  st->top--;
  st->size--;
  return element;
}

// Access the top element of stack st
char top(Stack* st)
{
  if(is_empty(st))
  {
    printf("Error: stack is empty\n");
    exit(EXIT_FAILURE);
  }
  return st->elements[st->top];
}

// Returns the size of stack st
int size(Stack* st)
{
  return st->size;
}

// Checks if the stack st is empty
int is_empty(Stack* st)
{
  return size(st) == 0;
}

// Removes all elements from the stack st
void empty(Stack* st)
{
  while(!is_empty(st))
  {
    pop(st);
  }
}
