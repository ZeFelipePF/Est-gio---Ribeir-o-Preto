/******************************************************************************

2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’,
seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;
    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++; 
        }
    }
    
    if (count > 0) {
        printf("A letra 'a' aparece %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
