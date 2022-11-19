/*
Program to evaluate face values.
Realeased under the Vegas Public License.

This cards file does the same thing as the 01 file.
but here I here utilise "switch statements" in place of "if else statement"
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name); // scanf is used to accept inputs from the user
    int val = 0;

    switch (card_name[0])
    {
    // switch statements can replace a sequence of if statements.
    // if you're performing multiple checks on the same variable then it will be better to use a *switch* statement.
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;

    case 'A':
        val = 11;
        break;

    default:
        val = atoi(card_name);
        break;
    }

    // check if the value is 3 to 6
    if ((val >= 3) && (val <= 6))
    {
        puts("Counts has gone up");
    }
    // Otherwise check if the card was 10, J, Q or K
    else if (val == 10)
    {
        puts("Count has gone down");
    }
    printf("The card value is: %i\n", val);
}