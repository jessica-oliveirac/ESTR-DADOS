1.	Formação de árvore de busca binária
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n =malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

void ins(Item x, Arv*A) {
	if(*A ==NULL ) *A = arv(NULL,x,NULL);
	else if(x <=(*A)->item )ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
}

void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int	main(void) {
	Arv I = NULL;
	ins(7,&I);
	ins(4,&I);
	ins(6,&I);
	ins(11,&I);
	ins(8,&I);
	ins(2,&I);
	ins(5,&I);
	ins(0,&I);
	ins(10,&I);
	ins(3,&I);
	ins(1,&I);
	ins(9,&I);
	exibe(I,0);
	return 0;
}
----------------------------------------------------------------------------------
2.	Inserção de itens específicos
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n =malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

void ins(Item x, Arv*A) {
	if(*A ==NULL ) *A = arv(NULL,x,NULL);
	else if(x <=(*A)->item )ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
}
void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int	main(void) {
	Arv I = NULL;
	ins(7,&I);
	ins(4,&I);
	ins(6,&I);
	ins(8,&I);
	ins(2,&I);
	ins(5,&I);
	ins(3,&I);
	ins(1,&I);
	exibe(I,0);
return 0;
}
----------------------------------------------------------------------------------
3.	Inserção de itens digitados pelo usuário
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n =malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

void ins(Item x, Arv*A) {
	if(*A ==NULL ) *A = arv(NULL,x,NULL);
	else if(x <=(*A)->item )ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
} 

void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int main(void) {
	Arv I = NULL;
	Item x;
	puts("\nPara sair, digite um inteiro negativo!\n");
	while(1) {
		printf("Item a ser inserido? ");
		scanf("%d",&x);
		if(x<0 )break;
		ins(x,&I);
	}
	exibe(I,0);
	return 0;
}
----------------------------------------------------------------------------------
4.	Busca em árvore de busca binária
----------------------------------------------------------------------------------
5.	Remoção de itens máximos
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n =malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

void ins(Item x, Arv*A) {
	if(*A ==NULL ) *A = arv(NULL,x,NULL);
	else if(x <=(*A)->item )ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
} 

void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

Item remmax(Arv *A) {
	if( *A== NULL) abort();
	if( (*A)->dir== NULL) {
	Arv n = *A;
	Item x = n->item;
	*A = n->esq;
	free(n);
	return x;
	}
	return remmax(&(*A)->dir);
}

int main(void) {
int v[9] = {71,43,64,92,80,27,58,35,16};
	Arv A = NULL;
	for(int i=0;i<9;i++)ins(v[i],&A);
	puts("Inicial");
	exibe(A,0);
	for(int i=0; i<9; i++) {
		puts("Depois de remover o maximo");
		remmax(&A);
		exibe(A,0);
		getchar();
	}
	return 0;
}

----------------------------------------------------------------------------------
6.	Teste da remoção de raiz
----------------------------------------------------------------------------------
7.	Remoção de itens arbitrários da árvore
#include<stdio.h>
#include<stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv*esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e,Item x,Arv d) {
	Arv n =malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

void ins(Item x, Arv*A) {
	if(*A ==NULL ) *A = arv(NULL,x,NULL);
	else if(x <=(*A)->item )ins(x,&(*A)->esq);
	else ins(x,&(*A)->dir);
} 

void exibe(Arv A,int n) {
	if(A==NULL )return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

Item remmax(Arv *A) {
	if( *A == NULL) abort();
	if( (*A)->dir== NULL) {
		Arv n = *A;
		Item x = n->item;
		*A = n->esq;
		free(n);
		return x;
	}
	return remmax(&(*A)->dir);
}
void remraiz(Arv*A) {
	if( *A== NULL) abort();
	Arv n =*A;
	if(n->esq == NULL )*A = n->dir;
	else if(n->dir == NULL )*A = n->esq;
	else n->item = remmax(&n->esq);
	if(n !=*A )free(n);
}
void rem(Item x, Arv *A) {
	if( *A== NULL) return;
	if( x == (*A)->item) remraiz(A);
	else if( x< (*A)->item) rem(x,&(*A)->esq);
	else rem(x,&(*A)->dir);
}
int main(void) {
	int v[9] = {71,43,64,92,80,27,58,35,16};
	Arv A = NULL;
	for(int i=0;i<9;i++)ins(v[i],&A);
	puts("Inicial");
	exibe(A,0);
	for(int i=0; i<9; i++) {
		printf("Depois de remover o item %d\n",v[i]);
		rem(v[i],&A);
		exibe(A,0);
		getchar();
	}
	return 0;
}
----------------------------------------------------------------------------------
8.	Inserção sem repetição
----------------------------------------------------------------------------------
9.	Remoção de todas as ocorrências
----------------------------------------------------------------------------------
10.	Exibição decrescente
----------------------------------------------------------------------------------
11.	Item máximo
----------------------------------------------------------------------------------
12.	Item mínimo
----------------------------------------------------------------------------------
