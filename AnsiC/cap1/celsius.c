#include <stdio.h>

/* imprime a tabela de conversao Fahrenheit-Celsius
   para fahr = 0, 20, ... 300; versao com ponto flutuante */

main() {
	
	float fahr, celsius;
	int inicio, fim, incr;

	inicio = 0;	/* limite inferior da tebala*/
	fim = 300;
	incr = 20;

	printf("\n\n***** Conversão de temperatura ******\n");
	printf("celsius  fahr\n");

	celsius = inicio;
	while(celsius <= fim) {
		fahr = celsius / (5.0/9.0) + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + incr;
	}

	printf("\n\n");
}