//4. Sabendo que os argumentos da fun ̧c ̃ao “printf” podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
//argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
//seu meio.
#include <stdio.h>
int main(){
    float x;
    printf("digite um numero.\n");
    scanf("%f",&x);
    printf("triplo: %f\n", 3*x);
    printf("quadrado: %f\n", x*x);
    printf("meio: %f\n", x/2);

return 0;
}