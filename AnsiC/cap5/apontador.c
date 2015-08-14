#include <stdio.h>

void troca( int *px, int *py);

main(){
	
	int x = 1, y = 2, z[10];
	int *ip; 		/* ip é um apontador */
	int *ip2;

	printf("int *ip:%d\n", *ip);

	ip = &x; 		/* ip agora aponta para int x */	
	ip2 = &y;
	printf("ip = &x:%d\n", *ip);
	printf("ip2 = &x:%d\n", *ip2);
	
	y = *ip;		/* y agora eh 1 */
	printf("y = *ip:%d\n", y);

	*ip = 0;		/* y agora eh 0 */
	printf("y = *ip:%d\n", y);

	ip = &z[0];		/* ip agora aponta para z[0] */

	troca(&x, &y);
	ip = &x; 		/* ip agora aponta para int x */	
	ip2 = &y;
	printf("ip = &x:%d\n", *ip);
	printf("ip2 = &x:%d\n", *ip2);


	return 0;
}


void troca( int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}