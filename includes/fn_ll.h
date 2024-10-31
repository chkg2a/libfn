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

namespace chk {
typedef struct ListNode {
  struct ListNode *next;
  int val;
} *List;

List list_getNode(int);
List list_init();
int list_empty(List);
void list_addFront(List, int);
void list_addRear(List, int);
void list_delFront(List);
void list_delRear(List);
void list_destroy(List);
void list_display(List);
} // namespace chk
#endif // !LINKEDLIST
