/*Escrever um programa que encontre o quinto n�mero maior que 1000,
cuja divis�o por 11 tenha resto 5.*/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i=1000,cont=0,num;
	
	while(cont!=5)
	{
		if(i%11==5)
		{
			cont++;
			num=i;
		}
		i++;
	}
	printf("quinto numero = %d",num);
}
