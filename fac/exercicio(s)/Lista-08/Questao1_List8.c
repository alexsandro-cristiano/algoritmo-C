/*
	QUEST�O 01: Desenvolver uma fun��o que determine o n�mero de ocorr�ncias de um n�mero inteiro x em um vetor A. 
*/
#include <stdio.h>

int numOcorrencia(int a);
int main()
{
	int x,volta;
	printf("informe x: ");
	scanf("%d",&x);
	volta = numOcorrencia (x);
	printf("Numero de Ocorrencia = %d",volta);
}
int numOcorrencia(int a)
{
	int i,num_ocor,A[10]={0,1,2,3,4,6,7,8,45};
	num_ocor=0;
	for(i=0;i<10;i++)
	{
		if(a==A[i])
		{
			num_ocor++;
		}
	}
	return num_ocor;
}
