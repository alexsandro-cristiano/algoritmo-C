/*Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao usu�rio outros 50 valores inteiros.
Ao final, o programa deve exibir o total de m�ltiplos de x fornecidos.

	x = 2
	2 5 8 10 3 - total de multiplos de x = 3

*/

#include <stdio.h>
#include <stdlib.h>
int main (){
	int i=0,x,numDigitado,mult=0;
	
	printf("Numero: ");
	scanf("%d",&x);
	
	while(i<50){
		printf("Numero: ");
		scanf("%d",&numDigitado);
		if(numDigitado%x==0){
			mult++;
		}
		i++;
	}
	printf("Total de Multiplos: %d",mult);	
}





