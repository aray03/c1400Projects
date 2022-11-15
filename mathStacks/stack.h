#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

void make_empty(void);
bool is_empty(void);
int is_full(void);
void push(int i);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);
