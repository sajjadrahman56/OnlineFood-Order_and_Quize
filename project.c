#include<stdio.h>
#include <stdlib.h>
void switchCase();
void main()
{
    system("COLOR D7");
    printf("\n\n\n\t\t\t*****************************\n");
    printf("\t\t\t**\t\t\t   **\n\t\t\t**\t\t\t   **\n\t\t\t**\twelcome To The     **\n\t\t\t**\t\t\t   **\n\t\t\t**\tTEAM Ragankar      **\n\t\t\t**\t\t\t   **\n\t\t\t**\t\t\t   **\n\t\t\t**\t\t\t   **\n");
    printf("\t\t\t*****************************\n");

    printf("\n\nPlease enter your name : \n");
    printf("\n\nPlease enter  age: \n\n\n");

    getch();


    switchCase();

    getch();
}
void switchCase()
{
    int a ;

    printf("Enter any number : \n");

    printf(" Press 1 : name \t\t Press 2 : Gf \n");
    printf(" Press 4 : bou  \t\t Press 3 : jamai \n");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        system("cls");
        system("COLOR 6C");
        printf("Sajjad\n");
        break;
    case 2:
        printf("sajjad\n");
        break;
    case 3:
        printf(" jid\n");
        break;
    case 4:
        printf(" san\n");
        break;
    default:
        printf("Wrong input \n");
    }

}
