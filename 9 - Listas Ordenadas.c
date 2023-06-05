1 - Programa para inserção em lista ordenada
#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
} *Lista;

Lista no(Item x,Lista p) {
	Lista n = malloc(sizeof(struct no));
	n->item =x;
	n->prox =p;
	return n;
}
void ins(Item x,Lista *L) {
	while( *L != NULL && (*L)->item < x)
		L = &(*L)->prox;
	*L = no(x,*L);
}
void exibe(Lista I){
	while(I != NULL){
		printf("%d ", I->item);
		I = I->prox;
	}
}
int main(void) {
	Lista I =NULL;
	ins(4,&I);
	ins(1,&I);
	ins(3,&I);
	ins(5,&I);
	ins(2,&I);
	exibe(I);
	return 0;
}

------------------------------------------------------------------------------------
2 - Inserção iterativa sem repetição
------------------------------------------------------------------------------------
3 - Inserção recursiva
------------------------------------------------------------------------------------
4 - Inserção recursiva sem repetição
------------------------------------------------------------------------------------
5 - Exibição recursiva direta
------------------------------------------------------------------------------------
6 - Exibição recursiva inversa
------------------------------------------------------------------------------------
7 - Programa para remoção em lista ordenada
------------------------------------------------------------------------------------
8 - Remoção de todas as ocorrências
------------------------------------------------------------------------------------
9 - Programa para verificação de pertinência em lista ordenada
------------------------------------------------------------------------------------

10 - Verificação de pertinência recursiva
------------------------------------------------------------------------------------
11 - Ordenada simplesmente crescente
------------------------------------------------------------------------------------
12 - Ordenada estritamente crescente
------------------------------------------------------------------------------------
13 - Ordenada simplesmente decrescente
------------------------------------------------------------------------------------
14 - Ordenada estritamente decrescente
