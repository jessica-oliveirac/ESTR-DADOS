#*******************EXEMPLOS*****************************
(EXERCÍCIO 1)
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

char *posfixa(char *e) {
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for (int i = 0; e[i]; i++)
		if (isdigit(e[i])) s[j++] = e[i];
	else if(strchr("+*-/", e[i])) empilha(e[i], P);
	else if(e[i] == ')') s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}
int main(void)
{
	char e[513];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	return 0;
}

----------------------------------------------
(EXERCÍCIO 2)
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o) {
	switch (o) {
		case '(': return 0;
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 2;
	}
	return -1;	// operadorinválido!
}
char *posfixa(char *e)
{
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for (int i = 0; e[i]; i++)
		if (e[i] == '(') empilha('(', P);
		else if (isdigit(e[i])) s[j++] = e[i];
		else if (strchr("+-/*", e[i])){
			while (!vaziap(P) && prio(topo(P)) >= prio(e[i]))
				s[j++] = desempilha(P);
			empilha(e[i], P);
	}
	else if (e[i] == ')'){
		while (topo(P) != '(')
			s[j++] = desempilha(P);
		desempilha(P);
	}

	while (!vaziap(P))
		s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}

int main(void)
{
	char e[513];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	return 0;
}

----------------------------------------------


----------------------------------------------


----------------------------------------------


----------------------------------------------

----------------------------------------------




=====================EXERCÍCIOS===================================================
1.Teste do programa
#Digite e teste o programado Exemplo4,com as seguintes expressões infixas(coloque 
#todos os parênteses necessários para que o programa funcione corretamente):
# 2*3+8/4     
(2*3)+(8/4)
# 9–5–1
  (9–5)–1
# 2+3*4-5
  (2+3)*(4-5)
# (3+4)*(8-6)/2
  (3+4)*(8-6)/2
----------------------------------------------
  #Como proceder quando a expressão infixa não está completamente parentesiada?

2.Teste do programa
#Altere o programado Exemplo4, substituindo a função posfixa() pela segunda versão. 
#Em seguida, teste-o com as seguintes expressões infixas:
# 2*3+8/4
# 9–5–1
# 2+3*4-5
# (3+4)*(8-6)/2

----------------------------------------------
3.Programa completo

----------------------------------------------
4.Expressões booleanas
----------------------------------------------
5.Infixa para prefixa
----------------------------------------------
6.Avaliação da forma prefixa
----------------------------------------------

----------------------------------------------
ex 3
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int valor(char *e)
{
	Pilha P = pilha(256);
	for (int i = 0; e[i]; i++)
		if (isdigit(e[i])) empilha(e[i]- '0', P);
		else{
		  int y = desempilha(P);
			printf("%d",y);
		  int x = desempilha(P);
			printf("%d",x);
		  switch (e[i]) {
				case '+': empilha(x + y, P); break;
				case '-': empilha(x - y, P); break;
				case '*': empilha(x * y, P); break;
				case '/': empilha(x / y, P); break;
			}
		}
	int z = desempilha(P);
	destroip(&P);
	return z;
}

int prio(char o) {
	switch (o) {
		case '(': return 0;
		case '+':
		case '-': return 1;
		case '*':
		case '/': return 2;
	}
	return -1;	// operadorinválido!
}
char *posfixa(char *e)
{
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for (int i = 0; e[i]; i++)
		if (e[i] == '(') empilha('(', P);
		else if (isdigit(e[i])) s[j++] = e[i];
		else if (strchr("+-/*", e[i])){
			while (!vaziap(P) && prio(topo(P)) >= prio(e[i]))
				s[j++] = desempilha(P);
			empilha(e[i], P);
	}
	else if (e[i] == ')'){
		while (topo(P) != '(')
			s[j++] = desempilha(P);
		desempilha(P);
	}

	while (!vaziap(P))
		s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}

int main(void)
{
	char e[513];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	printf("Valor numerico: %d\n",valor(posfixa(e)));
	return 0;
}

----------------------------------------------
