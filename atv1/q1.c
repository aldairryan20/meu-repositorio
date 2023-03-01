// 1. Diga a ordem de c ́alculo dos operadores em cada uma das instru ̧c ̃oes em C a seguir e mostre o valor
// de x depois que cada instru ̧c ̃ao for executada.
// • x = 7 + 3*6/2-l
// • x = 2%2 + 2*2-2/2;
// • x = (3 * 9 * (3 + (9*3/ (3) ) ) );
#include <stdio.h>
int main(){
    int x;
    x = 7 + 3*6/2-1;                            //ordem: produto -> divisao -> soma -> subtracao
    printf("%d\n",x);                           //x = 15


    x = 2%2 + 2*2-2/2;                          //ordem: modulo -> produto -> divisao -> soma -> subtracao
    printf("%d\n",x);                           //x = 3


    x = (3 * 9 * (3 + (9*3/ (3) ) ) );          //ordem: produto -> parentesis mais interno -> parentesis mais externo
    printf("%d\n",x);                           //x = 324

    
return 0;
}