#include<stdio.h>
int main()
{
	char a[21];
	int i = 0, j = 0; 
	printf("Enter string: ");
	fgets(a, 21,stdin);
	printf("String before Triming is (%s)\n",a);
	while(a[i] == ' ') i++;
	while(a[i] != '\0')
	{
		a[j] = a[i];
		i++;
		j++;
	}
	a[j] = '\0';
	printf("String After trimming (%s)\n",a);
	return 0;
}