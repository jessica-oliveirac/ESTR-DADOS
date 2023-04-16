1.IMC
#include <stdio.h>
#include <math.h>

int main(){
	float peso, altura, imc;
	printf("Qual o peso e a altura? ");
	scanf("%f %f", &peso, &altura);
	imc = peso/pow(altura,2);
	printf("IMC = %.1f\n",imc);
	if(imc<=30) printf("Nao esta obesa!\n");
	else printf("Esta obesa!\n");
	return 0;

}
-----------------------------------------------------------------
2.Erro
#include <stdio.h>
int main(void){
	printf("%d\n", 0678);
	return 0;
	
}

****Certo
#include <stdio.h>
int main(void){
	int a = 678;
	printf("%04d\n", a);
	return 0;
	
}
-----------------------------------------------------------------
3.Bytes
-----------------------------------------------------------------
4.Conversão
-----------------------------------------------------------------
5.ASCII
-----------------------------------------------------------------
6.Formatação
-----------------------------------------------------------------
7.Média
-----------------------------------------------------------------
8.Consumo
-----------------------------------------------------------------
9.Temperatura
-----------------------------------------------------------------
10.Distância
