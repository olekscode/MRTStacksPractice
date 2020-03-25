// Creating and initializing a new stack
Stack* new_stack();

// Push the element i on the stack st
void push(Stack* st, int i);

// Pop the top element from the stack st
int pop(Stack* st);

// Access the top element of stack st
int top(Stack* st);

// Returns the size of stack st
int size(Stack* st);

// Checks if the stack st is empty
int is_empty(Stack* st);

// Removes all elements from the stack st
void empty(Stack* st);
