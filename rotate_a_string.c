//C program to rotate a string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[20];
    int num;
    int j=0;
    int s;
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter the number of terms to be rotated: ");
    scanf("%d", &num);
    for(int i=0; i<strlen(str); ++i)
    {
        for(int x=0; x<num; ++x)
        {
            s = strlen(str) - num + j;
            printf("%c", str[s]);
            ++j;
        }
        for(int y=0; y<strlen(str) - num; ++y)
        {
            s = count;
            printf("%c", str[s]);
            ++count;
        }
        break;
    }
    return 0;
}