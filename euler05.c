#include <stdio.h>

int main()
{
    int count = 2530;
    while(1)
    {
        if (count % 9 == 0 && count % 11 == 0 & count % 12 == 0 & count % 13 == 0 & count % 14 == 0 && count % 15 == 0 && count % 16 == 0 && count % 17 == 0 && count % 18 == 0 && count % 19 == 0 && count % 20 == 0)
            break;
        else
            count += 10;
    }
    printf("%d\n", count);
}
