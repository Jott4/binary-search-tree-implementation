#include <stdio.h>
#include <stdlib.h>
#include "binary-search-tree.c"

int main()
{
  BinarySearchTree a1 = createTree();

  // INSERÇÕES, REMOÇÕES E BUSCA
  insertNode(a1, 50);
  insertNode(a1, 10);
  insertNode(a1, 99);
  insertNode(a1, 5);
  insertNode(a1, 30);
  insertNode(a1, 25);
  insertNode(a1, 45);
  insertNode(a1, 60);

  // insertNode(a1, 5);
  // insertNode(a1, 10);
  // insertNode(a1, 25);
  // insertNode(a1, 30);
  // insertNode(a1, 45);
  // insertNode(a1, 50);
  // insertNode(a1, 99);

  // insertNode(a1, 99);
  // insertNode(a1, 50);
  // insertNode(a1, 45);
  // insertNode(a1, 30);
  // insertNode(a1, 25);
  // insertNode(a1, 10);
  // insertNode(a1, 5);

  printf("Resultado: %d\n", searchNode(a1, 50));
  printf("Resultado: %d\n", searchNode(a1, 51));
  printf("Resultado: %d\n", searchNode(a1, 10));
  printf("Resultado: %d\n", searchNode(a1, 11));
  printf("Resultado: %d\n", searchNode(a1, 99));
  printf("Resultado: %d\n", searchNode(a1, 100));
  printf("Resultado: %d\n", searchNode(a1, 5));
  printf("Resultado: %d\n", searchNode(a1, 6));
  printf("Resultado: %d\n", searchNode(a1, 30));
  printf("Resultado: %d\n", searchNode(a1, 31));
  printf("Resultado: %d\n", searchNode(a1, 25));
  printf("Resultado: %d\n", searchNode(a1, 26));
  printf("Resultado: %d\n", searchNode(a1, 45));
  printf("Resultado: %d\n", searchNode(a1, 46));

  // percorre_pre_ordem(a1);
  // percorre_em_ordem(a1);
  // percorre_pos_ordem(a1);

  // printf("A arvore tem %d nos\n", quantidade_nos(a1));
  // printf("A altura da arvore eh: %d\n", altura_arvore(a1));

  // desenha_arvore(a1);
  // remove_arvore(a1, 45);
  // remove_arvore(a1, 25);
  // remove_arvore(a1, 5);

  // remove_arvore(a1, 99);

  // remove_arvore(a1, 10);
  // remove_arvore(a1, 30);

  // remove_arvore(a1, 50);
  // desenha_arvore(a1);

  // libera_arvore(a1);
  printf("Ok\n");
  return 0;
}