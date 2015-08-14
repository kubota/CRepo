#include <ctype.h>
#include <stdio.h>

/* atoi: converte s para inteiro: versao 2 */
int atoi(char s[]){

	int i, n, sinal;

	for (int i = 0; isspace(s[i]); i++)	
		;
	sinal = (s[i] == '-' ? -1 : 1);

	if (s[i]=='+' || s[i]=='-')
		i++;
	for (int n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i]-'0');
	return sinal * n;
}

int main(int argc, char const *argv[])
{
	char numbers[] = "872309-";
	int number = atoi( numbers );
	printf("%d\n", number);
	return 0;
}