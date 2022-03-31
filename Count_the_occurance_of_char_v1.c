//C Program to calculate the occurance of a given character in a string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    char c;
    int count=0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter the character to be counted: ");
    scanf("%s", &c);
    for(int i=0; str[i] != '\0'; ++i)
    {
        if(c == str[i])
        {
            //printf("Hi\n");
            ++count;
        }
    }
    printf("The character %c occured %d times.",c,count);
    return 0;
}