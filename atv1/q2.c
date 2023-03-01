//2. Fa ̧ca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
//hexadecimal e octal.
//Ex.: Entre com o valor: 10
//Hexadecimal: A
//Octal: 12
#include <stdio.h>
int main(){
    int x;
        printf("digite um numero\n");
        scanf("%d", &x);
        printf("octal: %o\n", x);
        printf("hexadecimal: %x\n", x);
    return 0;
}