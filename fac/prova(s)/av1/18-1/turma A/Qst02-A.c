/*Quest�o 02 [2,0 pontos]:
Fa�a um programa que leia uma
data (representada por 3 inteiros � dia, m�s e ano)
e informe se � v�lida ou n�o.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano;
	
	printf("Entre com a data - dia mes ano: ");
	scanf("%d %d %d", &dia,&mes,&ano);
	
	if((dia <= 31)&&(dia >= 1))
	{
		if((mes <= 12)&&(mes >= 1))
		{
			printf("Data e valida!");
		}
		else
		{
			printf("Data informada nao e valida :(");
		}
	}
	else
	{
		printf("Data informada nao e valida :(");
	}
}


