#include <stdio.h>
int main() {

    int x,n,pot,cont; 
  
    puts("\nDigite um numero inteiro: ");
    scanf("%d", &x);
    puts("Digite um inteiro positivo: ");
    scanf("%d", &n);
  
    pot=1;
    cont=0;
  
    while(cont!=n){
        pot=pot*x;
        cont+=1;
}
    printf("\no valor de %d elevado a %d é: %d\n", x, n, pot);
    return 0;
}
