
#include<stdlib.h>
#include<stdio.h>

//void menu();

void menu()
{
    int input   =   0;

    while (input != 3)
    {
        system("clear");
        printf("MATT'S BOARD GAME DATABASE\n");
        printf("Please choose from the following options: \n");
        printf("1 - Do something\n");
        printf("2 - Do something else\n");
        printf("3 - Quit\n");

        scanf("%d", &input);

        printf("You chose %d\n", input);
    }

    printf("Thank you for using Matt's Board Game Database!\n");

    //return 0;
}
