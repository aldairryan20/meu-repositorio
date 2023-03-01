//6. Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
//atrav ́es da seguinte f ́ormula:
//para homens: 72.7 * altura - 58
//para mulheres: 62.1 * altura - 44.7
#include <stdio.h>
int main(){
    unsigned short int s, s1, s2;
    s1=1;
    s2=2;
    float h;
    printf("digite sua altura.\n");
    scanf("%f",&h);
    printf("qual o seu sexo? (digite 1 para homem ou 2 para mulher)\n");
    scanf("%hu",&s);
    if(s==s1){
        printf("peso ideal: %f\n", h*72.7-58);
    }else if (s==s2)
    {
        printf("peso ideal: %f\n", h*62.1-44.7);
    }
    
    return 0;
}