#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	int r;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++) {
		r = rand() % 100;
		if (r < 40)
			password[i] = rand() % 26 + 'a';  // Lowercase letter
		else if (r < 80)
			password[i] = rand() % 26 + 'A';  // Uppercase letter
		else if (r < 95)
			password[i] = rand() % 10 + '0';  // Digit
		else
			password[i] = rand() % 16 + '!';  // Symbol
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return (0);
}
