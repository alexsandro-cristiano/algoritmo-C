/*17-2-A
Desenvolver uma fun��o que exiba as n primeiras pot�ncias de x.
Al�m disso, deve retornar a soma de todas estas pot�ncias.
Nota: apresentar tamb�m a fun��o main que chama a fun��o implementada.
*/
#include <stdio.h>
#include <stdlib.h>

int quest(int n, int x);

int main(){
	int soma = quest(5, 2);
	printf("Soma das potencias: %d\n",soma);
}
int quest(int n, int x)
{
	int i,soma_pot=0;
	
	for(i=1;i<=n;i++,x+=x) {
		printf("%d ",x);
		soma_pot+= x;
	}
	printf("\n");
	return soma_pot;
}
