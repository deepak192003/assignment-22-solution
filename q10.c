//  Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,size=0;
    ptr=(int *)malloc(size*sizeof(int));

printf("Enter the size of an array: ");
scanf("%d",&size);

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
    if(*ptr<*(ptr+i))
    {
        *ptr=*(ptr+i);
    }
    
}
printf("Largest number is %d",*ptr);
for(i=0;i<size;i++)
{
    if(*ptr>*(ptr+i))
    {
        *ptr=*(ptr+i);
    }
    
}
printf("Minimum number is %d",*ptr);
}