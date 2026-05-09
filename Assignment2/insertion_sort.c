#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
int arr[SIZE],i,j,temp,iter=0,comp=0;
printf("Enter 10 numbers:");
for(i=0;i<10;i++)
{
    arr[i]=rand()%100;
}
printf("The numbers are before sorting:");
for(i=0;i<SIZE;i++)
{
    printf("%d ",arr[i]);
}


for(i=1;i<SIZE;i++)
{
    iter++;
    temp= arr[i];
    for(j=i-1;(j>-1 && temp > arr[j]);j--)
    {
        comp++;
            arr[j+1]=arr[j];   
    }
    arr[j+1]=temp;
}
printf("\nThe numbers are after descending sorting:");
for(i=0;i<SIZE;i++)
{
    printf("%d ",arr[i]);
}
printf("\nNumber of iterations: %d", iter);
printf("\nNumber of comparisons: %d\n", comp);
return 0;
}