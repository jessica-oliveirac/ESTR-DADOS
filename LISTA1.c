#01 - Índice de massa corporal [ Versão 1]

#include<stdio.h>
#include<math.h>
int main(void){
    float p, a, i;
    printf("Peso e altura? ");
    scanf("%f %f",&p,&a);
    i = p/pow(a,2);
    printf("IMC = %.2f\n",i);
    return 0;
}
-----------------------------------------
02 - Índice de massa corporal [ Versão 2]

#include<stdio.h>
#include<math.h>
int main(void){
    float p,a,i;
    printf("Peso e altura? ");
    scanf("%f %f",&p,&a);
    i = p/pow(a,2);
    printf("IMC = %.2f\n",i);
    if(i<18.5) puts("Magra");
    else if(i>30) puts("Obesa");
    else puts("Normal");
    return 0;
}
-----------------------------------------
03 - Rodízio de veículos

#include<stdio.h>
int main(void){
    int p;
    printf("Placa? ");
    scanf("%d",&p);
    switch( p%10 ) {
        case 1: case 2: puts("Segunda-feira"); break;
        case 3: case 4: puts("Terca-feira");   break;
        case 5: case 6: puts("Quarta-feira");  break;
        case 7: case 8: puts("Quinta-feira");  break;
        default:puts("Sexta-feira");
    }
    return 0;
}
-----------------------------------------
04 - Fatorial

#include<stdio.h>
int main(void){
    int n, f;
    printf("Numero? ");
    scanf("%d",&n);
    f = 1;
    for(int i=2; i<=n; i++)
        f *= i;
    printf("Fatorial: %d\n",f);
    return 0;
}
-----------------------------------------
05 - Soma de dígitos

#include<stdio.h>
int main(void){
    int n;
    printf("Numero? ");
    scanf("%d",&n);
    int s = 0;
    while(n>0){
        s += n%10;
        n /= 10;
    }
    printf("Somadosdigitos=%d\n",s);
    return 0;
}
-----------------------------------------
06 - Adivinhação

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    srand(time(NULL));
    int c, n = rand() %7 + 1;
    do {
        printf("Chut e entre 1 e 7: ");
        scanf("%d", &c);
        if(c<n) puts("Baixo!");
        else if( c>n ) puts("Alto!");
    } while ( n!=c );
    puts("Acertou!");
    return 0;
}
-----------------------------------------
07 - A função fatorial

#include<stdio.h>
int fat(int n){
    int f = 1;
    for(int i=2; i<=n; i++) f *= i;
    return f;
}
int main(void) {
    printf("Fatorial do 5: %d\n", fat(5));
    return 0;
}
-----------------------------------------
08 - Gráfico de barras

#include<stdio.h>
void barras(int v[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<v[i]; j++)
            putchar(220);
        putchar('\n');
    }
}

int main(void) {
    int a[4] = {3,4,2,1};
    int b[3] = {9,4,7};
    barras (a,4);
    getchar();
    barras (b,3);
    return 0;
}
-----------------------------------------
09 - Senha!

#include<stdio.h>
#include<string.h>
int main(void) {
    char s[256];
    printf("Senha?");
    gets (s);
    if(strcmp(s,"abracadabra")==0)puts("Ok!");
    else puts("Senha invalida!");
    return 0;
}
-----------------------------------------
10 - Ponto!
  
#include<stdio.h>
typedef struct {float x; float y;} Ponto;
int main(void) {
    Ponto p = {1.5,2.5};
    printf("(%.1f,%.1f)\n",p.x,p.y);
    return 0;
}
-----------------------------------------
11 - Funcionamento

#include <stdio.h>
int main(void) {
    int v = 5; // variável simples
    int *p;    // variável ponteiro
    p = &v;
    *p =*p + 2;
    printf("v=%d, *p=%d\n",v,*p);
    return 0;
}
-----------------------------------------
12 - Passagem por valor

#include <stdio.h>

void troca(int a, int b){
	int c = a;
	a = b;
	b = c;
}


int main(void){
	int v = 5;	// variável simples
	int *p;	// variável ponteiro
	p = &v;
	*p = *p + 2;
	printf("v=%d, *p=%d\n", v, *p);
	return 0;
}
-----------------------------------------
13 - Passagem por referência

#include <stdio.h>

void troca(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
int main(void){
	int v = 5;	// variável simples
	int *p;	// variável ponteiro
	p = &v;
	*p = *p + 2;
	printf("v=%d, *p=%d\n", v, *p);
	return 0;
}

-----------------------------------------
14 - Média de uma sequência de números

#include<stdio.h>
#include<stdlib.h>
float media(float v[], int n){
    float s = 0;
    for(int i=0; i<n; i++)
        s += v[i];
    return s/n;
}

int main(void){
    int n;
    printf("Quantidade de numeros? ");
    scanf("%d",&n);
    float *v = malloc(n*sizeof(float));
    for(int i=0; i<n; i++) {
    printf("%do numero? ",i+1);
    scanf("%f",&v[i]);
    }
    printf("Media=%.2f\n",media(v,n));
    return 0;
}
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
