#include "include/main.h"

/**
 * main - this file is the main file where we gonna call the other functions
 * it's, so it's the more important file;
 */

int main(void)
{
        /* Declaring the variables that we will need*/
        char line[BUFFER];
        int parserNumber;

        /* Get the the syntax you want to parse*/
        printf("Enter a number: ");
        fgets(line, BUFFER, stdin);

        /* get the number from the parse function */

        /* Call parser and give him the address of the line*/
        if (parser(line, &parserNumber))
        {
                printf("Number = %d\n", parserNumber);
        }
        else
        {
                printf("Invalid entry.\n");
        }


        return (0);
}
