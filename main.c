#include "bitop.h"

int main()
{
    while (1)
    {
        char arg[32];
        printf("%s", "Enter command: ");
        scanf("%s", arg);
        if (compare(arg, "hi"))
        {
            printf("%s\r\n", "Hello world!");
        }
        else if (compare(arg, "int2bin"))
        {
            int2bin(32, getint());
        }
        else if (compare(arg, "bin2int"))
        {
            bin2int();
        }
        else if (compare(arg, "add"))
        {
            bitop("+", add);
        }
        else if (compare(arg, "subtract"))
        {
            bitop("-", subtract);
        }
        else if (compare(arg, "multiply"))
        {
            bitop("*", multiply);
        }
        else if (compare(arg, "divide"))
        {
            bitop("/", divide);
        }
        else if (compare(arg, "modulus"))
        {
            bitop("%", modulus);
        }
        else if (compare(arg, "clear"))
        {
            printf("\e[1;1H\e[2J"); // clear console
        }
        else if (compare(arg, "exit"))
        {
            printf("This shall be terminated.\r\n");
            exit(0);
        }
        else
        {
            printf("Try again.\r\n");
        }
    }
}
