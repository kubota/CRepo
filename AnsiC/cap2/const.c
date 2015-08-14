#include <stdio.h>

/*#define TABV '\013'
#define BELL '\007'*/
#define FORM '\f'

main() {
	
	enum boolean { SIM, NAO };
	
	enum escapes { BELL='\a', RETROCESSO='\b', TAB='\t', 
	    NOVALINHA='\n', TABV='\v', RETORNO='\r'};

	const double e = 2.7182;    

	printf("%d", SIM);
	printf("%d", NAO);
	printf("%d", TABV);
	printf("%d", BELL);
	printf("%d", FORM);
	printf("%e", e);

	//e = 3;

	printf("%e", e);   
	return 0;
}

/* strlen: retorna tamanho de s*/
int strlen(char s[]) {
    int i;

    i = 0;

    while(s[i] != '\0')
    	++i;
    return i;
}
