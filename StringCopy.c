#include<stdio.h>
int main()
{
	char a[21], b[21];
	int i = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	while(a[i] != '\0')
	{
		b[i] = a[i];
		i++;
	}
	b[i] = '\0';
	printf("%s is copied %s\n",a, b);
	return 0;
}