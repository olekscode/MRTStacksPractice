#include <stdio.h>
#include "stack.h"
#include <string.h>

void reverse(char* str, char* other_str)
{
  Stack* characters = new_stack();

  for (int i = 0; i < strlen(str); ++i)
  {
    push(characters, str[i]);
  }

  for (int i = 0; i < strlen(str); ++i) {
    other_str[i] = pop(characters);
  }
}

int main()
{
  char* sentence = "Hello, world!";
  char* reversed;

  reverse(sentence, reversed);

  printf("%s\n", sentence);
  printf("%s\n", reversed);
}
