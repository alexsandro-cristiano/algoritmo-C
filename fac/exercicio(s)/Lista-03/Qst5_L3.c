
/*QUEST�O 05: Fa�a um programa que exiba na tela os 50 primeiros termos da seguinte s�rie: 1, -2, 3, -4, 5, -6 ...*/

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=50;i++)
	{
		if(i%2 ==0)
		{
			printf(",-%d,",i);
		}
		else
		{
			printf("%d",i);
		}
	}
}
//outra maneira, mais rapida
	//declara��o
	int i, j;
	//corpo do programa
	for (i=1, j=-2; i<50; i+=2,j-=2)
	{
		printf("%d %d\n" , i,j);
	}

