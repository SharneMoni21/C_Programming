#include<stdio.h>

int maxSubArray(int arr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    for(int i=0; i<n; ++i)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;

}

int main()
{
    int arr[] = {-2, -1, -3, -4, -1, -2, 1, 0, 2, -1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maximum = maxSubArray(arr, size);
    printf("%d", maximum);
    return 0;
}