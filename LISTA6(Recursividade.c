1.	Cálculo de fatorial

#include <stdio.h>
int fat(int n) {
	if(n==0)return 1;
	return n*fat(n-1);
}
int main(void) {
	int n;
	printf("Num? ");
	scanf("%d",&n);
	printf("Fat = %d\n",fat(n));
	return 0;
}
-------------------------------------------------------------------------
2.	Cálculo de potência

#include <stdio.h>

float pot(float x,int n) {
  if(n==0) return 1;
  return x*pot(x,n-1);
}
int main(void) {
   float x;
   int n;
   printf("Base e expoente? ");
   scanf("%f %d",&x,&n);
   printf("Pot = %.1f\n",pot(x,n));
   return 0;
}
-------------------------------------------------------------------------
3.	Cálculo de terminal

#include <stdio.h>
int termial(int n) {
   if(n==0)return 0;
return termial(n-1) + n;
}
int main(void) {
  int n;
  printf("Num? ");
  scanf("%d",&n);
  printf("Termial= %d\n",termial(n));
  return 0;
}
-------------------------------------------------------------------------
4.	Cálculo da série harmônica

#include <stdio.h>
float h(int n) {
   if(n==1)return 1;
   return h(n-1)+1.0/n;
}
int main(void) {
   int n;
   printf("Num? ");
   scanf("%d",&n);
   printf("Harmonica = %.2f\n",h(n));
   return 0;
}
-------------------------------------------------------------------------
5.	Contagem progressiva
#include <stdio.h>
void cp(int n) {
   if(n==0)return;
   cp(n-1);
   printf("%d\n",n);
}
int main(void) {
   int n;
   printf("Num? ");
   scanf("%d",&n);
   cp(n);
   return 0;
}

-------------------------------------------------------------------------
6.	Contagem regressiva

#include <stdio.h>
void cr(int n) {
   if(n==0)return;
   printf("%d\n",n);
   cr(n-1);
}
int main(void) {
  int n;
  printf("Num? ");
  scanf("%d",&n);
  cr(n);
  return 0;
}
-------------------------------------------------------------------------
7.	Conversão em binário

#include <stdio.h>
void binario(int n) {
  if(n<2)printf("%d",n);
  else{
  binario(n/2);
  printf("%d",n%2);
  }
}
int main(void) {
  int n;
  printf("Num? ");
  scanf("%d",&n);
  binario(n);
  return 0;
}
-------------------------------------------------------------------------
8.	Função Hanói
-------------------------------------------------------------------------
9.	Par
-------------------------------------------------------------------------
10.	Produto
-------------------------------------------------------------------------
11.	Quociente
-------------------------------------------------------------------------
12.	Resto
-------------------------------------------------------------------------
13.	Quadrado
-------------------------------------------------------------------------
14.	Soma de dígitos
-------------------------------------------------------------------------
15.	Quantidade de dígitos
-------------------------------------------------------------------------
16.	Torres de Hanói
-------------------------------------------------------------------------
17.	Cadeia inversa
-------------------------------------------------------------------------
18.	Cadeia palíndroma
