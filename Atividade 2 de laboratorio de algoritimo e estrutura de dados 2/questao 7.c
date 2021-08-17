#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float raiz(int x, float x0, float e){
    if ( ((x0 * x0) - x) * (-1) <= e){
        return x0;
    }
    else {
        return raiz(x, ((x0 * x0) + x) / (2 * x0), e);
    }
}

int main(void){
    int x;
    float x0, e, r;
    printf("Digite os Valores das variaveis(x,x0,e):\n");
    scanf("%d %f %f", &x, &x0, &e);
    r = raiz(x, x0, e);
    printf("\n\nResultado: %f\n\n", r);

    return 0;
}