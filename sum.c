#include <stdio.h>

// Function to calculate sum of first 10 natural numbers
int sumFirst10()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int number;
    scanf("%d", &number);
    // Calculate sum of first 10 natural numbers
    int sum = sumFirst10();
    printf("Sum of first 10 natural numbers = %d\n", sum);

    return 0;
}
