#include "header.h"

int editmenu(int);

int editmenu(int input)
{
    int junk = 0;

    while (input != 5)
    {
        system("clear");
        printf("**********Database Editor Menu**********\n");
        printf("Please choose from the following options: \n");
        printf("1 - Search for an entry\n");
        printf("2 - Add an entry\n");
        printf("3 - Delete an entry\n");
        printf("4 - Modify an entry\n");
        printf("5 - Go back to main menu\n");
    
        scanf("%d", &input);

        printf("You chose %d\n", input);

        switch(input)
        {
            case 1:
            //searchbg()
            printf("This is inside Search for entry\n");
            scanf("%d", &junk);
            break;
            case 2:
            //addbg()
            printf("This is inside Add entry\n");
            scanf("%d", &junk);
            break;
            case 3:
            //deletebg()
            printf("This is inside Delete entry\n");
            scanf("%d", &junk);
            break;
            case 4:
            //modifybg()
            printf("This is inside Modify entry\n");
            scanf("%d", &junk);
            break;
        }
    }
    return input;
}

