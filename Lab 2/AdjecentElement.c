// Given an array arr[], the task is to generate all the possible subarrays of the given array with adjacent elements.

#include <stdio.h>

void printSubarrays(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            printf("[");

            for (int i = start; i <= end; i++)
            {
                printf("%d", arr[i]);
                if (i < end)
                {
                    printf(", ");
                }
            }
            printf("]\n");
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarrays(arr, n);
    return 0;
}
