/*
Quest�o 04 [2,0 pontos]:
Desenvolver um programa que exiba todos os n�meros perfeitos existentes no intervalo de 1 a N, onde N � fornecido pelo usu�rio.
Nota: um n�mero N � dito perfeito quando a soma de seus divisores, excetuando o pr�prio N, � igual a N.
Por exemplo, o n�mero 6 � perfeito, pois a soma de seus divisores (1+2+3+6 = 6). Da mesma forma, 28 � perfeito,
 pois 1+2+4+7+14+28 = 28.
 */
 #include <stdio.h>

int main() {
	int i,j,N;
	printf("informe N: ");
	scanf("%d",&N);

	i=1;
	while(i<=N){
		int div=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				div+=j;
			}
		}
		if(div%i==0)
		{
			printf("Numero Perfeito: %d\n",i);
		}
		i++;
	}

	return 0;
}
