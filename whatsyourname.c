#include <stdio.h>

int main(void)
{
	char answer[] = "";

	printf("What is your name? ");
	scanf("%s", answer);

	printf("Hello, %s", answer);
}