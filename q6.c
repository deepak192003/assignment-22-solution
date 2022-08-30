// Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,size=0,sum=0;
    int *ptr;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    ptr=(int *)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed");

    }
    printf("Enter the elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",ptr+i);

    }
    for(i=0;i<size;i++)
{
    if(*ptr<*(ptr+i))
    {
        *ptr=*(ptr+i);
    }
}
printf("The largest number is %d",*ptr);
}