//18. Escreva um programa que leia o raio de um c´ırculo e imprima seu diˆametro, o valor de sua
// circunferˆencia e sua ´area. Use o valor de 3,14159 para ”pi”. Fa¸ca cada um destes c´alculos 
//dentro da instru¸c˜oes (ou instru¸c˜oes) printf e use o especificador de convers˜ao %f.
#include <stdio.h>
int main(){
float r;
float p=3.14159;
puts("digite o raio da circunferência");
scanf("%f", &r);
printf("diâmetro: %f\ncircunferencia: %f\narea: %f\n", 2*r, 2*p*r, p*r*r);
return 0;
}