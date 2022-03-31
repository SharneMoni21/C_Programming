#include<stdio.h>
#include<math.h>

int smallestPrime(int arr[], int length);
int largestPrime(int arr[], int length);
int checkPrime(int n);

int main()
{
    int size;
    int temp;
    int flag;
    int leftPrime;
    int rightPrime;
    int leftcount;
    int rightcount;
    int minPrime;
    int maxPrime;
    int nearestPrime;
    int total;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    //Lets sort the array
    for(int i=0; i<size; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    minPrime = smallestPrime(arr, size);
    //printf("Minimum = %d\n", minPrime);
    maxPrime = largestPrime(arr, size);
    //printf("Maximum: %d", maxPrime);
    total = minPrime + maxPrime;
    flag = checkPrime(total);
    if(flag == 1)
    {
        printf("%d", total);
    }
    else
    {
        for(int i=total; i<=total+10; ++i)
        {
            if(i == maxPrime)
            {
                continue;
            }
            else
            {
            flag = checkPrime(i);
            if(flag == 1)
            {
                rightPrime = i;
                break;
            }
            }
        }
        for(int j=total; j>=total-10; --j)
        {
            if(j == maxPrime)
            {
                continue;
            }
            else
            {
                flag = checkPrime(j);
                if(flag == 1)
                {
                    leftPrime = j;
                    break;
                }
            }
        }
    }
    leftcount = total - leftPrime;
    rightcount = rightPrime - total;
    if(rightcount == leftcount)
    {
        printf("%d", rightPrime);
    }
    else if(rightcount > leftcount)
    {
        printf("%d", leftPrime);
    }
    else
    {
        printf("%d", rightPrime);
    }
    return 0;
}

int smallestPrime(int arr[], int length)
{
    int limit;
    int factor;
    for(int i=0; i<length; ++i)
    {
        if(arr[i]%2==0 && arr[i]!=2)
        {
            //printf("Composite Number");
            continue;
        }
        else if(arr[i]%6==1 || arr[i]%6==5 || arr[i]==2 || arr[i]==3)
        {
            limit = sqrt(arr[i]);
            for(factor=3; factor<=limit; factor=factor+2)
            {
                if(arr[i]%factor == 0)
                {
                    break;
                }
            }
            if(factor>limit)
            {
                return arr[i];
                break;
            }
            // else //This step is optional 
            // {
            //     printf("Composite Number");
            // }
        }
        else
        {
            // printf("Composite Number");
            continue;
        }
    }
}

int largestPrime(int arr[], int length)
{
    int limit;
    int factor;
    for(int i=length-1; i>=0; --i)
    {
        if(arr[i]%2==0 && arr[i]!=2)
        {
            //printf("Composite Number");
            continue;
        }
        else if(arr[i]%6==1 || arr[i]%6==5 || arr[i]==2 || arr[i]==3)
        {
            limit = sqrt(arr[i]);
            for(factor=3; factor<=limit; factor=factor+2)
            {
                if(arr[i]%factor == 0)
                {
                    break;
                }
            }
            if(factor>limit)
            {
                return arr[i];
                break;
            }
            // else //This step is optional 
            // {
            //     printf("Composite Number");
            // }
        }
        else
        {
            // printf("Composite Number");
            continue;
        }
    }
}

int checkPrime(int n)
{
    int limit = sqrt(n);
    int factor;
    if(n%2==0 && n!= 2)
    {
        return 0;
    }
    else if(n%6==1 || n%6==5 || n==2 || n==3)
    {
        for(factor = 3; factor<=limit; factor=factor+2)
        {
            if(n%factor==0)
            {
                return 0;
            }
        }
        if(factor>limit)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}