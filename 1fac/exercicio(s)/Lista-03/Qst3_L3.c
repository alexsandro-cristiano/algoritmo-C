/*QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de R% ao m�s. Pede-se a implementa��o de
um programa que calcule o valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A anos de investimento.*/
#include <stdio.h>
int main ()
{
	//declara��o de variavel
	int A, M, i;
	float Q, R;
	//entrada de dados
	printf("Quantia investida: ");
	scanf("%f", &Q);
	printf("Rendimento Mensal: ");
	scanf("%f", &R);
	printf("Tempo de aplicacao(em anos): ");
	scanf("%d", &A);
	//processando dados
	M = A*12;
	for(i=1; i<=M; i++)
	{
		// trabalhando com juros composto; 
		Q *= (R/100+1); // Q(quantidade final) = Q(quantidade inicial) + Q(valor anterior)* R/100(rendimento)
	}
	printf("O valor acumulado, RS: %.2f" , Q);
}

