/*1.	Programa para criação e exibição de árvore binária*/
#include<stdio.h>
#include<stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv *esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n = malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}



void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int main(void){
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	exibe(I,0);
	return 0;
}
--------------------------------------------------------------------------------
2.	Teste com outra árvore

#include<stdio.h>
#include<stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv *esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n = malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}



void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int main(void){
	Arv I = arv(arv(arv(NULL,4, NULL),2,arv(NULL,5,NULL)),1,arv(NULL,3,NULL));
	exibe(I,0);
	return 0;
}
--------------------------------------------------------------------------------
3.	Teste da função completa()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Item;
typedef struct arv{
	struct arv *esq;
	Item item;
	struct arv *dir;
} *Arv;


Arv arv(Arv e,Item x,Arv d) {
	Arv n = malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

Arv completa(int h) {
	if( h==0) return NULL;
	return arv(completa(h-1), rand()%100, completa(h-1));
}

void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int main(void){
	srand(time(NULL));
	Arv A = completa(3);
	exibe(A,0);
	return 0;
}
--------------------------------------------------------------------------------
4.	Árvore binária balanceada, com n itens aleatórios

--------------------------------------------------------------------------------
5.	Árvore binária aleatória, com n itens aleatórios 
--------------------------------------------------------------------------------
6.	Quantidade de nós numa árvore binária 
--------------------------------------------------------------------------------
7.	Soma dos itens numa árvore binária 
--------------------------------------------------------------------------------
8.	Quantidade de folhas numa árvore binária 
--------------------------------------------------------------------------------
9.	Altura de uma árvore binária 
--------------------------------------------------------------------------------
10.	Clone de uma árvore binária 
--------------------------------------------------------------------------------
11.	Pertinência em árvore binária 
--------------------------------------------------------------------------------
12.	Percursos 
--------------------------------------------------------------------------------
13.	Pré-ordem 
--------------------------------------------------------------------------------
14.	Em-ordem 
--------------------------------------------------------------------------------
15.	Pós-ordem 
--------------------------------------------------------------------------------
16.	Em-ordem inversa 
--------------------------------------------------------------------------------
17.	Poda de árvore binária 
--------------------------------------------------------------------------------
18.	Destruição de árvore binária 
--------------------------------------------------------------------------------
19.	Contagem 
--------------------------------------------------------------------------------
20.	Igualdade 
--------------------------------------------------------------------------------
21.	Espelho I
--------------------------------------------------------------------------------
22.	Espelho II
--------------------------------------------------------------------------------
23.	Balanceada II

