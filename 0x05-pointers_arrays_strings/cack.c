#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(int argc, char *argv[])
{
	char password[PASSWORD_LENGTH + 1];

	if (argc != 2)
	{
		printf("Usage: %s <password>\n", argv[0]);
		return 1;
	}
	// Generate a random password
	srand(time(NULL));	
	for (int i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = rand() % 94 + 33;  // Printable ASCII characters
	password[PASSWORD_LENGTH] = '\0';
	// Check if the entered password matches the generated password
	if (strcmp(argv[1], password) == 0)
		printf("Tada! Congrats\n");
	else
		printf("Wrong password\n");
	return (0);
}
