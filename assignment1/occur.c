#include <stdio.h>

int findNthOccurrence(int arr[], int n, int key, int occ)
{
    int count = 0;

    printf("[INFO] Searching for %d occurrence of element %d\n", occ, key);

    for(int i = 0; i < n; i++)
    {
        printf("[DEBUG] Checking index %d (value=%d)\n", i, arr[i]);

        if(arr[i] == key)
        {
            count++;
            printf("[LOG] Match found! Count = %d\n", count);

            if(count == occ)
            {
                printf("[FOUND] %d occurrence at index %d\n", occ, i);
                return i;
            }
        }
    }

    printf("[WARN] %d occurrence not found\n", occ);
    return -1;
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key, occ;

    printf("Enter element to search: ");
    scanf("%d", &key);

    printf("Enter occurrence number (n): ");
    scanf("%d", &occ);

    int result = findNthOccurrence(arr, n, key, occ);

    if(result != -1)
        printf("Result: Element found at index %d\n", result);
    else
        printf("Result: Element not found\n");

    return 0;
}