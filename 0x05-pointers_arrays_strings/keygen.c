#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = rand() % 94 + 33;
	password[PASSWORD_LENGTH] = '\0';
	printf("Random password for 101-crackme: %s\n", password);
	return (0);
}
