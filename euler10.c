#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main()
{
    int i;
    long sum = 0;

    for (i = 2; i <  2000000; i++)
    {
        if (is_prime(i) == 1)
            sum += i;
    }

    printf("%ld\n", sum);
    
    return 0;
}

int is_prime(int num)
{
    int i;
    
    for (i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
