#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

/* apara: remove brancos, tabulacoes, novas-linhas */
int apara(char s[]) {
	int n;

	for (n = strlen(s) - 1; n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
		s[n+1] = '\0';
		return n;
}