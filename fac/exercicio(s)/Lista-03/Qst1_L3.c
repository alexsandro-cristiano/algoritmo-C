/*QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos
os m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.*/

#include <stdio.h>
int main()
{
	int n, y, i;
	printf("digite n: ");
	scanf("%d",&n);
	printf("digite y: ");
	scanf("%d",&y);
	/*for(i=1;i<n;i++)
	{
		if(i%y==0)
		{
			printf("%d\n",i);
		}
	}
	//outra forma:
	for(i=1;i<n;i=i+y)
	{
		printf("%d ",i);
	}
//usando while
	i=1;
	while(i<n)
	{
		if(i%y==0)
		{
			printf("%d\n",i);
		}
		i++;
	}*/
  i=1;
  do
  {
    if(i%y==0)
		{
			printf("%d\n",i);
		}
    i++;
  }while(i<n);
}
