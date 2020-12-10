/* Quest�o 02 [2,5 pontos]:
Construir um programa que permita ao usu�rio calcular
a �rea de diferentes figuras geom�tricas. Para isto,
permanecer� apresentando um menu de op��es
([C]�rculo, [R]et�ngulo, [Q]uadrado, [T]ri�ngulo e [S]air)
at� que o usu�rio opte por terminar a execu��o do
programa.
Notas:
1. F�rmulas para o c�lculo das �reas:
a. /*Ac�rculo = p.raio2, onde p = 3.14159;*/
 /*Aret�ngulo = base.altura;*/
 /*Aquadrado = lado2;*/
 /*Atri�ngulo = (base.altura)/2.
2. Caso o usu�rio escolha uma op��o inv�lida, uma
mensagem de erro deve ser exibida e uma nova
escolha solicitada.*/

#include <stdio.h>
#include <ctype.h>
int main()
{
	float p,raio,circulo,altura,ret,tri;
	int base,quad,lado;
	char esc;
	//Inicializando as Variaveis
	p = 3.14159;
	//processamento de dados
	do{
		//exibindo Menu
		printf("Calcular Figura Geometrica:\n");
		printf("\t([C]irculo\n");
		printf("\t[R]etangulo\n");
		printf("\t[Q]uadrado\n");
		printf("\t[T]riangulo\n");
		printf("\t([S])air\n");
		//Recebendo escolha do usuario
		printf("Escolha uma opcao: ");
		fflush(stdin);
		scanf("%c",&esc);
		esc=toupper(esc);
		
		//Fazendo as contas
		switch (esc)
		{
			case 'C':
				/*Recebendo raio*/
				printf("Entre com o tamanho do raio: ");
				scanf("%f",&raio);
				/*Calculando a area do circulo*/
				circulo = p*(raio*raio);
				printf("\n\nA area do circulo = %.2f\n\n",circulo);
				break;	
			case 'R':
				/*Recebendo base e altura*/
				printf("Entre com a base: ");
				scanf("%d",&base);
				printf("Entre com a altura: ");
				scanf("%f",&altura);
				/*Calculando a area do retangulo*/
				ret = ((float)base*altura);
				printf("\n\nA area do retangulo = %.2f\n\n",ret);
				break;
			case 'Q':
				/*Recebendo lado*/
				printf("Entre com o valor de lado: ");
				scanf("%d",&lado);
				/*Calculando a area do quadrado*/
				quad = lado*lado;
				printf("\n\nA area do quadrado = %d\n\n",quad);
				break;
			case 'T':
				/*Atri�ngulo = (base.altura)/2.*/
				printf("Entre com a base: ");
				scanf("%d",&base);
				printf("Entre com a altura: ");
				scanf("%f",&altura);
				tri = ((float)base*altura)/2;
				printf("\n\nA area do triangulo = %.2f\n\n",tri);
				break;
			case 'S':
				printf("\n\nOBRIGADO, VOCE SAIU DO PROGRAMA! \n\n\t:)\n\n");
				break;
			default:
				printf("\n\nValor invalido. Tente novamente!\n\n");
		}
	}while(esc!='S');
}

