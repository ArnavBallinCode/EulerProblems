#include <stdio.h>

int main() 
{
    int a = 1, b = 2;
    int sum_even = 0;

    // Loop to generate Fibonacci sequence until the term exceeds 4 million
    while (a <= 4000000) 
    {
        if (a % 2 == 0) {
            sum_even = sum_even + a;
        }
        // Move to the next term
        int next = a + b;
        a = b;
        b = next;
    }

    printf("The sum of the even-valued terms is: %d\n", sum_even);

    return 0;
}
