//20. Escreva um programa que receba um 
//n´umero inteiro e ent˜ao determine e 
//imprima se ele ´e par ou ´ımpar.
//Obs.: N˜ao utilizar estrutura de decis˜ao if.
#include <stdio.h>
int main(){
int n;
puts("digite um numero");
scanf("%d", &n);
n%2?puts("o numero é impar"):puts("o numero é par");
return 0;
}