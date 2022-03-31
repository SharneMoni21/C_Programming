#include<stdio.h>
#include<string.h>

//Function to print all the substrings
void subString(char str[], char sub[], int i, int j)
{
    int count = 0;
    while(count<j)
    {
        sub[count] = str[i+count];
        ++count;
    }
    sub[count] = '\0';
}

//Function to check whether substring is palindrome or not
int palindromeChecker(char sub[])
{
    char dummy[20];
    int size;
    size = strlen(sub);
    if(size == 1) return 0;
    int temp;
    //Lets copy the org substring to another string
    for(int i=0; sub[i] != '\0'; ++i)
    {
        dummy[i] = sub[i];
    }
    //Lets reverse the dummy string
    for(int i=0; i<size/2; ++i)
    {
        temp = dummy[i];
        dummy[i] = dummy[size - 1 - i];
        dummy[size - 1 - i] = temp;
    }
    // for(int i=0; i<size; ++i)
    // {
    //     printf("%c", dummy[i]);
    // }
    // printf("\n");
    //Lets check whether the reversed string is same as org string
    for(int i=0; i<size; ++i)
    {
        if(sub[i] != dummy[i]) 
        {
        return 0;
        }
    }
    return 1;
}

int main()
{
    char str[20];
    char sub[10];
    int flag;
    int count;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    int len = strlen(str);
    for(int i=0; i<len; ++i)
    {
        for(int j=1; j<=len-i; ++j)
        {
            subString(str, sub, i, j);
            flag = palindromeChecker(sub);
            if(flag == 1)
            {
                printf("The Palindrome String is : %s\n", sub);
                ++count;
            }
        }
    }
    if(count == 0)
    {
        printf("There is no palindrome substring");
    }
    else
    {
        printf("The number of palindrome string is : count: %d", count);
    } 
}