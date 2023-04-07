1.Programa para criação e exibição
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no {
   Item item;
   struct no *prox;
} *Lista;

void exibe(Lista I) {
  while(I != NULL ) {
	 printf("%d\n", I->item);
	 I = I->prox;
}
}
Lista no(Item x,Lista p) {
   Lista n =malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
}


int main(void) {
   Lista I = no(3,no(1,no(5,NULL)));
   exibe(I);
   return 0;
}
------------------------------------------------------------------------------------

2.Outra forma de exibição
3.Programa para tamanho
4.Soma dos itens da lista
5.Programa para lista aleatória
