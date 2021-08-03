#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n == 0)
        return 0;
    else
        return n + soma(n - 1);
}

int main () {

    int N;

    printf("Digite o numero N: ");
    scanf("%d", &N);

    printf("Somatorio de 1 ate %d: %d\n", N, soma(N));

    return 0;
}


