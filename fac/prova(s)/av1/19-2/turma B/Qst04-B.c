/*
Quest�o 04 [2,5 pontos]:
Na matem�tica, dois n�meros s�o chamados de primos
entre si quando o seu �nico divisor em comum � a
unidade (ou seja, o n�mero 1).
Considerando este conceito, implementar um
programa que, dados dois n�meros inteiros, determine
se s�o ou n�o primos entre si.
Nota: devem ser apresentadas tr�s vers�es do
programa, uma para cada estrutura de repeti��o
estudada.
*/

#include <stdio.h>
int main()
{
	//declara��o de variavel
	int n1,n2,i,j,heroi,ajudante;
	printf("Informe n1: ");
	scanf("%d",&n1);
	printf("Informe n2: ");
	scanf("%d",&n2);
	
	//processamento de dado
	for(i=1,j=1,heroi=0;((i<=n1)&&(j<=n2));i++,j++)
	{
		if((n1%i==0)&&(n2%j==0))
		{
			heroi++;
		}
	}
	if(heroi==1)
	{
		printf("sao primos entre si");
	}
	else
	{
		printf("nao e primo entre si");
	}
}
