#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int negative[size];
    int positive[size];
    int j=0;
    int k=0;
    int pos_count = 0;
    int neg_count = 0;
    int total_count;
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; ++i)
    {
        if(arr[i] > 0)
        {
            positive[j] = arr[i];
            ++pos_count;
            ++j;
        }
        else
        {
            negative[k] = arr[i];
            ++neg_count;
            ++k;
        }
    }
    if(pos_count > neg_count)
    {
        total_count = pos_count;
    }
    else
    {
        total_count = neg_count;
    }
    for(int i = 0; i<total_count; ++i)
    {
        if(i<pos_count)
        { 
           printf("%d ", positive[i]);
        }
        if(i<neg_count)
        {   
           printf("%d ", negative[i]);
        }
    }
    
    return 0;

}