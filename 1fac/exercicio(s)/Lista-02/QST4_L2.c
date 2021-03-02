/* Desenvolva um algoritmo que calcule o consumo de combust�vel de um autom�vel em determinada viagem.
Para isso, devem ser obtidos:
i) o percurso (em quil�metros) da viagem; = dv
ii) o n�mero de quil�metros que o carro percorre com um litro de combust�vel (km/l); =dl
iii) o pre�o do litro do combust�vel. = pc
Ao final, o algoritmo deve determinar:


� A quantidade de combust�vel, em litros, consumida durante a viagem; = qtdc
� O custo total de combust�vel.  = ct
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float dv, dl, pc, ct, qtd;
	
	printf("Digite a distancia em KM da sua viajem: ");
	scanf("%f", &dv);
	
	printf("Digite a distancia que seu carro faz com um litro de combustivel KM/l: ");
	scanf("%f", &dl);
	
	printf("Digite o valor do combustivel em Reais: ");
	scanf("%f", &pc);
	qtd = dl/dv;
	ct = qtd*pc;
	
	printf(" A quantidade de combustivel consumida e %f\n" , qtd);
	
	printf(" Seu custo com combustivel foi RS:%f" , ct);
}
