//C program to reverse the words in a string

#include<stdio.h>

int main()
{
    char s[20];
    char trial[20];
    int count=1;
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    for(int i=0; s[i] != '\0'; ++i)
    {
        if(s[i] == ' ')
        {
            ++count;
        }
    }
    printf("%d", count);
    return 0;
}