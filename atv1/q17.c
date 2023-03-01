//17. Escrever um programa que receba um valor inteiro do usu´ario e apresente o 
//seu valor absoluto (m´odulo). N˜ao utilize estrutura de decis˜ao if.
#include <stdio.h>
int main(){
int i;
puts("digite um numero inteiro");
scanf("%i", &i);
i<1?printf("modulo: %d", i*(-1)):printf("modulo: %d", i);
return 0;
}