//14. Escreva um programa que leia uma
// temperatura em graus Celsius e apresente
// convertida em graus
//Fahrenheit. A f´ormula de vers˜ao ´e
// F = (9 * C + 160) / 5, sendo F a
// temperatura Fahrenheit e C a
//temperatura em Celsius.
#include <stdio.h>
int main(){
float f,t;
puts("digite a temperatura em graus Celsius.");
scanf("%f", &t);
f=(9*t+160)/5;
printf("temperatura em Fahrenheit: %f", f);
return 0;
}