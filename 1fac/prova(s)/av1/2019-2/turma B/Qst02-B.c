/*
	Quest�o 02 [2,5 pontos]:
Construir um programa que, dado um n�mero inteiro n
fornecido pelo usu�rio, exiba uma sequ�ncia de
elementos, distribu�dos em linhas, como nos exemplos
a seguir:
*/
#include <stdio.h>
int main()
{
	int n,i,j,axu;
	printf("informe n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		axu=i;
		for(j=1;j<=n;j++)
		{
			if(axu>0)
			{
				printf(" %d ",axu);
				axu--;
			}
			else
			{
				printf(" %d ",axu);
			}
		}
		printf("\n");
	}
}
