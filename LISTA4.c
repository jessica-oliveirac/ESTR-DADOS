-------------------------# Exemplo 2
#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila-1.h"

int main(void) {
  char s[256];
  Fila F = fila(256);
  Pilha P = pilha(256);
  printf("\nFrase? ");
  gets(s);
  for (int i = 0; s[i]; i++)
    if (isalpha(s[i])) {
      enfileira(s[i], F);
      empilha(s[i], P);
    }
  while (!vaziaf(F) && desenfileira(F) == desempilha(P));
  if (vaziaf(F)) puts("A frase e palindroma");
  else puts("A frase nao e palindroma");
  destroif(&F);
  destroip(&P);
  return 0;
}

***************************************************************************************
***************************************************************************************

Ex 1 - Cadeias palíndromas

#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila-1.h"

int main(void) {
  char s[256];
  Fila F = fila(256);
  Pilha P = pilha(256);
  printf("\nFrase? ");
  gets(s);
	
	
  for (int i = 0; s[i]; i++)
    if (isalpha(s[i])) {
      enfileira(s[i], F);
      empilha(s[i], P);
    }
 
 
  while (!vaziaf(F) && toupper(desenfileira(F)) == toupper(desempilha(P)));
  if (vaziaf(F)) puts("A frase e palindroma");
  else puts("A frase nao e palindroma");
  destroif(&F);
  destroip(&P);
  return 0;
}

-----------------------------------------------------------------------------
 2 - Saída de Programa

#include <stdio.h>
#include "fila-1.h"

int main(void) {
  Fila F = fila(5);
  for (int i = 0; i <= 3; i++)
    enfileira('A' + i, F);
  while (!vaziaf(F))
    printf("%c\n", desenfileira(F));
  destroif(&F);
  return 0;
}
-----------------------------------------------------------------------------
  3 - Compartilhamento de CPU

#include <stdio.h>
#include "fila-1.h"
#define TIMESLICE 3 // tempo máximo de uso ininterrupto de CPU
int main(void) {
  Fila F = fila(5);
  enfileira(17, F); // 1º processo requer 7s para concluir sua execução
  enfileira(25, F);
  enfileira(39, F);
  enfileira(46, F); 
  while (!vaziaf(F)) {
    int x = desenfileira(F);
    int p = x / 10;
    int t = x % 10;
    if (t > 3) enfileira(p * 10 + (t - TIMESLICE), F);
    else printf("Processo %d concluido\n", p);
  }
  destroif(&F);
  return 0;
}
-----------------------------------------------------------------------------
