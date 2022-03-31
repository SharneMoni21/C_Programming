#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[20];
    int words[30][30];
    int wordNum = 0;
    int charNum = 0;
    int length;
    // printf("Enter a string: "); Not advisable to use in this program bcoz the 
    // scanf("%[^\n]s", str);      last word will be missed
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    for(int i=0; i < length; ++i) 
    {
        if(!isspace(str[i]))
        {
            words[wordNum][charNum] = str[i];
            ++charNum;
        }
        else
        {
            words[wordNum][charNum] = '\0';
            ++wordNum;
            charNum = 0;
        }
    }
    printf("\n\n");
    for(int i=0; i<wordNum; ++i)
    {
        for(int j=0; words[i][j] != '\0'; ++j)
        {
            if(isalnum(words[i][j]))
            {
                printf("%c", words[i][j]);
            }
        }
        printf("\n\n");
    }
    return 0;
}