#include <stdio.h>

int main(void)
{
	char s[100];

	while(1){
		int i;
		i = scanf("%s", s);
		if(i == EOF)
			break;
		printf("%s\n", s);
	}
}
