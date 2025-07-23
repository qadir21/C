#include<stdio.h>
int main()
{
	char a[21],b[21];
	int i = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter another string: ");
	scanf("%s",b);
	while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) i++;
	if(a[i] == '\0' && b[i] == '\0') printf("%s and %s is same\n", a, b);
	else printf("%s and %s are not same\n", a, b);
	return 0;
}