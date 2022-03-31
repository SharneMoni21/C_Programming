#include<stdio.h>
#include<string.h>

void subString(char str[], char c[], int i, int j);

int main()
{
    char str[20];
    char c[10];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0; i<len; ++i)
    {
        for(int j=1; j<=len-i; ++j)
        {
            subString(str, c, i, j);
            printf("%s\n", c);
        }
    }
    return 0;
}

void subString(char str[], char c[], int i, int j)
{
    int count = 0;
    while(count < j)
    {
        c[count] = str[i + count];
        ++count;
    }
    c[count] = '\0';
}