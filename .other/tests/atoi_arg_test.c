#include "stdlib.h"
#include "stdio.h"

// test atoi using multin - and + ans paces


int main(int ac, char   **av)
{
    if (ac == 2)
    {
        int res = atoi(av[1]);
        printf("atoi: %d\n", res);
    }
    return (0);
}
