/*
As vendas parceladas se tornaram uma �tima op��o para os lojistas que, a cada dia, criam novas promo��es para tentar conquistar novos clientes.
Fa�a um algoritmo que permita ao lojista informar o pre�o do produto e receber as seguintes informa��es:
a) O valor com 10% de desconto para pagamento � vista;
b) O valor da presta��o para parcelamento sem juros, em 5x;
c) O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo no valor do produto.

1 - receber o preco do produto do lojista - pl
2 - esse valor  - 0.10 - desconto - vd
3 - valor / 5 - exibir resultato - vp
4 - valor dividido por 10 com 20% a mais no pre�o - vj

*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float vp, vd, pl, vj;
	
	printf ("\nDigite o preco do produto escolhido: ");
	scanf ("%f", &pl);
	vd = pl/0.1;
	vp = pl/5;
	vj = (pl*1.2)/10;
	
	printf("\nO valor pago a vista fica no valor de:RS %f\n\n", vd);
	printf("O valor parcelado em 5 vezes sem juros fica no valor de:RS %f\n\n", vp);
	printf("O valor parcelado em 10 vezes com juros fica no valor de:RS %f", vj);
	
	
}
