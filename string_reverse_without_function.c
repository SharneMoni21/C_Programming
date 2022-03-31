#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int count=0;
    int temp;
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    //Lets count the number of character present in the string
    for(int i=0; s[i] != '\0'; ++i)
    {
        ++count;
    }
    //printf("count: %d", count);
    //Lets interchange the string
    for(int i=0; i<count/2; ++i)
    {
        temp = s[i];
        s[i] = s[count-1-i];
        s[count-1-i] = temp;
    }
    printf("The interchanged string is %s", s);
    return 0;
}