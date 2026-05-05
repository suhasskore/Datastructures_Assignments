#include<stdio.h>

int binary_search(int *arr,int size,int ele,int first,int last)
{
    int mid=first+last/2;
    if(arr[mid]==ele)
    {
        return mid;
    }

    while(last>first)
    {
        if(ele<arr[mid])
        {
            last=mid-1;
            mid=first+last;
            if(arr[mid]==ele)
            {
                return mid;
            }
        }
        else if(ele>arr[mid])
        {
            first=mid+1;
            mid=first+last;
            if(arr[mid]==ele)
            {
                return mid;
            }
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

    int index=binary_search(arr,size,ele,0,size-1);
    if(index==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Elements found at index %d",index);

    }
}