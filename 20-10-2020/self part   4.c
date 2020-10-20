#include<stdio.h>
#include<windows.h>


void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{

     //gotoxy(3,2);
    //printf("*");
    //gotoxy(100,2);
    //printf("*");
    //gotoxy(10,4);
     gotoxy(10,10);
    printf("\n\n\t  ==========================---------------------------------------=========================\n");

  //  gotoxy(10,3);
    //printf("*:");
    gotoxy(35,19);
    printf(" WELCOME TO THE H U N G G R Y P A N D A A ");

    gotoxy(10,14);
    printf("*:");
    gotoxy(100,14);
    printf(":*");

    gotoxy(10,5);
    printf("**");
    gotoxy(100,15);
    printf("**");

    gotoxy(10,6);
    printf("**");
    gotoxy(100,6);
    printf("**");

    gotoxy(10,7);
    printf("**");
    gotoxy(100,7);
    printf("**");

    gotoxy(10,8);
    printf("**");
    gotoxy(100,8);
    printf("**");

    gotoxy(10,9);
    printf("**");
    gotoxy(100,9);
    printf("**");

    gotoxy(10,10);
    printf("**");
    gotoxy(100,10);
     printf("**");


     gotoxy(10,11);
    printf("**");
    gotoxy(100,11);
     printf("**");

     gotoxy(10,12);
    printf("**");
    gotoxy(100,12);
     printf("**");


     gotoxy(10,13);
    printf("**");
    gotoxy(100,13);
     printf("**");

     gotoxy(10,14);
    printf("**");
    gotoxy(100,14);
     printf("**");


     gotoxy(10,15);
    printf("**");
    gotoxy(100,15);
     printf("**");


gotoxy(10,18);


printf("\nPress any key to continue........");
    getch();
    system("CLS");






}
