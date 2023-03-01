// 12. Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
// a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.
#include <stdio.h>
int main(){
    float a, b;
    int c,d;
    unsigned char sw;
    
    puts("a operacao que voce quer fazer é modulo? '1' para sim '2' para nao");
    scanf("%c", &sw);
    switch(sw){
    case '1':
    puts("digite um numero");
    scanf("%d", &c);
    puts("digite outro numero");
    scanf("%d", &d);
    printf("modulo: %d\n", c%d);
    break;
    case '2':
    puts("digite um numero");
    scanf("%f", &a);
    puts("digite outro numero");
    scanf("%f", &b);
    printf("soma: %f\n", a+b);
    printf("subtraçao: %f\n", a-b);
    printf("produto: %f\n", a*b);
    printf("divisao: %f\n", a/b);
    break;
    }
    return 0;
}