#include<stdio.h>
#include<math.h>

int main()
{
    int input;
    scanf("%d", &input);
    int count=0;
    int limit;
    int factor;
    limit = sqrt(input);
    for(int i=2; i<=100; ++i)
    {
        if(i%2==0 && i!=2)
        {
            //printf("Composite");
            continue;
        }
        else if(i%6==5 || i%6==1 || i==2 || i==3)
        {
            for(factor=3; factor<=limit; factor = factor+2)
            {
                if(i%factor == 0)
                {
                    break;
                }
            }
            if(factor > limit)
            {
                //printf("prime");
                ++count;
            }
        }
        else
        {
            //printf("Composite");
            continue;
        }
        if(count == input)
        {
            printf("Prime Number : %d", i);
            break;
        }
    }
    return 0;
}