#include <stdio.h>


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

/* impdec: imprime n em decimal */
void impdec(int n) {
    if (n < 0) {
    	putchar('-');
    	n = -n;
    }
    if (n / 10)
    {
    	impdec(n/10);
    	    putchar(n % 10 + '0');
    }
}