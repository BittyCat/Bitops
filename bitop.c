#include "bitop.h"

int getint()
{
    int n;
    printf("%s", "Type an integer: ");
    scanf("%d", &n);
    return n;
}

int compare(char *strA, char *strB)
{
    int i = 0;
    while (strA[i] != '\0' && strB[i] != '\0')
    {
        if (strA[i] != strB[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void int2bin(int length, int integer)
{
    char str[length + 1];
    for (int i = 0; i < length; i++)
    {
        str[length - 1 - i] = (integer & 0x01) + '0';
        integer = integer >> 1;
    }
    str[length] = '\0';
    printf("%s\r\n", str);
}

/*
 * '0' = 48 ASCI
 * '1' = 49 ASCI
 * \0  =  0 ASCI
 */

int bin2int()
{
    char str[65];
    printf("%s\r\n", "Enter bits:");
    scanf("%s", str);
    int integer = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        integer |= str[i] - 48;
        integer = integer << 1;
        i++;
    }
    integer = integer >> 1;
    printf("%d\r\n", integer);
    return integer;
}

void bitop(char *op, int (*f)(int, int))
{
    int a = getint();
    int2bin(32, a);
    int b = getint();
    int2bin(32, b);
    int r = (*f)(a, b);
    printf("%d %s %d = %d\r\n", a, op, b, r);
    int2bin(32, r);
}

/*
 * 0111 -> 0110 0100 0000 1000 = sum
 * 0001 -> 0010 0100 1000 0000 = carry
 */

int add(int a, int b)
{
    int carry; // 1 & 1 = 1
    while (b != 0)
    {
        carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

/*
 * 1000 -> 1001 1011 1111 0111 = dif
 * 0001 -> 0010 0100 1000 0000 = borrow
 */

int subtract(int a, int b)
{
    int borrow; // ~0 & 1 = 1
    while (b != 0)
    {
        borrow = (~a & b) << 1;
        a = a ^ b;
        b = borrow;
    }
    return a;
}

/*
 * a * b = a * b0 + ... + a * bi
 * a * bi = a * (0x01 << i) | 0 = a << i | 0
 */

int multiply(int a, int b)
{
    int r = 0;
    while (b > 0)
    {
        if (b & 1)
        {
            r = add(r, a);
        }
        a = a << 1;
        b = b >> 1;
    }
    return r;
}

int divide(int a, int b)
{
    int r = 0;
    while (a >= b)
    {
        a = subtract(a, b);
        r++;
    }
    return r;
}

int modulus(int a, int b)
{
    while (a >= b)
    {
        a = subtract(a, b);
    }
    return a;
}
