// 21. Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
// segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.
#include <stdio.h>
int main(){
    int x,y;
    puts("digite um numero");
    scanf("%d",&x);
    puts("digite outro numero");
    scanf("%d",&y);
    x%y?printf("%d não é multiplo de %d\n",x,y):printf("%d é multiplo de %d\n",x,y);
    return 0;
}