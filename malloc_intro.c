//Basic program to understand the use of malloc
/*Malloc Function:  
      It is used to dynamically allocate a single large block of contiguous memory
      The value stored in the memory locations is some garbage value*/


#include <stdio.h>
#include<stdlib.h> //The dynamic memory functions are present in this header file

int main()
{
    int num;
    printf("Enter the number of integers to be printed : ");
    scanf("%d", &num);
    //Lets create dynamic memory in heap using malloc
    int *ptr = (int*)malloc(num * sizeof(int)); //a integer pointer is returned by malloc()
    if(ptr == NULL)
    {
        printf("Memory Not allocated");
        exit(1); //which means the exit has been a failure
    }
    //Lets get the input from the user
    for(int i=0; i<num; ++i)
    {
        printf("Please enter the %d element : ", i+1);
        scanf("%d", ptr+i); //internally the elements will be assigned to the memory locations
    }
    //Lets print the elements in the screen
    for(int i=0; i<num; ++i)
    {
        printf("The %d element is : %d\n",i+1, *(ptr+i)); //we deference it, so that the elements stored in the memory
                                //location can be printed.
    }
    return 0;
}