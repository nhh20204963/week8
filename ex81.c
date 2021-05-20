#include <stdio.h>

int main()
{
	char c, d = ' ';
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
		if(d != ' ')
			putchar(c);
		}
		else
			putchar(c);
			d = c;
	}
	return 0;
}
