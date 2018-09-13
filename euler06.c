#include <stdio.h>

/*
Project Euler Problem 6

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

int main()
{
    //initializes the necessary variables
    int sum = 0;
    int count;
    
    //uses a for loop to count through the first 100 natural numbers
    //this gets the sum of the squares
    for(count = 1; count < 101; count++)
        sum += count * count;

    //using the sum of arithmatic sequence formula to simplify getting the square of the sum
    int square = (100 * (1 + 100)) / 2;
    square = square * square;

    //prints the difference, which is what is asks for
    printf("%d\n", square - sum);
}
