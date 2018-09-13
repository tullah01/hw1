#include <stdio.h>

int main()
{
    int sum = 0;
    int count;
    
    for(count = 1; count < 101; count++)
        sum += count * count;
    
    int square = (100 * (1 + 100)) / 2;
    square = square * square;

    printf("%d\n", square - sum);
}
