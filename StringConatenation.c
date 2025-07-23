#include<stdio.h>
int main()
{
	char a[21], b[21];
	int i = 0, j = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter anoter string: ");
	scanf("%s",b);
	while(a[i] != '\0') i++;
	while(b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("String After concatenation is %s\n",a);
	return 0;
}