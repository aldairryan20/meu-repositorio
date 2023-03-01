// 23. Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
// d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
// entrada de 123, a resposta do programa seria 321.
#include <stdio.h>
    int revert(int n){
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }
   return ret;
}

int main()
{
   int num, rev;
   printf("Numero a inverter:\n");
   scanf("%d",&num);
   rev = revert(num);
   printf("o numero invertido é: %d\n", rev);
   getchar();
    return 0;
}