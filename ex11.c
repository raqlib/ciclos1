#include <stdio.h>

int x=1, soma=0;

int main() {
 
    while (x!=0) { 
    printf("Introduza um numero: ");
    scanf("%d", &x);
    soma=soma+x;
    } 

    printf("A soma total e: %d", soma);
    return 0;
}