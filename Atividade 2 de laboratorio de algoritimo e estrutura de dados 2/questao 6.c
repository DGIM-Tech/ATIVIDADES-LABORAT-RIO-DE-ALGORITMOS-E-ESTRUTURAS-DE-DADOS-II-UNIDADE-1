#include <stdio.h>
#include <stdlib.h>


void trocar(int v[], int com, int fim){
    int aux;
    if(com < fim){
        aux = v[com];
        v[com] = v[fim];
        v[fim] = aux;
        trocar(v, com + 1, fim - 1);
    }
}

void imprimir(int v[], int tam){
    if(tam == 1)
        printf("%d ", v[tam - 1]);
    else{
        imprimir(v, tam - 1);
        printf("%d ", v[tam - 1]);
    }
}

int main () {

    int vet[100];
    int i, numev;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &numev);
    printf("Digite os numeros: ");
    for (i = 0; i < numev; ++i)
    scanf("%d", &vet[i]);

   
    imprimir(vet, numev);
    printf("\n");
    trocar(vet, 0, numev-1);
    imprimir(vet, numev);
    

    return 0;
}