#include<stdio.h>

int main()
{
    int size;
    int temp;
    int i=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; ++i)
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
    // for(i=0; i<size; ++i)
    // {
    //     printf("%d ", arr[i]);
    // }
    int n1 = 0;
    int n2 = 1;
    int fibo[100];
    fibo[0] = 0;
    fibo[1] = 1;
    int sum;
    for(i=2; i<100; ++i)
    {
        sum = n1 + n2;
        fibo[i] = sum;
        n1 = n2;
        n2 = sum;
    }
    int x = 0;
    int y = 0;
    int count=0;
    int result[100];
    /*for(i=0; i<45; ++i)
    {
        printf("%d ", fibo[i]);
    }*/
    for(x=0; x<size; ++x)
    {
        for(i=0; i<45; ++i)
        {
        if(arr[x] == fibo[i])
        {
            result[y] = arr[x];
            ++count;
            ++y;
        }
        
        }
    }
    printf("%d ", result[0]);
    printf("%d", result[count-1]);
    /*for(int i=0; i<count; ++i)
    {
        printf("%d ", result[i]);
    }*/
    

    return 0;
}

