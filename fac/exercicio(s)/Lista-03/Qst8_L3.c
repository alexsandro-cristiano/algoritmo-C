/*QUEST�O 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informa��es dos seus 250 funcion�rios.
Cada funcion�rio dever� responder um question�rio ao qual informar� os seguintes dados: matr�cula, sexo, idade,
sal�rio e tempo (em anos) de trabalho na empresa. A execu��o do programa deve exibir os seguintes itens:
a) Matr�cula de todos os funcion�rios que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcion�rios do sexo feminino;
c) M�dia salarial dos homens.*/

#include<stdio.h>
int main()
{
	int mat,idade,temp,sf,s,med,conts,x;
	float sal;
	char sex;
	sf = s = conts = med, x = 0;
	do
	{
		printf("Informe seu sexo: ");
		fflush(stdin);
		scanf("%c",&sex);
		printf("Informe sua matricula: ");
		scanf("%d",&mat);
		printf("Informe sua idade: ");
		scanf("%d",&idade);
		printf("Informe seu salario: ");
		scanf("%f",&sal);
		printf("Informe seu tempo de casa: ");
		scanf("%d",&temp);
    	if(idade < 21)
		{
			printf("matricula %d\n",mat);
		}
    if((sex == 'f')||(sex == 'F'))
		{
			sf++;
		}
		else
		{
			s = s+sal;
			conts++;
			med = s/conts;
		}
    x++;
	}while(x<5);

	printf("Quantidade de funcionarias feminina %d\n",sf);
	printf("Media salarial maculina %d\n",med);
}
