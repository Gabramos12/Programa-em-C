#include <stdio.h>
int main(){
 int numero1, numero2;
 int soma, subtracao, multiplicacao, divisao;
    
  // entrada de dados 
   printf("entre com o numero 1: \n");
   scanf("%d", &numero1);
   printf("entre com o numero 2: \n");
   scanf("%d", &numero2);
    
   // operação de soma
 soma = numero1 + numero2;

 // operação de subtração
 subtracao = numero1 - numero2;
   
   //operaçaõ de multiplicação
 multiplicacao = numero1 * numero2;

  // operação de divisão 
 divisao = numero1 / numero2;

   //saida de dados
   printf("A Soma é: %d\n", soma);
   printf("A Subtração é: %d\n", subtracao);
   printf("A Multiplicação  é: %d\n", multiplicacao);
   printf("A Divisão é: %d\n", divisao);

}