#include <stdio.h>
int main()
{
    int n, decimal = 0, base = 1;
    scanf("%d", &n);
    while (n > 0)
    {
        int lastDigit = n % 10;
        decimal += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    printf("%d", decimal);
    return 0;
}