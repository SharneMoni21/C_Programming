#include<stdio.h>
#include<math.h>

int main()
{
    int input;
    int arr[200];
    int count=0;
    int limit;
    int factor;
    scanf("%d", &input);
    //Lets create a array of prime numbers upto 100
    while(count < 100)
    {
            for(int i=2; i<=550; ++i)
            {
            if(i%2==0 && i!=2)
            {
                //printf("Composite");
                continue;
            }
            else if(i%6==5 || i%6==1 || i==2 || i==3)
            {
                limit = sqrt(i);
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
                    arr[count] = i;
                    ++count;
                }
            }
            else
            {
                //printf("Composite");
                continue;
            }
            // if(count == input)
            // {
            //     printf("Prime Number : %d", i);
            //     break;
            // }
            }
    }
    printf("%d", arr[input - 1]);
    return 0;
}