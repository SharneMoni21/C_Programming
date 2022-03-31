#include<stdio.h>
#include<string.h>

int main()
{
    char string[20] = "aiswarya";
    char s[10];
    int j=0;
    int count=0;
    int s_size=0;
    int string_size=0; 
    printf("Enter the characters to be checked of their sequence: ");
    scanf("%[^\n]s", s);
    for(int i=0; string[i] != '\0'; ++i)
    {
        ++string_size;
    }
    //printf("%d", string_size);
    for(int i=0; s[i] != '\0'; ++i)
    {
        ++s_size;
    }
    //for left to right
    for(int i=0; string[i] != '\0'; ++i)
    {
        if(string[i] == s[j])
        {
            ++count;
            ++j;
        }    
    }
    if(count == s_size)
    {
        printf("Left to right");
    }
    else
    {
    //for right to left
    j=0;
    count = 0;
    for(int i=string_size-1; i>=0; --i)
    {
        if(string[i] == s[j])
        {
            ++count;
            ++j;
        }    
    }
    if(count == s_size)
    {
        printf("Right to left");
    }
    }
    return 0;
}