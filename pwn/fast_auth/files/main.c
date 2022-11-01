#include <stdio.h>
#include <stdlib.h>

void init(void)
{
	setvbuf(stdin,  NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}

void askName(void)
{
	char name[64] = {};

	printf("Name> ");
	scanf("%s", name);

	printf("Hello, %s!\n", name);
}

int main(int argc, char *argv[])
{
	int admin = 0;

	init();

	printf("Hi there!\n");
	printf("Our previous authentication system had a vulnerability.\n");
	printf("This time, we refactored the code!\n");
	printf("What is your name?\n");

	askName();

	if(admin)
		system("cat flag");
	else
		printf("You are not allowed to see the flag\n");
}
