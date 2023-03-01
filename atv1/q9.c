//9. Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
//sucessor e antecessor.
#include <stdio.h>
int main(){
    int n;
    printf("digite um numero\n");
    scanf("%d", &n);
    printf("sucessor: %d\nantecessor: %d\n", n+1, n-1);
    return 0;
}