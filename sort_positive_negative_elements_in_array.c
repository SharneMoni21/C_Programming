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
    printf("The positive elements are : \n");
    for(int j=0; j<pos_count; ++j)
    {
        printf("%d\n", positive[j]);
    }
    printf("The negative elements are : \n");
    for(int k=0; k<neg_count; ++k)
    {
        printf("%d\n", negative[k]);
    }
    return 0;

}