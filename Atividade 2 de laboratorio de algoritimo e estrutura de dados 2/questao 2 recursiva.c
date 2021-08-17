#include <stdlib.h>
#include <stdio.h>
#include <time.h>

float * gerador ( size_t n) {
	srand ( time ( NULL )); 
	size_t i;
	float * res = (float *) malloc ( n * sizeof ( int ));
	for ( i = 0; i < n ; i ++) {
		res [ i] = rand () % 1000;
	}
	return res;
}
 
float x(int n, float *V) {
	if (n == 0)
		return 1; 
	else
		return (V[n - 1] + (n - 1) * x (n-1, V))/n;
}

int main () {
	float * V = gerador(500);
	int i;
	int n = 100;
	for (i = 0; i < n ; i ++) {
		printf ("res: %f \n", V[i]);
	}
	float media = x(n, V);
	printf("media: %f", media);
	return 0;
}