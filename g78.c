/*John wants to create a program that can print the multiplication table of any given number. He believes that this program will help him practice and understand multiplication better. 



Help John write a program that takes a number from the user and prints its multiplication table using a do-while loop. It should then print the table from 1 to 10 for that particular number.

Input format :
The input consists of an integer n.

Output format :
The output prints the multiplication table for the given number up to 10 in separate lines in the following format:

n x 1 = result1

n x 2 = result2

.

.

n x 10 = result10

where n is the input integer.*/


#include <stdio.h>

int main() {
    int number;
    int multiplier = 1;
    scanf("%d", &number);

    do {
        int product = number * multiplier;
        printf("%d x %d = %d\n", number, multiplier, product);
        multiplier++;
    } while (multiplier <= 10);

    return 0;
}
