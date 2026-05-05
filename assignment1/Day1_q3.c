#include<stdio.h>

void binary_descending(int *arr, int n, int ele)
{
    int left = 0, right = n - 1;

    printf("[INFO] Starting Binary Search (Descending Order)\n");

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("[DEBUG] left=%d right=%d mid=%d value=%d\n",
               left, right, mid, arr[mid]);

        if(arr[mid] == ele)
        {
            printf("[FOUND] Element found at index %d\n", mid);
            return;
        }
        else if(arr[mid] < ele)
        {
            // move LEFT side
            printf("[LOG] Moving LEFT\n");
            right = mid - 1;
        }
        else
        {
            // move RIGHT side
            printf("[LOG] Moving RIGHT\n");
            left = mid + 1;
        }
    }

    printf("[WARN] Element not found\n");
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in descending order:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ele;
    printf("Enter element to search: ");
    scanf("%d", &ele);

    binary_descending(arr, size, ele);

    return 0;
}