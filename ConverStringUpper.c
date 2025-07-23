#include<stdio.h>
int main()
{
	char a[21];
	int x = 0;
	printf("Enter a string: ");
	scanf("%s",a);
	while(a[x] != '\0')
	{
		if(a[x] >= 97 && a[x] <= 122)
		{
			a[x] -= 32;
		}
		x++;
	}
	printf("%s\n",a);
	return 0;
}