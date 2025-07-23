#include<stdio.h>
#include<string.h>
int main()
{
	char name[21];
	int i = 0;
	printf("Enter a String: ");
	fgets(name, 21, stdin);
	fflush(stdin);
	name[strlen(name) - 1] = '\n';
	printf("Hello,%s,How are you\n", name);
	return 0;
}