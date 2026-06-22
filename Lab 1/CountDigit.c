// Write a code to find the number of digits in a given number using recursion.
#include <stdio.h>
#include <time.h>

int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    clock_t start = clock();
    int result = countDigits(n);
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The number of digits in %d is: %d\n", n, result);
    printf("Time taken to calculate: %f seconds\n", time_taken);
    return 0;
}
