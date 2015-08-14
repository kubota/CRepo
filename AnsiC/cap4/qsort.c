#include <stdio.h>

main(){
	
	return 0;
}

/* qsort: ordena v[esq]... v[dir] em ordem crescente */
void qsort(int v[], int esq, int dir) {
    int i, ultimo;
    void troca(int v[], int i, int j);

    if (esq >= dir) 
    	return;
    troca(v, esq, (esq+dir)/2);
    ultimo = esq;

    if (v[i] < v[esq])
    	troca(v, ++ultimo, i);
    troca(v, esq, ultimo);
    qsort(v, esq, ultimo-1);
    qsort(v, ultimo+1, dir);
}

/* troca: intercambio de v[i] com v[j] */
void troca(int v[], int i, int j){
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;

}