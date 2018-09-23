//////////////////////////////////////////////////
//
// Board Game DataBase
//
// bgdb.c - a program to organize and randomize
//          board game for selection by using
//          certain crieria, build on a linked
//          list.
//
/////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
//#include<game.h>
//#include<list.h>

void menu();

int main()
{
    menu();

    return 0;
}

//menu definition
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

    return 0;
}
