#include <stdio.h>

/* imprime a tabela de conversao Fahrenheit-Celsius 
 para fahr = 0, 20, ..., 300 */

int conversao( int fahn );

main()
{
	int fahr, celsius;
	int inicio, fim, incr;

	inicio = 0; /* limite inferior da tabela*/
	fim = 300;	/* limite superior */
	incr = 20;	/* incremento */

	fahr = inicio;
	while( fahr <= fim ) {
		celsius = conversao( fahr );
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + incr;
	}
}

int conversao(int fahr) {
	 int celsius = 0;
     return celsius = 5 * (fahr - 32) / 9;
}