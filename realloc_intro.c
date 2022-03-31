//Simple C program to understand the basics of realloc() function

/*Realloc() Function : (Reallocate Memory)
   realloc function is used to change the size of memory block without losing the old data
   we may lose data when the new size is smaller than the old size
   newly allocated bytes are uninitialized*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    int more_elements;
    int choice;
    printf("Enter the total number of elements : ");
    scanf("%d", &num);
    //Lets allocate the memory using malloc
    int *ptr = (int*)malloc(num * sizeof(int));
    //Lets get the input from the user
    for(int i=0; i<num; ++i)
    {
        printf("Enter the %d element : ", i+1);
        scanf("%d", ptr+i);
    }
    //Now let us ask the user does he want to enter more elements
    printf("Do you want to enter more elements : (1/0) ");
    scanf("%d", &choice);
    if(choice == 0)
    {
        for(int i=0; i<num; ++i)
        {
            printf("The %d element is %d", i+1, *(ptr+i));
        }
    }
    else
    {
        printf("How many more elements you want to ennter : ");
        scanf("%d", &more_elements);
        //Let us reallocate the memory using realloc()
        ptr = (int *)realloc(ptr, (more_elements+num)*sizeof(int));
        //Lets us get the elements from the user
        for(int i=num; i<(more_elements+num); ++i)
        {
            printf("Enter the %d element : ", i+1);
            scanf("%d", ptr+i);
        }
        for(int i=0; i<(more_elements+num); ++i)
        {
            printf("The %d element is %d\n", i+1, *(ptr+i));
        }
    }
    return 0;
}