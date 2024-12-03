#include "fn_bst.h"
#include <iostream>

using std::cout;

namespace chk {
BST addtoTree(BST root, int val) {
  if (root == NULL) {
    root = new TreeNode;
    root->val = val;
    root->left = NULL;
    root->right = NULL;
  } else {
    if (val < root->val) {
      root->left = addtoTree(root->left, val);
    } else {
      root->right = addtoTree(root->right, val);
    }
  }
  return root;
}
void preorderTraversal(BST root) {
  if (root) {
    cout << root->val << ' ';
    preorderTraversal(root->left);
    preorderTraversal(root->right);
  }
};
void inorderTraversal(BST root) {
  if (root) {
    inorderTraversal(root->left);
    cout << root->val << ' ';
    inorderTraversal(root->right);
  }
};
void postorderTraversal(BST root) {
  if (root) {
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << ' ';
  }
};
BST searchTree(BST root, int val) {
  if (root == NULL) {
    return NULL;
  }
  if (val < root->val) {
    return searchTree(root->left, val);
  } else if (val > root->val) {
    return searchTree(root->right, val);
  } else {
    return root;
  }
};
BST inorder_successor(BST root) {
  BST temp = root->right;
  if (temp->right) {
    while (temp->left) {
      temp = temp->left;
    }
  }
  return temp;
};

/*BST searchParent(BST root, int val) {*/
/*  BST node, temp1, temp2;*/
/*  node = searchTree(root, val);*/
/*  static BST parent;*/
/*  if (root->val != node->val) {*/
/*    temp1 = root->left;*/
/*    temp2 = root->right;*/
/*    parent = root;*/
/*    if (temp1 && node->val < root->val) {*/
/*      if ((temp1->val) != node->val) {*/
/*        parent = temp1;*/
/*        searchParent(temp1, node->val);*/
/*      } else*/
/*        return parent;*/
/*    } else if (temp2 && node->val >= root->val) {*/
/*      if ((temp2->val) != node->val) {*/
/*        parent = temp2;*/
/*        searchParent(temp2, node->val);*/
/*      } else*/
/*        return parent;*/
/*    } else if (node == root)*/
/*      return NULL;*/
/*  }*/
/*  return parent;*/
/*};*/

BST searchParent(BST root, int val) {
  if (root == NULL || root->val == val) {
    return NULL;
  }
  if ((root->left && root->left->val == val) ||
      (root->right && root->right->val == val)) {
    return root;
  }
  if (val < root->val) {
    return searchParent(root->left, val);
  } else {
    return searchParent(root->right, val);
  }
}

void deleteNode(BST root, BST node) {
  BST successor, parent;
  if (node->right == NULL && node->left == NULL) {
    parent = searchParent(root, node->val);
    if (parent->left == node) {
      parent->left = NULL;
    } else {
      parent->right = NULL;
    }
    delete node;
  } else if ((node->right == NULL && node->left != NULL) ||
             (node->right != NULL && node->left == NULL)) {
    BST childNode;
    parent = searchParent(root, node->val);
    if (node->right != NULL) {
      childNode = node->right;
    } else {
      childNode = node->left;
    }
    if (parent->right == node) {
      parent->right = childNode;
    } else {
      parent->left = childNode;
    }
    delete node;
  } else {
    successor = inorder_successor(root);
    parent = searchParent(root, successor->val);
    node->val = successor->val;
    deleteNode(parent, successor);
  }
};
void destroyTree(BST root) {
  if (root) {
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
  }
};
} // namespace chk
