/*Implementar um programa que calcule o valor de baseexpoente, onde base e expoente s�o n�meros inteiros dados pelo usu�rio.*/
#include <stdio.h>
#include <math.h>


int main ()
{
	int base,expo;
	printf("Digete a base e expoente: ");
	scanf("%d %d",&base,&expo);
	printf("%.0f",pow(base,expo));
	/*
	Fazendo na mao:
	pot=1;
	for(int i=1;i<=expo,i++){
		pot *= base;
	}*/
}
