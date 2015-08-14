#include <stdio.h>

#define	INICIO	0		/* limite inferior da tabela */
#define FIM 	300		/* limite superior */
#define INCR	20		/* incremento */

/* imprime tabela fahrenheit-Celsius */
main() {
	
	int fahr;

	for( fahr = INICIO; fahr <= FIM; fahr = fahr + INCR )
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32) );

}