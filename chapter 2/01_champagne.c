/*
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stock = 259;
    int order;

    while (stock > 0)
    {
        printf("%i glasses left\n", stock);
        scanf("%i", &order);
        stock = stock - order;
        printf("You ordered for %i glasses\n", order);
    }

    puts("We're out of stock");

    return 0;
}
