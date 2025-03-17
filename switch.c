#include <stdio.h>
// switch is used with const one of the principla use is created a state machine like a robot

int opt1 = 0;
int opt2 = 0;
int main()
{
    printf("Welcome to the store'\n'");
    printf("option 0. for drinks'\n' option 1. for food'\n' option 2. for dessert'\n'");
    switch (opt1)
    {
    case 0:
        /* menu of drinks */
        printf("You choose opction 0, you're gonna see the menu of drinks '\n'");
        printf("Choose your option'\n' 0. to coke without sugar,'\n' 1. coke with sugar, '\n' 2. Pina Colada'\n'");
        break;
        switch (opt2)
        {
        case 0:
            /* intruder coke  */
            printf("you choose opction 0, '\n' A coke without sugar, Delicious!!");
            break;

        case 1:
            /* intruder dispertion */
            printf("you choose opction 1, '\n' A coke with sugar, Delicious!!");
            break;

        case 2:
            /* intruder piña coladan */
            printf("you choose opction 2, '\n' A piña colada, Delicious!!");
            break;

        default:
            printf("not valid option");
            break;
        }

    default:
        printf("not valid option");
        break;
    }
}
