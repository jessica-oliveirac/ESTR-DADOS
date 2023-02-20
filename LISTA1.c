01 - Índice de massa corporal [ Versão 1]
-----------------------------------------
02 - Índice de massa corporal [ Versão 2]
-----------------------------------------
03 - Rodízio de veículos
-----------------------------------------
04 - Fatorial
-----------------------------------------
05 - Soma de dígitos
-----------------------------------------
06 - Adivinhação
-----------------------------------------
07 - A função fatorial
-----------------------------------------
08 - Gráfico de barras
-----------------------------------------
09 - Senha!
-----------------------------------------
10 - Ponto!
-----------------------------------------
11 - Funcionamento
-----------------------------------------
12 - Passagem por valor
-----------------------------------------
13 - Passagem por referência
-----------------------------------------
14 - Média de uma sequência de números

-----------------------------------------
15 - Uma lista de números

#include <stdio.h>
#include <stdlib.h>

typedef struct no *Ptr;
struct no { int item; Ptr prox; };
Ptr no(int x, Ptr p) {
  Ptr n = malloc(sizeof(struct no));
  n->item = x;
  n->prox = p;
  return n;
}

int main(void) {

  Ptr p = no(3,no(1,no(5,NULL)));

  while( p != NULL ) {
    printf("%d\n",p->item);
    p = p->prox;
  }
  return 0;
}
