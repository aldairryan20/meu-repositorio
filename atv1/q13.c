//13. Escreva um programa que leia duas vari´aveis A e B e efetue a troca dos valores.
// O objetivo ´e que a vari´avel A passe a conter o valor de B e a vari´avel B passe a possuir o valor de A.
// Apresente os valores ap´os a efetiva¸c˜ao do processamento da troca.
#include<stdio.h>
int main()
{

int A,B,C;
puts("digite um numero para A");
scanf("%d", &A);
puts("digite um numero para B");
scanf("%d", &B);
C=A;
(A=B)&(B=C);
printf("A: %d\n",A);
printf("B: %d\n",B);
    return 0;
}