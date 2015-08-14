#include <stdio.h>

#define MAXLINHA 1000	/* tamanho maximo da linha*/

int max;				/* tamanho visto ate agora */
char linha[MAXLINHA];
char maior[MAXLINHA];

int lelinha(void);
void copia(void);

/* imprime maior linha entrada: versao especializada */
main() {
	
	int tam;
	extern int max;
	extern char maior[MAXLINHA];
	max = 0;

	while((tam = lelinha())>0)
		if (tam > max){
			max = tam;
			copia();
		}
		if (max > 0) 	/* entrada tinha uma linha */
			printf("%s\n", maior);
		return 0;
}

/* lelinha: versao especializada */
int lelinha(void) {
	int c, i;
	extern char linha[MAXLINHA];

	for (i = 0; i < MAXLINHA - 1 
		&& (c = getchar()) != EOF && c != '\n'; ++i)
		linha[i] = c;
		if (c == '\n'){
			linha[i] = c;
			++i;
		}
		linha[i] = '\0';
		return i;
}

/* copia: versao especializada */
void copia(void){
	int i;
	extern char linha[MAXLINHA], maior[MAXLINHA];

	i = 0;
	while( (maior[i] = linha[i])!= '\0' )
		++i;
}