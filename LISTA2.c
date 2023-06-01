-------------EXEMPLO 2
#include <stdio.h>
#include "pilha.h"

int main(void){
	int n;
	Pilha P = pilha(8* sizeof(int));
	printf("Decimal? ");
	scanf("%d", &n);
	do {
		empilha(n % 2, P);
		n /= 2;
	} while (n > 0);
	printf("Binario: ");

	while (!vaziap(P))
		printf("%d", desempilha(P));
		printf("\n");
	destroip(&P);
	return 0;
}
-----------EXEMPLO 3

#include <stdio.h>
#include "pilha.h"

int main(void){
	char c[513];
	Pilha P = pilha(513);
	printf("Cadeia? ");
	gets(c);
	for (int i = 0; c[i]; i++)
		empilha(c[i], P);
	printf("Inverso: ");
	while (!vaziap(P))
		printf("%c", desempilha(P));
	puts("\n");
	destroip(&P);
	return 0;
}
************************************************************
1.Ordenação crescente

#include <stdio.h>
#include "pilha.h"

int main(void) {
   int qtd;
   int valor;

   Pilha A = pilha(qtd);
   Pilha B = pilha(qtd);
   printf("Quantidade de números: ");
   scanf("%d",&qtd);
	
   for(int i= 0; i<qtd; i++){
		//int valor;
		printf("%dº valor: ", i +1);
		scanf("%d",&valor);
		empilha(valor, A);
	}

	while(!vaziap(A)) {
		 valor = desempilha(A);
		while(!vaziap(B) && topo(B)> valor){
			empilha(desempilha(B), A);}
		empilha(valor, B);
	}

   while(!vaziap(B)){
     empilha(desempilha(B),A);
   }
   while(!vaziap(A)){
     printf("%d ",desempilha(A));
   }
   destroip(&B);
   destroip(&A);
   return 0;
}
--------------------------------------------------------------
2.Ordenação decrescente e sem repetição
#include <stdio.h>
#include "pilha.h"

int main(void){
	int qtd;
	Pilha A = pilha(qtd);
	Pilha B = pilha(qtd);
	printf("Quantidade de números: ");
	scanf("%d", &qtd);
	for(int i = 0; i < qtd; i++){
		int valor;
		printf("Digite o %dº número: ", i + 1);
		scanf("%d", &valor);
		empilha(valor, A);
  }
	while(!vaziap(A)){
		int valor = desempilha(A);
		while(!vaziap(B) && topo(B) < valor){
			empilha(desempilha(B), A);
		}
		if(vaziap(B) || topo(B) != valor){
			empilha(valor, B);
		}
	}
	while(!vaziap(B)){
		empilha(desempilha(B), A);
	}
	while(!vaziap(A)){
		printf("%d ", desempilha(A));
	}
	return 0;
}
--------------------------------------------------------------
3.Inversão de palavras
#include <stdio.h>
#include "pilha.h"

int main(void) {
	char palavra[513];
	Pilha P = pilha(513);
	printf("Frase: ");
	scanf("%[^\n]s", palavra);
	for(int i = 0; palavra[i] != '\0'; i++){
		if(palavra[i] != ' '){
			empilha(palavra[i], P);
		}
	else {
		while(!vaziap(P)){
			printf("%c", desempilha(P));
		}
		printf(" ");
		}
	}
	while(!vaziap(P)){
		printf("%c", desempilha(P));
	}
	puts("\n");
	destroip(&P);
	return 0;
}
--------------------------------------------------------------
4.Balanceamento de parênteses
--------------------------------------------------------------
5.Pilha de strings

#include <stdio.h>
#include "pilha.h"//pilhadechar*

int main(void) {
  Pilha P = pilha(5);
  char s[11];
  for (int i = 1; i <= 3; i++) {
    printf("?");
    gets(s);
    empilha(s, P);
  }
  while (!vaziap(P)) puts(desempilha(P));
  return 0;
}

*************************************************
// pilha.h - implementacao dinamica sequencial de pilha

#include <stdlib.h>

typedef char* Itemp;

typedef struct pilha {
   int    max;
   int    topo;
   Itemp *item;
} *Pilha;

Pilha pilha(int m) {
   Pilha P = malloc(sizeof(struct pilha));
   P->max  = m;
   P->topo = -1;
   P->item = malloc(m*sizeof(Itemp));
   return P;
}

int vaziap(Pilha P) {
   if( P->topo == -1 ) return 1;
   else return 0;
}

int cheiap(Pilha P) {
   if( P->topo == P->max-1 ) return 1;
   else return 0;
}

void empilha(Itemp x, Pilha P) {
   if( cheiap(P) ) { puts("pilha cheia!"); abort(); }
   P->topo++;
   P->item[P->topo] = x;
}

Itemp desempilha(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   Itemp x = P->item[P->topo];
   P->topo--;
   return x; 
}

Itemp topo(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   return P->item[P->topo];
}

void destroip(Pilha *Q) {
   free((*Q)->item);
   free(*Q);
   *Q = NULL;
}
--------------------------------------------------------------
6.Pilha de strings
--------------------------------------------------------------
