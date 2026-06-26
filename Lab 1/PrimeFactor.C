#include <stdio.h>
#include <time.h>

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2)
    {
        printf("%d ", n);
    }
}

int main()
{
    int n;
    clock_t start, end;
    double cpu_time_used;

    printf("Enter a number: ");
    scanf("%d", &n);

    start = clock();

    printf("Prime factors: ");
    primeFactors(n);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nExecution Time: %f seconds\n", cpu_time_used);

    return 0;
}
