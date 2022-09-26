#ifndef BINARYTREE_TREE_H
#define BINARYTREE_TREE_H

typedef struct struct_node *Node;
typedef struct struct_binary_search_tree *BinarySearchTree;
BinarySearchTree createTree();
void freeTree(BinarySearchTree tree);
void freeNode(Node node);
Node createNode(int info);
int searchNode(BinarySearchTree tree, int info);
int searchNodeRec(BinarySearchTree tree, int info);
void insertNode(BinarySearchTree tree, int info);
void insertNodeRec(Node root, int info);
void drawTree(BinarySearchTree tree, int i);

#endif // BINARYTREE_TREE_H
