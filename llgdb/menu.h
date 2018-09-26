
#include "header.h"

void menu()
{
    int input   =   0;
    int junk    =   0;

    while (input != 4)
    {
        system("clear");
        printf("*******MATT'S BOARD GAME DATABASE*******\n");
        printf("Please choose from the following options: \n");
        printf("1 - Randomizer\n");
        printf("2 - Edit Board Game Database\n");
        printf("3 - Search Board Game Database\n");
        printf("4 - Quit\n");

        scanf("%d", &input);

        printf("You chose %d\n", input);

        switch(input)
        {
            case 1:
            //randomizer();
            printf("This is inside the randomizer!\n");
            scanf("%d", &junk);
            break;
            case 2:
            //editmenu();
            printf("This is inside the edit menu!\n");
            scanf("%d", &junk);
            break;
            case 3:
            //search();
            printf("This is inside the search menu!\n");
            scanf("%d", &junk);
            break;
        }        
    }

    printf("Thank you for using Matt's Board Game Database!\n");

}
