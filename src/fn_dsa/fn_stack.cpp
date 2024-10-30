/*
 * ********************************************
 *
 *
 *    fn_stack.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 21:33 by ChK
 *    Updated: 2024-10-30 21:33 by ChK
 *
 * ********************************************
*/

#include "fn_stack.h"
#include <iostream>

using std::cout, std::endl, std::cerr;

namespace chk {
void init(stack *s) { s->top = -1; }

void push(stack *s, int data) {
  if (s->top == MAXSIZE - 1) {
    cerr << "stack overflow";
    exit(1);
  }
  s->data[++(s->top)] = data;
}

int stack_empty(stack *s) { return s->top == -1; }

int pop(stack *s) {
  if (stack_empty(s)) {
    cerr << "stack is empty";
    exit(1);
  }
  return s->data[s->top--];
}

int stack_top(stack *s) {
  if (stack_empty(s)) {
    cerr << "stack is empty";
    exit(1);
  }
  return s->data[s->top];
}
} // namespace chk
