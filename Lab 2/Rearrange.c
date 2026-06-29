// Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

#include <stdio.h>

void rearrange(int arr[], int n)
{
    int pos[n], neg[n];
    int posIndex = 0, negIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos[posIndex++] = arr[i];
        }
        else
        {
            neg[negIndex++] = arr[i];
        }
    }
    int i = 0, j = 0, k = 0;

    while (i < posIndex && j < negIndex)
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i < posIndex)
    {
        arr[k++] = pos[i++];
    }

    while (j < negIndex)
    {
        arr[k++] = neg[j++];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
}
    printf("\n");
}

int main()
{
    int arr[] = {1, 6, 9, -3, -8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printArray(arr, n);

    return 0;
}
