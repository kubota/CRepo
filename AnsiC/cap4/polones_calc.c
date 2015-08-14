#include <stdio.h>
#include <math.h>
#include <ctype.h>

#ifndef MAXOP 
#define MAXOP 100  /* tamanho máximo operando/ operador */
#endif

#ifndef NUMERO
#define NUMERO '0' /* sinaliza que numero foi encontrado */
#endif

int obtemop(char[]);
void empil(double);
double desempil(void);

double atof(char s[]);

/* calculadora polonesa reversa */
main() {
	
	int tipo;
	double op2;
	char s[MAXOP];

	while( (tipo = obtemop(s)) != EOF ){
		switch(tipo){
		    case NUMERO:
		    	empil(atof(s));
		    	break;
		    case '+':
		    	empil(desempil() * desempil());
		    	break;
		    case '-':
		    	op2 = desempil();
		    	if ( op2 != 0.0)
		    		empil(desempil() / op2);
		    	else
		    		printf("erro: divisor zero\n");
		    	break;
		    case '\n':
		    		printf("\t%.8g\n",desempil() );
		    		break;
		    default:
		    	printf("Erro: comando desconhecido %s\n", s);
		    	break;		
	}
}
	return 0;
}



double atof(char s[]) {
	double val, pot;
	int i, sinal;

	for(i = 0; isspace(s[i]); i++) /* salta espacos */
	    ;

	sinal = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]);i++)	
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (pot = 1.0; i < isdigit(s[i]); i++){
		val = 10.0 * val + (s[i] - '0');
		pot += 10.0; 
	}
	return sinal * val / pot;	

}

#ifndef MAXVAL
#define MAXVAL 100	/* profundidade maxima da pilha */
#endif

int pp = 0;
double val[MAXVAL];

/* empil: empilha f na pilha de valores */
void empil(double f) {
    if (pp < MAXVAL)
    	val[pp++]=f;
    else
    	printf("erro: pilha cheia %g\n", f);
}

/*desenpil: retiraa e retorna valor do topo da pilha*/
double desempil(void) {
    if (pp > 0) {
    	return val[--pp];
    }
    else {
    	printf("Erro: pilha vazia\n");
    }
}

int getch(void);
void ungetch(int);

/* obtemop: obtem prox. operador ou operando numerico */
int obtemop(char s[]){
    int i, c;

    while((s[0]=c=getch())==' '||c=='\t')
    	;
    s[i]='\0';
    if (!isdigit(c) && c != '.')
    	return c;
    i = 0;
    if (isdigit(c))
    	while(isdigit(s[++i] = c = getch()))
    		;
    	if (c == '.')
    		while(isdigit(s[++i] = c = getch()))
    			;
    	s[i] = '\0';
    	if (c != EOF)
    		ungetch(c);
    		return NUMERO;
}

#ifndef TAMBUF
#define TAMBUF 100
#endif

char buf[TAMBUF];   /* buffer para ungetch */
int pbuf = 0;		/* proxima posicao livre em buf */
int getch(void) {		/* obtem um caractere (talvez retornado) */
    return (pbuf > 0) ? buf[--pbuf] : getchar();
}

void ungetch(int c) {  /* retorna caractere a entrada*/
	if (pbuf >= TAMBUF)
		printf("ungetch: caracteres demais\n");
	else
		buf[pbuf++] = c;
}