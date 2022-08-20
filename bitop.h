#include <stdio.h>
#include <stdlib.h>

#ifndef BITOP_DEFINED
#define BITOP_DEFINED

int getint();
int compare(char *strA, char *strB);

void int2bin(int length, int integer);
int bin2int();

void bitop(char *op, int (*f)(int, int));

int add(int a, int b);
int subtract(int a, int b);

int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

#endif