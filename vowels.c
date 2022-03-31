//C program to print the number of vowels in a string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    //Lets convert the string to lowercase
    for(int i=0; str[i] != '\0'; ++i)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    //Lets count the number of vowels in the string
    for(int i=0; str[i] != '\0'; ++i)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            ++count;
        }
    }
    printf("The number of vowels in the string is %d", count);
    return 0;
}