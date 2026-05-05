#include<stdio.h>

int linear_search(int *arr,int size,int ele)
{
     for(int i=0;i<size;i++)
    {
        if(arr[i]==ele)
        {
            return i;
        }
    }

    return -1;

}
int main()
{
    int size;
    printf("Enter the size of array you want\n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ele;
    printf("Enter the element to find");
    scanf("%d",&ele);

    int index=linear_search(arr,size,ele);
    if(index==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Elements found at index %d",index);

    }


    
}