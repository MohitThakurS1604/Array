#include "stdio.h"
int main()
{
    int table[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {

        if (table[i] % 2 == 0)
        {
            printf("Even :%d\n", table[i]);
        }
        else
        {
            printf("Odd :%d\n", table[i]);
        }
    }
}