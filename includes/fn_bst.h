#ifndef FN_BST_H
#define FN_BST_H

namespace chk {
struct BSTNode {
  struct BSTNode *right;
  int data;
  struct BSTNode *left;
};

typedef struct BSTNode *BST;

BST addtoTree(BST, int);
void preorderTraversal(BST);
void inorderTraversal(BST);
void postorderTraversal(BST);
BST searchTree(BST, int);
BST inorder_successor(BST);
BST searchParent(BST, int);
void deleteNode(BST, BST);
void destroyTree(BST);
} // namespace chk

#endif
