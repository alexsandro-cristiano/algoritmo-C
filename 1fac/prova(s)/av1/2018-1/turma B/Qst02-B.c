/*Quest�o 02 [2,0 pontos]:
Fa�a um programa que, dadas duas datas (cada qual com dia, m�s e ano)
fornecidas pelo usu�rio, determine qual delas � a mais recente.*/

#include <stdio.h>
int main()
{
		int dia,mes,ano,dia2,mes2,ano2;

		printf("Entre com o dia mes ano: ");
		scanf("%d %d %d",&dia,&mes,&ano);
		printf("Entre com o 2 dia mes ano: ");
		scanf("%d %d %d",&dia2,&mes2,&ano2);
		if(ano<ano2)
		{
			printf("%d %d %d e mais recente!",dia2,mes2,ano2);
		}	
		else
		{
			if(mes<mes2)
			{
				printf("%d %d %d e mais recente!",dia2,mes2,ano2);
			}
			else
			{
					if(dia<dia2)
				{
					printf("%d %d %d e mais recente!",dia2,mes2,ano2);
				}
				else
				{
					printf("%d %d %d e mais recente!",dia,mes,ano);
				}
			}
		}
}
