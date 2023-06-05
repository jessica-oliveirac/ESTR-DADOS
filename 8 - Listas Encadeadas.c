1 - Programa para criação e exibição
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
2 - Outra forma de exibição
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no {
   Item item;
   struct no *prox;
} *Lista;

void exibe(Lista I) {
	printf("[");
  while(I != NULL ) {
	 printf("%d", I->item);
		if(I->prox != NULL){
			printf(",");
		}
	 I = I->prox;
	}
	printf("]");
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
3 - Programa para tamanho
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no{
	Item item; 
	struct no *prox;
} *Lista;

int tamanho(Lista L){
	int t =0;
	while(L ) {
	t++;
	L =L->prox;
	}
	return t;
}
Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}
void exibe(Lista I){
	while(I != NULL){
		printf("%d\n", I->item);
		I = I->prox;
	}
}
int main(void) {
	Lista I = no(3, no(1, no(5, NULL)));
	exibe(I);
	printf("\nTamanho = %d",tamanho(I));
	return 0;
}
------------------------------------------------------------------------------------
4 - Soma dos itens da lista
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no{
	Item item; 
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}

void exibe(Lista L){
	printf("[");
	while(L != NULL) {
		printf("%d", L->item);
 		if(L->prox != NULL){
			printf(", ");
		}
    L = L->prox;
 	}
  printf("]");
}

int soma(Lista L){
    int soma = 0;
    while(L != NULL){
	soma += L->item; 
	L = L->prox;
		}
    return soma;
}
int tamanho(Lista L){
	int t =0;
	while(L ) {
	t++;
	L =L->prox;
	}
	return t;
}
int main(void) {
	Lista I = no(3, no(1, no(5, NULL)));
	exibe(I);
	printf("\nSoma = %d", soma(I));
	printf("\nTamanho = %d",tamanho(I));
	return 0;
}
------------------------------------------------------------------------------------
5 - Programa para lista aleatória
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef int Item;
typedef struct no{
	Item item; 
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}
Lista aleatoria(int n,int m){
	Lista L = NULL;
	while(n>0 ) {
		L = no(rand()%m,L);
		n--;
	}
	return L;
}
void exibe(Lista I){
	while(I != NULL){
		printf("%d\n", I->item);
		I = I->prox;
	}
}
int main(void){
	srand(time(NULL));
	Lista A = aleatoria(10,100);
	exibe(A);
	return 0;
}
------------------------------------------------------------------------------------
6 - Criação de lista contendo um intervalo
------------------------------------------------------------------------------------
7 - Programa para anexação
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no{
	Item item; 
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}
void anexa(Lista *A,Lista B){
	if(!B )return;
	while(*A )
		A = &(*A)->prox;
	*A = B;
}
void exibe(Lista I){
	while(I != NULL){
		printf("%d\n", I->item);
		I = I->prox;
	}
}
int	main(void){
	Lista H = no(4,no(2,NULL));
	Lista I = no(3,no(1,no(5,NULL)));
	printf("H = "); exibe(H);
	printf("I = "); exibe(I);
	printf("Pressione enter");
	getchar();
	anexa(&H,I);
	printf("H = "); exibe(H);
	printf("I = "); exibe(I);
	return 0;
}
------------------------------------------------------------------------------------
8 - Último item
------------------------------------------------------------------------------------
9 - Item máximo
------------------------------------------------------------------------------------
10 - Pertinência
------------------------------------------------------------------------------------
11 - Inversão
------------------------------------------------------------------------------------
12 - Intervalo
------------------------------------------------------------------------------------
13 - Tamanho
------------------------------------------------------------------------------------
14 - Soma

------------------------------------------------------------------------------------
15 - Clone

------------------------------------------------------------------------------------
16 - Aleatória

------------------------------------------------------------------------------------
17 - Último

------------------------------------------------------------------------------------
18 - Pertinência

------------------------------------------------------------------------------------
19 - Enésimo

------------------------------------------------------------------------------------
20 - Mínimo
------------------------------------------------------------------------------------
21 - Ordenada

------------------------------------------------------------------------------------
22 - Igualdade

------------------------------------------------------------------------------------
23 - Contagem

------------------------------------------------------------------------------------
24 - Substituição







