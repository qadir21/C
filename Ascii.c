#include<stdio.h>
int main()
{
    for(unsigned char x = 0; x < 255; x++) 
        printf("(%c  %d)  ", x, x);
    return 0;
}