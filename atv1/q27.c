// 27. Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
// geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("%f,%f\n", (a+b+c)/3, pow(a*b*c, 1/3));
    return 0;
}