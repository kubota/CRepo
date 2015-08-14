#include <stdio.h>

void comprime(char s1[], int c);
void comprime2(char s1[], char s2[]);
int contains(char s1[], char s2[]);

main() {
	
	char s1[] = {'a', 'b', '1', 'c'};
	char s2[] = {'e', 'f', '1', 'f'};

	comprime2(s1, s2);
	printf("%d\n", contains(s1, s2) );

	return 0;
}

int contains(char s1[], char s2[]) {
	for (int i = 0; i < s2[i] != '\0'; ++i) {
		for (int j = 0; j < s1[j]; ++j) {
			if (s1[j] == s2[i])
				return j;
		}
	}
	return -1;
}

/* comprime: deleta todos os c de s */
void comprime(char s[], int c) {

	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];
		s[j]='\0';
}

void comprime2(char s1[], char s2[]) {

	for (int i = 0; i < s1[i] != '\0'; i++)	{
		for (int j = 0; j < s2[j] != '\0'; j++)	{
			if (s1[i] == s2[j]) {
				s1[i] == '-';
			}
		}			
	}

	for (int i = 0; i < s1[i] != '\0'; ++i)
	{
		printf("%c\n", s1[i]);
	}

}