/******************************************************************************

Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, ele calcule 
a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence 
ou não a sequência.

*******************************************************************************/
#include <stdio.h>

void fibonacci (int n) {
    int fibo[100];
    int i, j;
    fibo[0] = 0;
    fibo[1] = 1;
    
    for (i = 2; fibo[i-1] + fibo[i-2] <= n; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    
    for (j = 0; j<=i; j++) {
        if (n == fibo[j]){
            printf("O número %d pertence à sequência de Fibonacci.\n", n);
            return;
        } 
    }
    
    printf("O número %d NÃO pertence à sequência de Fibonacci.\n", n);
}

int main()
{
    int n;
    printf ("Informe o numero para teste: \n");
    scanf ("%d", &n);
    
    fibonacci(n);
}
