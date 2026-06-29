// Write a program to sort array elements using bubble sort. Read n elements given by user from file and observe cpu time taken

#include <stdio.h>
#include<time.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    FILE *fp;
    int arr[10000];
    int n;
    clock_t start, end;

    n = 1000;

    // Best Case 1000
    fp = fopen("bestcase1000.txt", "r");
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);

    start = clock();
    bubbleSort(arr, n);
    end = clock();

    fp = fopen("bestcase1000_sorted.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%d\n", arr[i]);
    }
    fclose(fp);

    printf("Time taken to sort best case for 1000 elements: %lf seconds\n",
           (double)(end - start) / CLOCKS_PER_SEC);

      //  Worst Case 1000
        fp = fopen("worstcase1000.txt", "r");
        for (int i = 0; i < n; i++)
        {
            fscanf(fp, "%d", &arr[i]);
        }
        fclose(fp);

        start = clock();
        bubbleSort(arr, n);
        end = clock();

        fp = fopen("worstcase1000_sorted.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(fp, "%d\n", arr[i]);
        }
        fclose(fp);

        printf("Time taken to sort worst case for 1000 elements: %lf seconds\n",
               (double)(end - start) / CLOCKS_PER_SEC);

        // Average Case 1000
        fp = fopen("averagecase1000.txt", "r");
        for (int i = 0; i < n; i++)
        {
            fscanf(fp, "%d", &arr[i]);
        }
        fclose(fp);

        start = clock();
        bubbleSort(arr, n);
        end = clock();

        fp = fopen("averagecase1000_sorted.txt", "w");
        for (int i = 0; i < n; i++)
        {
            fprintf(fp, "%d\n", arr[i]);
        }
        fclose(fp);

        printf("Time taken to sort average case for 1000 elements: %lf seconds\n",
            (double)(end - start) / CLOCKS_PER_SEC);
    }
