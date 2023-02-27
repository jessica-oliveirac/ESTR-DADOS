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
--------------------------------------------------------------
2.Ordenação decrescente e sem repetição
--------------------------------------------------------------
3.Inversão de palavras
--------------------------------------------------------------
4.Balanceamento de parênteses
--------------------------------------------------------------
5.Pilha de strings
--------------------------------------------------------------
6.Pilha de strings
--------------------------------------------------------------
