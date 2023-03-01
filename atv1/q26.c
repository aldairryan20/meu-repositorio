// 26. Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
// pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).
#include <stdio.h>
#include <math.h>
int main(){
    double x1,x2,y1,y2,dist;
    puts("digite a coordenada x do ponto 1");
    scanf("%lf",x1);
    puts("digite a coordenada y do ponto 1");
    scanf("%lf",y1);
    puts("digite a coordenada x do ponto 2");
    scanf("%lf",x2);
    puts("digite a coordenada y do ponto 2");
    scanf("%lf",y2);
    puts("digite a coordenada y do ponto 1");
    puts("digite a coordenada x do ponto 2");
    puts("digite a coordenada y do ponto 2");
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("a distancia entre os dois pontos é: %lf", dist);
    return 0;
}