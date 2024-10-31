/*
 * ********************************************
 *
 *
 *    fn_dll.h
 *
 *    By: ChK <chk@chkg2a.com}>
 *
 *    Created: 2024-10-30 18:05 by ChK
 *    Updated: 2024-10-30 18:05 by ChK
 *
 * ********************************************
 */

#ifndef FN_DLINKEDLIST_H
#define FN_DLINKEDLIST_H

namespace chk {
struct DoubleeListNode {
  struct DoubleeListNode *next;
  int val;
  struct DoubleeListNode *prev;
};
typedef DoubleeListNode *DList;

DList dlist_getNode(int);
DList dlist_init();
int dlist_empty(DList);
void dlist_addFront(DList, int);
void dlist_addRear(DList, int);
void dlist_delFront(DList);
void dlist_delRear(DList);
void dlist_destroy(DList);
void dlist_display(DList);
} // namespace chk

#endif // !LINKEDLIST
