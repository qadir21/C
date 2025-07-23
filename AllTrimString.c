#include<stdio.h>
#include<string.h>
void AllTrim(char *);
int main()
{
    char a[81];
    printf("Enter a string: ");
    fgets(a, 81, stdin); 
    a[strcspn(a, "\n")] = '\0';  
    printf("String before AllTrim is (%s)\n", a);
    AllTrim(a);
    printf("String after AllTrim is (%s)\n", a);
    return 0;
}
void AllTrim(char *s)
{
    int i = 0, j = 0;
    while(s[i] != '\0')
    {
        if(s[i] != ' ')  
        {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}