/*
	QUEST�O 04:
Fazer uma fun��o que armazene em um vetor os 50 primeiros termos da seguinte sequ�ncia:
S = 1, 2, 4, 7, 11, 16, ...
Nota: observem que a diferen�a entre o 1� e 2� elementos � igual a 1, entre o 2� e 3� �
igual a 2, entre o 3� e o 4� � igual a 3, e assim sucessivamente.
*/

#include <stdio.h>
//prototipo da fun��o
int seq (int n, int v[]);
//fun��o principal
int main()
{
	int n,i,s[50];
	printf("infome o termo da sequencia: ");
	scanf("%d",&n);
	seq (n,s);
	printf("s = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
}
//funcao completa
int seq (int n, int v[])
{
	int i,j;
	for(i=0,j=1;i<n;i++)
	{
		j+=i;
		v[i]= j;
	}
}
