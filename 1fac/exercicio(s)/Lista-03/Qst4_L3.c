/*QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas as seguintes informa��es:
a) A quantidade de valores negativos digitados;
b) A m�dia dos valores positivos.*/

//COMANDO PARA CRIAR UMA CONSTANTE
#define Q 5
#include<stdio.h>
int main()
{
	int contn,contp,i;
	float med,s,num;
	i = contn = contp = med = s =0;
	do
	{
		printf("digite um numero: ");
		scanf("%f",&num);
		if(num<0)
		{
			contn++;
		}
		else
		{
			s += num;
			contp++;
			med = s/contp;
		}
		i++;
	}while(i<Q);
	printf("quantidade valores negativo %d\n", contn);
	printf("media positivo %.2f\n", med);
}

