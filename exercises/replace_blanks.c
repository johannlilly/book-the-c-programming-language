#include <stdio.h>

int main()
{

	int c, sp = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			if (sp == 0)
				putchar(c);
			++sp;
		} else {
			putchar(c);
			sp = 0;
		}
	}

	return(0);
}
