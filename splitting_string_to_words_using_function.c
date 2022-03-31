//Below code is used to extract only the first word from a string
/*
#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    char* token = strtok(s, " ");
    printf("%s", token);
    return 0;
}
*/

//Below code is used to extract all the words in a string using strtok()

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    char* token = strtok(s, " ");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}