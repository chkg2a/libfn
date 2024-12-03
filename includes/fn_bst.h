#ifndef FN_BST_H
#define FN_BST_H

namespace chk {
struct TreeNode {
  struct TreeNode *right;
  int val;
  struct TreeNode *left;
};

typedef struct TreeNode *BST;

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
