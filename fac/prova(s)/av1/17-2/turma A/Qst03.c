/*
Quest�o 03 [2,0 pontos]:
Dados dois n�meros inteiros A e B, fornecidos pelo usu�rio, exibir todos os
valores de 1 a B, exceto os divisores de A que dever�o ser substitu�dos pelo caracter #.
Exemplo:
A = 20 e B = 10
Sa�da: # # 3 # # 6 7 8 9 #
Nota: tr�s programas devem ser implementados � um para cada estrutura de repeti��o estudada.
*/
#include <stdio.h>

int main() {
	int i,A,B;
	printf("Entre com A e B: ");
	scanf("%d %d",&A,&B);

	for(i=1;i<=B;i++){
		if(A%i==0) {
			printf("# ");
		}
		else {
			printf("%d ",i);
		}
	}
	return 0;
}
