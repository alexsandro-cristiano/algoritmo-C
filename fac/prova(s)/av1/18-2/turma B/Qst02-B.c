
/*Quest�o 02 [3,0 pontos]:
Desenvolver um programa que simule uma calculadora que realize as seguintes opera��es:
adi��o (+), subtra��o (-), multiplica��o (x), divis�o (/) e logaritmo (L). O sistema deve permanecer apresentando
um menu
ao usu�rio at� que este opte pela op��o de sa�da (S). Se a op��o escolhida for uma das 4 opera��es b�sicas,
devem ser
solicitados os dois operadores; caso escolha logaritmo, devem ser solicitados o n�mero (logaritmando) e a base.
Nota: logba = c ? bc = a
Observa��o: todos os operandos s�o n�meros reais, assim como a base e o logaritmando. Por�m, o resultado do logaritmo
dever� ser inteiro.*/
#include <stdio.h>
#include <ctype.h>
int main()
{
	int c;
	float a,b,res;
	char esc;
	
	do{
		printf("\t\nCalculadora:\n");
		printf("\tA- Adicao (+)\n");
		printf("\tS- Subtracao (-)\n");
		printf("\tM- Multiplicacao (*)\n");
		printf("\tD- Divisao (/)\n");
		printf("\tL- Logaritmo (L)\n");
		printf("\tX- Sair da Calculadora\n");
		printf("Escolha uma opcao: ");
		fflush(stdin);
		scanf("%c",&esc);
		esc=toupper(esc);
	
		switch (esc)
		{
			case 'A':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a+b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'S':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a-b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'M':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a*b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'D':
				printf("Digite a:");
				scanf("%f",&a);
				printf("Digite b: ");
				scanf("%f",&b);
				res = a/b;
				printf("Resultado = %.2f\n",res);
				break;
			case 'L':
				printf("Digite base:");
				scanf("%f",&a);
				printf("Digite logaritmando: ");
				scanf("%f",&b);
				while(b>1)
				{
					b/=a;
					c++;
				}
				printf("Resultado = %d\n",c);
				break;
			default:
				printf("Voce encerrou a calculadora!\n");
		}
	}while(esc!='X');
}
