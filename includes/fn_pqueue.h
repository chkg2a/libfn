/*
 * ********************************************
 *
 *
 *    fn_pqueue.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 18:06 by ChK
 *    Updated: 2024-10-30 18:06 by ChK
 *
 * ********************************************
 */

#ifndef FN_PQUEUE_H
#define FN_PQUEUE_H
#define MAXSIZE 5

namespace chk {
typedef struct PNode {
  struct PNode *next;
  int data;
  int priority;
  struct Node *last;
} *pqueue;

pqueue init();
void enqueue(pqueue, int, int);
int dequeue(pqueue);
int pqueue_empty(pqueue);
void display(pqueue);
} // namespace chk
#endif // !QUEUE
