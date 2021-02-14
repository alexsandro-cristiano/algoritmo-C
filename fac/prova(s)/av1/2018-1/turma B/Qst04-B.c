/*Quest�o 04 [2,0 pontos]:
Desenvolver um programa que leia um n�mero bin�rio e exiba o n�mero decimal
equivalente. Caso o valor fornecido pelo usu�rio n�o represente
um n�mero bin�rio, uma mensagem de erro deve ser exibida.*/
#include <stdio.h>

int main() {
  int numero,potencia,baseDeci;
  
  printf("Digite o numeroero a ser transformado da base 2 para a base 10: ");
  scanf("%d", &numero);
  
  /* inicializando a variavel */
  baseDeci = 0;
  potencia  = 1;
  
  printf("%d na base 10 e': ", numero);
  
  while (numero != 0){
    baseDeci += numero % 10 * potencia;  /* processa um digito binario */
    numero = numero / 10; // anda para o proximo digito
    potencia = potencia * 2; // sobe 1 na potencia de 2
  }
  printf("%d\n", baseDeci);
}
