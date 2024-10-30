/*
 * ********************************************
 *
 *
 *    fn_stack.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 18:07 by ChK
 *    Updated: 2024-10-30 18:07 by ChK
 *
 * ********************************************
 */

#ifndef FN_STACK_H
#define FN_STACK_H
#define MAXSIZE 100

namespace chk {
typedef struct stack {
  int data[MAXSIZE];
  int top;
} stack;

void init(stack *);
void push(stack *, int);
int pop(stack *);
int stack_top(stack *);
int stack_empty(stack *);
} // namespace chk
#endif
