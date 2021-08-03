#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int m, int n) {
    if(m == 0){
        return n + 1;
    }
    else if(m > 0 && n == 0) {
        return (fun(m-1, 1));
    }

    else if(m > 0 && n > 0) {
        return fun(m-1, (fun(m, n-1)));
    }
}

int main() {

    int m, n, i, j, cal;

  printf("Digite o Valor de m:\n ");
    scanf("%d", &m);
  printf("Digite o Valor de n:\n ");
    scanf("%d", &n);

  for (i = 0; i <= m; i++){

    for (j = 0; j <= n; j++){

      cal = fun(m, n);  
    }
  }
  printf("Retorno da Funcao: %d", cal);

  return 0;
}