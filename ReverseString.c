#include<stdio.h>
int main()
{
    char a[21];
    int ub = 0, lb = 0;
    printf("Enter a string: ");
    scanf("%s",a);
    while(a[ub] != '\0') ub++;
    ub--;
    while(ub > lb)
    {
    	int temp = a[lb];
    	a[lb] = a[ub];
    	a[ub] = temp;
    	lb++;
    	ub--;
    }
    printf("%s\n",a);
	return 0;
}