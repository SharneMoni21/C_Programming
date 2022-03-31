#include<stdio.h>
#include<math.h>
int main()
{
    int input;
    int factor;
    int limit;
    scanf("%d", &input);
    if(input%2==0 && input!=2)
    {
        printf("Composite Number");
    }
    else if(input%6==1 || input%6==5 || input==2 || input==3)
    {
        limit = sqrt(input);
        for(factor=3; factor<=limit; factor=factor+2)
        {
            if(input%factor == 0)
            {
                break;
            }
        }
        if(factor>limit)
        {
            printf("Hi");
            printf("Prime Number");
        }
        else //This step is optional 
        {
            printf("Composite Number");
        }
    }
    else
    {
        printf("Composite Number");
    }
    return 0;
}