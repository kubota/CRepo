#include <stdio.h>

int main(int argc, char const *argv[]) {

	int value = 0;
	int c;

	while ((c=getchar())!= EOF) {

		if (c > '0' && c < '9') {
			value = c - '0';
		}
		if (c > 'a' && c < 'f'){
			
			for (int i = 10; i < c-'0'; ++i)	{
				value++;
			}
		}

		printf("%d\n", value);
		

	}

	/* code */
	return 0;
}