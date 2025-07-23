#include<stdio.h>
int main()
{
	char a[21];
	int n = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	while(a[n] != '\0') n++;
	printf("No of character (%s) is %d\n", a, n);
	return 0;
}