#include <stdio.h>
#include "stack.h"
#include <string.h>

int main()
{
  char* cs = "Hello World";

  Stack* st = new_stack();

  int i;
  for (i = 0; i < strlen(cs); ++i)
{
    push(st, cs[i]);
}

  int size_stack = size(st);
  char top_stack = top(st);

  printf("Top stack = %c\n", top_stack);
  printf("Size stack = %d\n", size_stack);

  while(!is_empty(st))
  {
    char element = pop(st);
    printf("Pop: %c\n", element);
  }

  printf("Is stack empty? %d\n", is_empty(st));
}
