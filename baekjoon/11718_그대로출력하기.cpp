#include <stdio.h>

int main(int argc, const char * argv[]) {
	char a = 0;

	while ((a = getchar()) != EOF)
	{
		putchar(a);
	}

	return 0;
}
