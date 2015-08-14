#include <stdio.h>

/* conta linhas na entrada */
main() {
	
	int c, nl, nt, s;
	nl = nt = s = 0;

	while((c = getchar())!= EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++s;
	}
		printf("Lines:%d\t Tabs:%d\t Space:%d\t", nl, nt, s);
}