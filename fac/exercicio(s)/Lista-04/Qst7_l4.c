/*Desenvolver um programa no qual o usu�rio entre com v�rios n�meros inteiros e positivos
e imprima o produto dos n�meros �mpares e a soma dos n�meros pares.*/
#include <stdio.h>
#include <stdlib.h>
#define Q 5
int main ()
{
	int num, i = 0, somap = 0,numimp = 1,contn = 0, x=1;

	while(i <= Q)
	{
		printf("digite um numero: ");
		scanf ("%d", &num);
		
		if(num%2 ==1)
			{
				contn ++; // essa parte esta errada
				numimp *= num; // esta parte esta errada
			}
		
		else
		{
			if(num%2 == 0)
		{
			somap += num; // a soma esta ok
		}
		}
		
		i++;
	}
	printf("produto do numeros impares %d", numimp);
	printf("\nsoma do numeros pares %d", somap);
}
