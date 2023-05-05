1.	Formação de árvore de busca binária

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
----------------------------------------------------------------------------------
6.	Teste da remoção de raiz
----------------------------------------------------------------------------------
7.	Remoção de itens arbitrários da árvore
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
