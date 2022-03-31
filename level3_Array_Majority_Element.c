//C program to print the majority element in an array

#include<stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int j;
    int count;
    int temp;
    for(int i=0; i<size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; ++i)
    {
        for(j=i+1; j<size; ++j)
        {
            if(arr[i] == arr[j])
            {
                ++count;
                if(count>size/2)
                {
                    temp = arr[i];
                    break;
                }
            }
        }
    }
    printf("%d", temp);
    return 0;
}