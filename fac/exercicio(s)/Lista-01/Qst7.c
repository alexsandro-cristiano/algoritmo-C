/*QUEST�O 07:
Escreva um algoritmo para calcular o sal�rio semanal de uma pessoa,determinado pelas condi��es que seguem:
se o n�mero de horas trabalhado for inferior ou igual a 40, a pessoa recebe x reais por hora;
caso contr�rio, a pessoa recebe um adicional de 50% para cada hora trabalhada acima das 40 iniciais.*/
/*
 - Parte logica:
 se horatrabalhada = ou menor 40 pessoa recebe x / x < = 40
 se nao 50% para cada hr acima
 
 pedir hora
 
 Acho eu q ele vai ficar puto pq n ta olhando pra ele.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declara��o de variaveis
	float salario, saladic, horatrab, valorhora;
	//entrada de dados
	printf("Entre com valor das horas trabalhadas: ");
	scanf("%f", &valorhora);
	printf("Entre com as horas trabalhadas: ");
	scanf("%f", &horatrab);
	
	//processando dados
	if(40 >= horatrab)
	{
		salario = valorhora * horatrab;		
	}
	else
	{
		//Pegando o valor e calculando o salario ate 40h
		salario = 40 * horatrab;
		// expressao para fazer as horas adicionais
		saladic = salario + ((valorhora)*(horatrab-40)/*nesta parte faz toda a hora menos 40h j� calculado*/*(50))/100;
	}
	//exibindo dados
		printf("Salario sem adicional R$: %.2f\n", salario);
		printf("Salario com adicional R$: %.2f\n", saladic);
	system("pause");
	return (0);
}
