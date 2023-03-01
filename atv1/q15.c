//15. Uma empresa contrata um vendedor a R$50,25 por dia. Crie um programa que solicite o n´umero de dias
//trabalhados pelo vendedor e imprima o valor l´ıquido a ser pago ao mesmo, sabendo que se ele trabalhou
// at´e 10 dias n˜ao tem direito `a gratifica¸c˜ao, se ele trabalhou acima de 10 dias e at´e 20 dias tem 
//direito `a gratifica¸c˜ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica¸c˜ao de 30%.
//Sempre s˜ao descontados 10% de imposto de renda em cima do valor bruto.
#include <stdio.h>
int main(){
int d;
float a;
float u=50.25;
puts("digite o numero de dias de trabalho");
scanf("%d", &d);
a=u*d;
if(d>10){
a=1.2*a;
}
if(d>20){
a=1.3*a/1.2;
}
printf("total a ser recebido: R$%f", a);
return 0;
}