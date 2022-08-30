// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,sum=0,size=0;
    int i=0;
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    ptr=(int *)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Failed!");
        return 0;

    }
    printf("Enter elements: ");
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