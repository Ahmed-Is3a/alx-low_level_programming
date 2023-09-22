#include "main.h"
/**
 * print_number -  encodes a string into 1337. leet
 *
 * @n: number.
 * Return: Always 0.
 */

void print_number(int n)
{
    int reversed = 0;
    int digit;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n == 0) {
        _putchar('0');
        return;
    }


    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    while (reversed > 0) {
        digit = reversed % 10;
        _putchar('0' + digit);
        reversed /= 10;
    }
}
