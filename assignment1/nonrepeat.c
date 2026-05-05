#include <stdio.h>

void repeat(int *arr, int size)
{
    int visited[size];   // industry: dynamic sizing
    for(int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    for(int i = 0; i < size; i++)
    {
        if(visited[i] == 1)
        {
            // LOG: already processed element
            continue;
        }

        int count = 1;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;

                // LOG: duplicate found
                printf("[DEBUG] Found duplicate of %d at index %d\n", arr[i], j);
            }
        }

        if(count > 1)
        {
            printf("[RESULT] %d occurs %d times\n", arr[i], count);
        }
    }
}

int main()
{
    int arr[] = { 1, 2, 3, -1, 2, 1, 0, 4, -1, 7, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("[INFO] Starting duplicate detection...\n");

    repeat(arr, size);

    printf("[INFO] Completed.\n");

    return 0;
}