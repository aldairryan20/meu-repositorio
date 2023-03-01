// 11. Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
// programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
// deseja converter.

#include <stdio.h>
int main(){
    float d, r;

        puts("digite o valor atual do dolar\n");
        scanf("%f", &d);


        puts("digite a quantia em reais\n");
        scanf("%f", &r);


        printf("valor convertido em dolar: %f\n", r/d);
    return 0;
}