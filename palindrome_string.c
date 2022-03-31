#include<stdio.h>
#include<string.h>

int stringCounter(char s[]);
int stringReverse(char s[], int length);

int main()
{
    char str[20];
    int flag;
    int count;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    count = stringCounter(str);
    flag = stringReverse(str, count);
    if(flag == 1)
    {
        printf("The entered string is a Palindrome String");
    }
    else
    {
        printf("The entered string is not a palindrome string");
    }
    return 0;

}

int stringCounter(char s[])
{
    int length;
    length = 0;
    for(int i=0; s[i] != '\0'; ++i)
    {
        ++length;
    }
    return length;
}

int stringReverse(char s[], int length)
{
    
    int temp;
    char org[20];
    for(int i=0; s[i] != '\0'; ++i)
    {
        org[i] = s[i];
    }
    for(int i=0; i<length/2; ++i)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp; 
    }
    for(int i=0; i<length; ++i)
    {
        if(s[i] != org[i])
        {
            return 0;
        }
    }
    return 1;

}