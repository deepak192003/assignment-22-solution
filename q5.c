// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,sum=0,*ptr;
int size=0;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    ptr=(int *)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed");
        return 0;

    }

    printf("Enter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);

    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("Sum is %d",sum);
    free(ptr);
    return 0;
}