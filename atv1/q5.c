//5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
//pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.
#include <stdio.h>
int main(){
    float x;
    printf("digite o valor da conta.\n");
    scanf("%f",&x);
    printf("\ntotal: R$%f (10%% de taxa do garçon\n))",x+0.1*x);
    return 0;
}