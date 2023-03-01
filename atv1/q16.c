// 16. Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
// necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
// percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
// o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
// liquido do professor.
#include <stdio.h>
int main(){
    float ht, dc, ha, sl, sb;
    puts("digite o numero de horas trabalhadas no mês");
    scanf("%f",&ht);
    puts("digite o total descontado do INSS");
    scanf("%f",&dc);
    puts("digite o valor da hora aula");
    scanf("%f",&ha);
    sb=ht*ha;
    sl=sb-dc;
    printf("salario bruto: R$%f\n", sb);
    printf("salario liquido: R$%f\n", sl);
    return 0;
}