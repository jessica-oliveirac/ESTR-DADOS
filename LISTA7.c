1.	Teste da função bsort()
#include <stdio.h>

void troca(int v[],int i,int j) {
	int x = v[i];
	v[i]= v[j];
	v[j]= x;
}

void bsort(int v[],int n) {
   for(int i=1; i<n; i++)
     for(int j=0; j<n-i; j++)
		if(v[j]>v[j+1] )
		  troca(v,j,j+1);
}

void exibe(int v[], int n){
	for(int i=1; i<n; i++)
     printf("%d ", v[i]);
}
int main(void){
	int v[10] ={83,31,91,46,27,20,96,25,96,80};
	bsort(v,10);
	exibe(v,10);
	return 0;
}  
-------------------------------------------
2.	A função empurra()
-------------------------------------------
3.	Versão recursiva de bubble sort
-------------------------------------------
4.	Teste da função intercala()
-------------------------------------------
5.	Teste da função msort()
-------------------------------------------
6.	Preenchimento aleatório
-------------------------------------------
7.	Comparação entre bsort()e msort()
-------------------------------------------
8.	Desempenho de msort()para vetores muito grandes
-------------------------------------------
9.	Teste da função lsearch()
#include <stdio.h>
int lsearch(int x,int v[],int n) {
   for(int i=0; i<n; i++)
	  if(x == v[i] )
		return 1;
   return 0;
}
int main(void) {
   int v[8] = {66,80,31,48,27,75,19,52};
	printf("27: %d\n", lsearch(27,v,8));
	printf("51: %d\n", lsearch(51,v,8));
	return 0;
}
-------------------------------------------
10.	Teste da função bsearch()
#include <stdio.h>
int bsearch(int x,int v[],int n) {
   int p =0;
   int u =n-1;
   while(p<=u ) {
      int m = (p+u)/2;
      if(x==v[m] )return 1;
      if(x<v[m] )u = m-1;
      else p = m+1; 
   }
   return 0;
}

int main(void) {
   int v[8] ={19,27,31,48,52,66,75,80};
   printf("27: %d\n", bsearch(27,v,8));
   printf("51: %d\n", bsearch(51,v,8));
   return 0;
}
-------------------------------------------
11.	Versão recursiva de busca linear

-------------------------------------------
12.	Versão recursiva de busca binária
