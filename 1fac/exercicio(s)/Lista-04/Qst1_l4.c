/*Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou inferiores a N.*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	//declara��o de variavel
	int nump = 0, i, n;
	//corpo do programa
	
	printf("Digite um numero para N: ");
	scanf("%d", & n);
	
	for(i=0; i<=n; i+=2)
	{
		printf("%d\n", i);
	}
	
}
