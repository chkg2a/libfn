/*
 * ********************************************
 *
 *
 *    fn_queue.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 18:07 by ChK
 *    Updated: 2024-10-30 18:07 by ChK
 *
 * ********************************************
*/


#ifndef FN_QUEUE_H
#define FN_QUEUE_H
#define MAXSIZE 5

typedef struct queue{
  int data[MAXSIZE];
  int F, R;
} queue;

void init(queue *);
void enqueue(queue *, int);
int dequeue(queue *);
int queue_empty(queue *);
void display(queue *);

#endif // !QUEUE
