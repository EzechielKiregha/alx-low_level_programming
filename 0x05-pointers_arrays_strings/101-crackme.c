#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(int argc, char *argv[])
{
	int i = 0;
	char password[PASSWORD_LENGTH + 1];

	if (argc != 2)
	{
		printf("Usage: %s <password>\n", argv[0]);
		return 1;
	}
	// Generate a random password with at least one uppercase letter,
	// one lowercase letter, one digit, and one special character
	srand(time(NULL));
	password[i++] = rand() % 26 + 'A'; // Uppercase letter
	password[i++] = rand() % 26 + 'a'; // Lowercase letter
	password[i++] = rand() % 10 + '0'; // Digit
	password[i++] = rand() % 15 + '!'; // Special character
	for (; i < PASSWORD_LENGTH; i++) {
		switch (rand() % 4) {
			case 0: password[i] = rand() % 26 + 'A'; break;
			case 1: password[i] = rand() % 26 + 'a'; break;
			case 2: password[i] = rand() % 10 + '0'; break;
			case 3: password[i] = rand() % 15 + '!'; break;
		}
	}
	password[PASSWORD_LENGTH] = '\0';
	// Check if the entered password matches the generated password
	if (strcmp(argv[1], password) == 0)
		printf("Tada! Congrats\n");
	else
		printf("Wrong password\n");
	return (0);
}

