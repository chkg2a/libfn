/*
 * ********************************************
 *
 *
 *    fn_queue.cpp
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 21:07 by ChK
 *    Updated: 2024-10-30 21:07 by ChK
 *
 * ********************************************
*/

#include <iostream>
#include "fn_queue.h"

using std::cout, std::endl;

namespace chk{
void init(queue *q) {
  q->F = -1;
  q->R = -1;
}

int queue_empty(queue *q) { return q->F == -1; }

void enqueue(queue *q, int data) {
  if (q->F == q->R + 1 || (q->F == 0 && q->R == MAXSIZE - 1)) {
    cout << "Queue overflow";
    exit(1);
  }
  if (q->R == -1 && q->F == -1) {
    q->F = 0;
    q->R = 0;
  } else if (q->R == MAXSIZE - 1) {
    q->R = 0;
  } else {
    q->R++;
  }
  q->data[q->R] = data;
}

int dequeue(queue *q) {
  if (queue_empty(q)) {
    q->F = -1;
    q->R = -1;
    return -1;
  }
  int ele = q->data[q->F];
  if(q->F == q->R){
    q->F = -1;
    q->R = -1;
    return -1;
  }
  if (q->R == 0 && q->F == MAXSIZE - 1){
    q->F = -1;
    q->R = -1;
  } else if (q->F == MAXSIZE - 1) {
    q->F = 0;
  } else {
    q->F++;
  }
  return ele;
}

void display(queue *q) {
  int F = q->F;
  if (queue_empty(q)) {
    cout << "null";
    return;
  }
  while (F != q->R) {
    cout << q->data[F] << "-";
    F++;
    if (F == MAXSIZE) {
      F = 0;
    }
  }
  cout << q->data[F];
}
}
