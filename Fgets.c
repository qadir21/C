#include<stdio.h>
int main()
{
	char name[81];
	int i = 0;\
	printf("Enter a string: ");
	fgets(name, 81, stdin);
	fflush(stdin);
	while(name[i] != '\0') i++;
	name[i - 1] = '\n';
	printf("Hello, %s how are you?\n", name);
	return 0;
}