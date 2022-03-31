#include<stdio.h>

int main()
{
    long int cases;
    scanf("%ld", &cases);
    long int values[cases];
    long int result[cases];
    long int digit;
    long int count;
    for(int i=0; i<cases; ++i)
    {
        scanf("%ld", &values[i]);
    }
    for(int i=0; i<cases; ++i)
    {
        while(values[i])
        {
            digit = values[i] % 10;
            if(digit == 4)
            {
                ++count;
            }
            values[i] = values[i] / 10;
        }
        result[i] = count;
        count = 0;
    }
    for(int i=0; i<cases; ++i)
    {
        printf("%ld\n", result[i]);
    }
    return 0;
}