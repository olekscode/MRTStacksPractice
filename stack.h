#include <stdlib.h>
#include <stdio.h>

// Structure defining a stack
typedef struct
{
  char elements[100];
  int top;
  int size;
} Stack;

// Creating and initializing a new stack
Stack* new_stack();

// Push the element i on the stack st
void push(Stack* st, char i);

// Pop the top element from the stack st
char pop(Stack* st);

// Access the top element of stack st
char top(Stack* st);

// Returns the size of stack st
int size(Stack* st);

// Checks if the stack st is empty
int is_empty(Stack* st);

// Removes all elements from the stack st
void empty(Stack* st);
