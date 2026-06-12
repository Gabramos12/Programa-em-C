#include <stdio.h>
int main(){
    /*
    Incremento (++)
    Pré-incremento ++a
    pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */ 
   int numero1 = 1, resultado;
   // soma os valores e retorna +1
   printf("antes do incremento: %d\n", numero1);
   numero1++;
   printf(" Depois do incremento: %d\n", numero1);
  
  
  
   // esse Resultado recebe o valor do numero1: que era 2 soma mais 1 que fica 3 e  Diminui: 1 que fica igual a 2;
    resultado= numero1++;
   printf(" Após do  pós-incremento - Numero 1: %d  - Resultado:  %d\n", numero1, resultado);
 
   
   
   
   // a soma anterior  era 3 porque o numero1 recebeu +1  porque somou,ai o numero1 ficou 3 e o pos-incremento tirou 1, ficando 2 ou seja ELE DEU E TIROU UM NUMERO;
    // Agora o pré-incremento pegar o que o valor  QUE  retirou que era 3 e ficou 2;
    // E ele soma; ou seja o Número 1 era 3 ele devolveu  o valor 3 como é uma soma ele somou mais 1 que ficou 4 e devolveu a informaçao mostrando que o valor do Número1 é 4 e devolve o mesmo numero   RESULTADO 4 os dois ficam iguais;
    resultado= ++numero1;
   printf(" Depois do  Pré-incremento - Numero 1: %d  - Resultado:  %d\n", numero1, resultado);
  
  
  
   // matém os valores somados e retorna -1
   printf("antes do decremento: %d\n", numero1);
   numero1--;
   printf(" Depois do decremento: %d\n", numero1);


 // o numero1 era 3, então ele diminui e fica 2, e o resultado matem o 3
   resultado = numero1--;
   printf(" Após do  Pós-Decremento - Numero 1: %d  - Resultado:  %d\n", numero1, resultado);


   // Agora aqui como é subtração o numero1 que era 2 passa a valer 1, e o resultado assim como no  Pré-incremento devolve o mesmo valor e também fica com 1;
   resultado = --numero1;
   printf(" Depois do  Pré-Decremento - Numero 1: %d  - Resultado:  %d\n", numero1, resultado);

   return 0;
}

