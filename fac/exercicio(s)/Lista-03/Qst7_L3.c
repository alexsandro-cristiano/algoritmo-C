
/*QUEST�O 07: Uma determinada empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou n�o de um novo
produto que foi lan�ado.
Para cada pessoa entrevistada foram coletados os seguintes dados: sexo (M ou F) e resposta (G [Gostou] ou N [N�o Gostou]).
Sabendo-se que foram entrevistadas X pessoas, fa�a um programa que forne�a:
a) N�mero de pessoas que gostaram do produto;
b) N�mero de pessoas que n�o gostaram do produto;
c) Informa��o dizendo em que sexo o produto teve uma melhor aceita��o.*/

#include <stdio.h>
int main()
{
	char sexo,resposta;
	int rg =0, rn = 0,x,sm=0,sf=0;
  x=0;
	while(x<5)
	{
		printf("Qual seu sexo: ");
		scanf(" %c",&sexo);
		printf("Digite (G [Gostou] ou N [N�o Gostou]): ");
		scanf(" %c",&resposta);
		if((sexo=='m')||(sexo=='M'))
		{
			sm++;
			if((resposta == 'g')||(resposta == 'G'))
			{
				rg++;
				
			}
			else
			{
				rn++;
			}
				
		}
		else
		{
			sf++;
			if((resposta == 'g')||(resposta == 'G'))
				{
					rg++;
				
				}
				else
					{
						rn++;
					}
		}
		x++;
	}
	if(sm>sf)
	{
		printf("sexo maior aceita��o Masculino\n");
	}
	else
	{
		printf("sexo maior aceita��o Feminino\n");
	}
	printf("quantidade de pessoas que gostaram %d\n",rg);
	printf("quantidade de pessoas que nao gostaram %d\n",rn);
}

