//3. Fa ̧ca um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.
#include <stdio.h>
int main(){
    float n;
    printf("digite um numero com casas decimais. ex(1.1, 3.14, 10.55)\n");
    scanf("%f", &n);
    printf("\n%d\n", (int) n);
    return 0;
}