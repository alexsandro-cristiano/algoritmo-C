/*Quest�o 03 [2,5 pontos]:
Implementar um programa que leia diversos n�meros inteiros positivos at� que a terceira pot�ncia de 2 seja
informada pelo usu�rio. Ao final, devem ser exibidos:
a. Total de valores digitados;
b. M�dia dos valores entre a primeira e segunda pot�ncias de 2.
Observa��o: sempre que um valor n�o positivo for digitado, uma mensagem de erro dever� ser exibida ao usu�rio.
E estes valores n�o poder�o ser considerados no c�lculo de cada um dos itens solicitados.
*/
#include <stdio.h>
int main()
{
	int num,total_valor,s,cont,media;
	//inicializando as variaveis
	num = total_valor = s = cont = media = 0;
	
	while(num!=4)
	{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(num<0)
		{
			printf("erro!\n\n");
		}
		else
		{
			total_valor+=num;
			if(num<=2)
			{
				s+=num;
				cont++;
				media = s/cont;
			}
		}
	}
	printf("Total de Valores Digitados = %d\n",total_valor);
	printf("Media dos valores entre a primeira e a segunda potencia de 2 = %d\n",media);
}

