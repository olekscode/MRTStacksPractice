#include <stdio.h>
#include "stack.h"

int main()
{
  Stack* st = new_stack();

  int i;
  for (i=0; i<=10; i++)
  {
    push(st, i);
  }

  int size_stack = size(st);
  int top_stack = top(st);

  printf("Top stack = %d\n", top_stack);
  printf("Size stack = %d\n", size_stack);

  while(!is_empty(st))
  {
    int element = pop(st);
    printf("Pop: %d\n", element);
  }

  printf("Is stack empty? %d\n", is_empty(st));
}
