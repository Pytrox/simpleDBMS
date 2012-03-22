#ifndef stack_h
#define stack_h
int stack_int_push(int val, int** head);
int stack_int_pop(int** head);
int stack_int_peek(int** head);
int stack_int_size(int* head);
int stack_int_free_all(int** head);
#endif
