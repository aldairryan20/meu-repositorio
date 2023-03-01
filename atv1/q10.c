// 10. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
// f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
#include <stdio.h>
int main(){
    float c, l, a;

        printf("digite o comprimento\n");
        scanf("%f", &c);

        printf("digite a largura\n");
        scanf("%f", &l);

        printf("digite a altura\n");
        scanf("%f", &a);


        printf("volume é: %f metros cubicos\n", c*l*a);
    return 0;
}