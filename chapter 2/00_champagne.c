/*
 *This is a simple dump program to keep track of orders at a party
 *it will be properly fixed. :)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stock = 180;      /*180 glasses in stock*/
    char order_string[3]; /*this statement will allow the user to enter a num of up to 2 digits*/
    int order;
    while (stock > 0)
    {
        printf("%i glasses left\n", stock);
        scanf("%2s", order_string); /*read a "2-character" string for the order*/
        order = atoi(order_string); /*convert that string into a number called 'order'.*/
        stock = stock - order;

        printf("You ordered %i glasses\n", order);
    }

    puts("We're out of stock, baby!");
    return 0;
}