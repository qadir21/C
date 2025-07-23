#include<stdio.h>
int main()
{
    int n, i = 2, j = 0;
    scanf("%d",&n);
    while(i < n / 2)
    {
        if(n % i == 0) j = 1;
        i++;
    }
    if(j == 0) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}