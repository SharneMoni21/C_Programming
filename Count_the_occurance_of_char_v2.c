//C program to print the number of times all character occur in a given array

#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int times[20];
    int i,j;
    int count=0;
    printf("Enter a string: ");
    scanf("%[^\n]s", s);
    //Let us calculate the size of the string
    for(i=0; s[i]!='\0'; ++i)
    {
        ++count;
    }
    //printf("%d", count);
    for(i=0; i<count; ++i)
    {
        times[i] = 1;
        for(j=i+1; j<count; ++j)
        {
            if(s[i] == s[j])
            {
                ++times[i];
                s[j] = '0';
            }
        }
    }
    //Let us print the results
    for(i=0; i<count; ++i)
    {
        if(s[i] != ' ' && s[i] != '0')
        {
            printf("The number of times the character %c occured is %d times\n",s[i],times[i]);
        }
    }
    return 0;
}