/*QUEST�O 08: Em uma empresa deseja-se fazer um levantamento sobre algumas informa��es dos seus 250 funcion�rios.
Cada funcion�rio dever� responder um question�rio ao qual informar� os seguintes dados: matr�cula, sexo, idade,
sal�rio e tempo (em anos) de trabalho na empresa. A execu��o do programa deve exibir os seguintes itens:
a) Matr�cula de todos os funcion�rios que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcion�rios do sexo feminino;
c) M�dia salarial dos homens.*/

//prog. usando o for
#include <stdio.h>
#include <stdlib.h>
#define QUANTFUNC 3 //variavel global constante
int main ()
{
	//declara��o de variavel
	int matricula, idade, tempcasa, funcf = 0, funcm = 0, i, quanting=0,ing;
	float salario, soma=0, media=0;
	char sexo;
	//processamento de dados
	for(i = 0; i< QUANTFUNC; i++)
	{
		//entrada de dados
		printf("Entre com a sua matricula: ");
		scanf("%d", &matricula);
		printf("Entre com a sua idade: ");
		scanf("%d", &idade);
		printf("Entre com o seu tempo de casa: ");
		scanf("%d", &tempcasa);
		printf("Entre com o seu sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
		printf("Entre com o seu salario: ");
		scanf("%f", &salario);
		printf("\n*****************\n");
		
		//processamento de dados
		ing = idade-tempcasa;
		if(ing < 21)
		{
			quanting++;
		}
		if((sexo == 'f')||sexo == 'F')
		{
			funcf++;
		}
		else
		{
			funcm++;
			soma = soma + salario;
			media = soma / funcm;
		}	
	}
	//saida de dados
	printf("Quantidade de funcionarias que ingressaram com menos de 21 anos %d\n", quanting);
	printf("Quantidade de funcionarias %d\n", funcf);
	printf("Quantidade de funcionario %d\n", funcm );
	printf("Media salario Homem %.2f\n", media );
	system("pause");
}
