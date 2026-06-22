// Write a program to find the factorial of a number using recursion.
#include <stdio.h>
#include<time.h>

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    clock_t st, end;
    long long num;
    printf("Enter a positive integer: ");
    scanf("%lld", &num);

    st = clock();
    if(num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        long long result = factorial(num);
        printf("Factorial of %lld is %lld\n", num, result);
    }
    end = clock();
    double time_taken = (double)(end - st) / CLOCKS_PER_SEC;
    printf("Time taken to calculate factorial of %lld: %f seconds\n", num, time_taken);

    return 0;
}
