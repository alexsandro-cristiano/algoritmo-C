/*	QUEST�O 03:
Pede-se a implementa��o de uma fun��o que, dado um vetor contendo n�meros reais,
determine se o mesmo encontra-se ordenado de forma crescente.
*/

#include <stdio.h>
float crescente (float v[],float cres,int tam);

int main()
{
	int tam,i;
	float cres,vet[4];
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&tam);
	for(i=0;i<tam;i++)
	{
		printf("Informe um valor: ");
		scanf("%f",&vet[i]);
	}
	cres = vet[0];
	crescente (vet,cres,tam);
	
}
float crescente (float v[],float cres,int tam)
{
	int i,o=1;
	for(i=1;i<tam;i++)
	{
		if(cres<v[i])
		{
			o++;
		}
	}
	if(o==tam)
	{
		printf("e crescente");
	}
	return 0;
}
