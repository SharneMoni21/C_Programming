//C program to print the substring in a string

#include<stdio.h>
#include<string.h>

void subString(char s[], int n)
{
    //Pick starting point
    for(int len=1; len<=n; ++len)
    {
        for(int i=0; i<=n-len; ++i)
        {
            int j = i + len - 1;
            for(int k = i; k <= j; ++k)
            {
                printf("%c", s[k]);
            }
            printf("\n");    
        }
    }
}

int main()
{
    char s[] = "sharne";
    int size = strlen(s);
    subString(s, size);
    return 0;
}