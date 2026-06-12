/*#include <stdio.h>
int main(){
    char letra;
    printf("Entre com uma letra minúscula:\n");
    scanf("%c", &letra);
    letra = letra + ('A' - 'a');
    printf("Caractere = %c \n", letra);
    return 0;
}
#include <stdio.h>
 
int main() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    printf("Resultado: %.2f\n", resultado);
 
    return 0;
}
#include <stdio.h>
 
  int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}

#include <stdio.h>
 int main(){
    char ch1, ch2;
    printf("Entre com duas letras:\n");
    scanf("%c %c", &ch1,&ch2);
    ch1 = ch2;
    ch2 = ch1;
    printf("ch1 = %c e ch2 = %c\n", ch1, ch2);
}
*/
#include <stdio.h>
int main() {
    char letra;
    int num;
    printf("Entre com uma letra e um inteiro:\n");
    scanf("%c %d", letra, &num);
    printf("Voce informou a letra %c e o inteiro %d\n", letra, num);
}
