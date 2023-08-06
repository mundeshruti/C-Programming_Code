#include <stdio.h>

void generateFibonacci(int n);

int main()
{
    int terms;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &terms);

    generateFibonacci(terms);

    return 0;
}

void generateFibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci series for %d terms:\n", n);
    printf("%d, %d", first, second); // Printing the first two terms

    for (int i = 3; i <= n; i++)
    { // Starting from the third term
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");
}