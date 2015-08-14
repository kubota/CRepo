#include <stdio.h>

#ifndef DENTRO
#define DENTRO 1
#endif

#ifndef FORA
#define FORA 0
#endif

#ifndef MAX
#define MAX 2
#endif


int comentario = FORA;
int countLB = 0;
int countRB = 0;
int countSTAR = 0;
int max = MAX;

/* Coment. */

main(){ 
	
	int c;
	extern int comentario;
	extern int countLB;
	extern int countRB;
	extern int countSTAR;
	extern int max;

	while((c = getchar() ) != EOF) {
		if (c == '/' && countRB == 0){
			countRB = 1;
		}
		if (c == '/' && countRB == 1){
			countRB = 0;
			countSTAR = 0;
		}
		if (c == '*' && countRB == 1 && countSTAR == 0){
			countSTAR = 1;
		}
		if ( countSTAR == 0 && countRB == 0)
		{
			putchar(c);
		}
	}

	return 0;
}