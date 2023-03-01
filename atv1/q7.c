//7. Fa ̧ca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.
#include <stdio.h>
int main(){
    short unsigned int h, m, s;
    printf("digite uma quantidade de horas\n");
    scanf("%hu", &h);
    printf("digite uma quantidade de minutos\n");
    scanf("%hu", &m);
    printf("digite uma quantidade de segundos\n");
    scanf("%hu", &s);
    printf("total de segundos: %hu\n", h*3600+m*60+s);
    return 0;
}