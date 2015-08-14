#include <ctype.h>

main() {
	
	double soma, atof(char[]);
	char linha[MAXLINHA];
	
	return 0;
}

/* atof: converte a cadeia s a um double */
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
