/*
	Quest�o 04 [2,5 pontos]:
Dados tr�s n�meros inteiros a, b e c, implementar um
programa que exiba os n�meros do intervalo definido
por a e b (sempre come�ando em a e terminando em
b), com exce��o daqueles que sejam m�ltiplos de c.
Exemplos:
a = 10, b = 20, c = 3
Sa�da: 10, 11, 13, 14, 16, 17, 19, 20
a = 25, b = 18, c = 5
Sa�da: 24, 23, 22, 21, 19, 18

Nota: devem ser apresentadas tr�s vers�es do
programa, uma para cada estrutura de repeti��o
estudada.
*/

#include <stdio.h>
// USANDO O FOR:
int main()
{
	int a,b,c,i;
		
	//entrada de dado
	printf("Informe valor para a: ");
	scanf("%d",&a);
	printf("Informe valor para b: ");
	scanf("%d",&b);
	printf("Informe valor para c: ");
	scanf("%d",&c);
	//processamento de dado
	if(a>b)
	{
		for(i=a;i>=b;i--)
		{
			if(i%c!=0)
			{
				//saida de dado
				printf("%d ",i);
			}
		}
	}
	else
	{
		for(i=a;i<=b;i++)
		{
			if(i%c!=0)
			{
				//saida de dado
				printf("%d ",i);
			}
		}
	}
}

// USANDO O WHILE:
int main()
{
	//declarando variavel
		int a,b,c,i;
	
	//entrada de dado
		printf("Informe valor para a: ");
		scanf("%d",&a);
		printf("Informe valor para b: ");
		scanf("%d",&b);
		printf("Informe valor para c: ");
		scanf("%d",&c);
	//processamento de dado
		i=a;
		if(a>b)
		{
			while(i>=b)
			{
				if(i%c!=0)
				{
					//saida de dado
					printf("%d ",i);
				}
				i--;
			}
		}
		else
		{
			while(i<=b)
			{
				if(i%c!=0)
				{
					//saida de dado
					printf("%d ",i);
				}
				i++;
			}
		}
}

//USANDO O DO ... WHILE:
int main()
{
	//declarando variavel
		int a,b,c,i;
	
	//entrada de dado
		printf("Informe valor para a: ");
		scanf("%d",&a);
		printf("Informe valor para b: ");
		scanf("%d",&b);
		printf("Informe valor para c: ");
		scanf("%d",&c);
	//processamento de dado
		i=a;
		if(a>b)
		{
			do
			{
				if(i%c!=0)
				{
					//saida de dado
					printf("%d ",i);
				}
				i--;
			}while(i>=b);
		}
		else
		{
			do
			{
				if(i%c!=0)
				{
					//saida de dado
					printf("%d ",i);
				}
				i++;
			}while(i<=b);
		}
}
