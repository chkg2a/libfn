/*
 * ********************************************
 *
 *
 *    fn_ll.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 18:06 by ChK
 *    Updated: 2024-10-30 18:06 by ChK
 *
 * ********************************************
*/


#ifndef FN_LINKEDLIST_H
#define FN_LINKEDLIST_H

typedef struct Node {
  struct Node * next;
  int data;
} * List;

List list_getNode(int);
List list_init();
int list_empty(List);
void list_addFront(List,int);
void list_addRear(List,int);
void list_delFront(List);
void list_delRear(List);
void list_destroy(List);
void list_display(List);

#endif // !LINKEDLIST
