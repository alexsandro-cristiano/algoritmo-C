/*Quest�o 05 [2,0 pontos]:
Implementar um programa que permane�a lendo n�meros inteiros at� que o quinto
valor negativoativo seja fornecido pelo usu�rio.
Ao final, exibir:
- Quantidade de n�meros lidos;
- O menor valor positivo digitado;
- A m�dia dos elementos pares.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, numeroLido, soma, numeroLidop, mediaPar, negativo, menorPositivo=9999;
	numeroLido = soma = numeroLidop = mediaPar negativo = 0;
	do
	{
		numeroLido++;
		printf("Entre com numero: ");
		scanf("%d", &numero);
		
		if(numero >= 0){
			if(menorPositivo >= numero) 
		  	{
		  	  menorPositivo = numero;
		  	}
		  	if(numero % 2==0)
		  	{
        	   numeroLidop++;
        	   soma += numero;
        	   mediaPar = soma/numeroLidop;
        	}
		}
       else
		{
			negativo++;
		}
	} while(negativo < 5);
    printf("Quantidade de n�meros lidos %d\n",numeroLido);
    printf("O menor valor positivo digitado %d\n", menorPositivo);
	printf("A m�dia dos elementos pares %d\n", mediaPar);

}
