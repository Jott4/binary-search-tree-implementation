#include <stdio.h>
#include <stdlib.h>
#include "binary-search-tree.h"

struct struct_node
{
  int data;
  struct Node *left;
  struct Node *right;
};

struct struct_binary_search_tree
{
  struct Node *root;
};

BinarySearchTree createTree()
{
  BinarySearchTree tree = (BinarySearchTree)malloc(sizeof(struct struct_binary_search_tree));
  tree->root = NULL;
  return tree;
};

void freeTree(BinarySearchTree tree)
{
  if (tree != NULL)
  {
    freeNode(tree->root);
    free(tree);
  }
}

void freeNode(Node node)
{
  if (node != NULL)
  {
    freeNode(node->left);
    freeNode(node->right);
    free(node);
  }
}

Node createNode(int info)
{
  Node node = (Node)malloc(sizeof(struct struct_node));
  node->data = info;
  node->left = NULL;
  node->right = NULL;
  return node;
}

int searchNode(BinarySearchTree tree, int info)
{
  Node node = tree->root;

  while (node != NULL)
  {
    if (node->data == info)
    {
      return 1;
    }

    if (info > node->data)
    {
      node = node->right;
    }
    else
    {
      node = node->left;
    }
  }

  return 0;
}

int searchNodeRec(BinarySearchTree tree, int info)
{
  Node root = tree->root;
  if (root == NULL)
  {
    return 0;
  }
  if (root->data == info)
  {
    return 1;
  }
  if (info < root->data)
  {
    return searchNodeRec(root->left, info);
  }
  return searchNodeRec(root->right, info);
}

void insertNode(BinarySearchTree tree, int info)
{
  Node node = createNode(info);
  if (tree->root == NULL)
  {
    tree->root = node;
  }
  else
  {
    Node aux = tree->root;
    while (aux != NULL)
    {
      if (aux->data > info)
      {
        if (aux->left == NULL)
        {
          aux->left = node;
          break;
        }
        aux = aux->left;
      }
      else
      {
        if (aux->right == NULL)
        {
          aux->right = node;
          break;
        }
        aux = aux->right;
      }
    }
  }
}

void insertNodeRec(Node root, int info)
{
  if (root->data > info)
  {
    if (root->left == NULL)
    {
      root->left = createNode(info);
    }
    else
    {
      insertNodeRec(root->left, info);
    }
  }
  else
  {
    if (root->right == NULL)
    {
      root->right = createNode(info);
    }
    else
    {
      insertNodeRec(root->right, info);
    }
  }
}