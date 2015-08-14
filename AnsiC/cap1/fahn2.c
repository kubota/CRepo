#include <stdio.h>

/* imprime a tabela de conversao Fahrenheit-Celsius
   para fahr = 0, 20, ... 300; versao com ponto flutuante */

main() {
	float fahr, celsius;
	int inicio, fim, incr;

	inicio = 0;	/* limite inferior da tebala*/
	fim = 300;
	incr = 20;

	fahr = inicio;
	while(fahr <= fim) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + incr;
	}
}