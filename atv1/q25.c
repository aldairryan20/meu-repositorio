// 25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
// h ́a neste tempo.
#include <stdio.h>
int main() {
    int s, h, m, t, r;

    puts("Digite uma quantidade de segundos.");
    scanf("%d", &s);
    h=s/3600;
    r=s%3600;
    m=r/60;
    t=r%60;
    printf("%d horas ,%d minutos e %d segundos\n", h, m, t);
    return 0;
}