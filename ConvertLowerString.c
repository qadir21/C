#include<stdio.h>
int main()
{
	char a[21];
	int n = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	while(a[n] != '\0')
	{
		if(a[n] >= 'A' && a[n] <= 'Z')
		{
			a[n] += 32;
		}
		n++;
	}
	printf("%s\n",a);
	return 0;
}