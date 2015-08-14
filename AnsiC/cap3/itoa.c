#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

void inverte (char s[]);
/* itoa: converte n para caracteres em s */
void itoa(int n, char s[]) {
     int i, sinal;


     if ((sinal = n) < 0) /* registra sinal*/
        n = -n;			  /* torna n positivo */
     i = 0;

     do { 	/* gera digitos em ordem invertidos */
     	s[i++] = n % 10 + '0'; /* obtem prox. digito */ 
     } while ( n /= 10 > 0);
     if (sinal < 0)
     	s[i++] = '-';
     s[i] = '\0';
     inverte(s);

}

/* inverte: inverte cadeia s no lugar */
void inverte(char s[]) {
    int c, i, j;
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)   {
    	c = s[i];
    	s[i] = s[j];
    	s[j] = c;
    }
}
