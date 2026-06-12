#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
     printf("Digite sua Idade:");
    scanf("%d", &idade);
    printf("A sua idade é: %d\n",idade);

    printf( " Digite sua Altura:");
    scanf("%f", &altura);
    printf("A sua altura é: %.2f\n", altura);

    printf("Digite sua opção (A, B ou C):");
    scanf(" %c", opcao);
    printf("A sua opcao é: %c\n", opcao);

    printf(" Digite seu nome:");
    scanf(" %c", &nome);
    printf("O seu nome é: %c\n", nome);
}