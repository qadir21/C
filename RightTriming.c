#include<stdio.h>
int main()
{
	char a[21];
	int i = 0;
	printf("Enter String: ");
	scanf("%[^\n]",a);
	printf("String before Triming (%s)\n", a);
	while(a[i] != ' ')  i++;
	a[i] = '\0';
	printf("String After Triming (%s)\n", a);
	return 0;
}