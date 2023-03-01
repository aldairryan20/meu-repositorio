// 22. A linguagem C pode representar letras mai ́usculas, letras min ́usculas e uma grande variedade de
// s ́ımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.
// O conjunto de caracteres que um computador utiliza e as representa ̧c ̃oes dos n ́umeros inteiros corres-
// pondentes `aqueles caracteres  ́e chamado conjunto de caracteres do computador. Vocˆe pode imprimir
// o n ́umero inteiro equivalente `a letra mai ́uscula A, por exemplo, executando a instru ̧c ̃ao
// printf(”%d”, ’A’);
// Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras
// min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto
// seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.
#include <stdio.h>
int main(){
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
    c1=65;
    c2=66;
    c3=67;
    c4=97;
    c5=98;
    c6=99;
    c7=36;
    c8=42;
    c9=43;
    c10=47;
    c11=32;
    printf("%C, %C, %C, %C, %C, %C, %C, %C, %C, %C,%C%C%Cespaço\n", c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c11,c11);
    return 0;
}