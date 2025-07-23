#include<stdio.h>
int main()
{
	char a[21], b[21];
	int x, y;
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter another string: ");
	scanf("%s",b);
	for(x = 0; a[x] != '\0'; x++);
	y = 0;
    while(b[y] != '\0')
    {
    	a[x] = b[y];
    	x++;
    	y++;
    }
    a[x] = '\0';
    printf("(%s)",a);
	return 0;
}