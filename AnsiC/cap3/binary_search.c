#include <stdio.h>

int pesqbin(int x, int v[], int m);

main() {
	
	int v[10];// = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]; 

	for (int i = 0; i < 10; ++i)
	{
		v[i] = i;
	}

	int x = 7;
	int n = 10;
	if ( x < n)
	printf("%d\n", pesqbin(7, v, 10));

	return 0;
}

int pesqbin(int x, int v[], int n){
	int inicio, fim, meio;

	inicio = 0;
	fim = n - 1;
	while (inicio <=fim ) {
		meio = (inicio + fim) / 2;
		if (x < v[meio])
		    fim = meio - 1;
		else if ( x > v[meio] )
			inicio = meio + 1;
		else
			return meio;
	}
	return -1;
}