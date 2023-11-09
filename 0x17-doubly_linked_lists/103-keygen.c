#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_LENGTH 7
#define CODEX "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"
#define CODEX_LENGTH 64

void generate_password(char *password, char *argv)
{
	int len = strlen(argv), i, tmp;

	tmp = (len ^ 59) & 63;
	password[0] = CODEX[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[i];
	password[1] = CODEX[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[i];
	password[2] = CODEX[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[i] > tmp)
			tmp = argv[i];
	}
	srand(tmp ^ 14);
	password[3] = CODEX[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[i] * argv[i]);
	password[4] = CODEX[(tmp ^ 239) & 63];

	for (i = 0; i < argv[0]; i++)
		tmp = rand();
	password[5] = CODEX[(tmp ^ 229) & 63];

	password[6] = '\0';
}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[PASSWORD_LENGTH];

	generate_password(password, argv[1]);

	printf("%s", password);
	return (0);
}
