#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void  logIn();
int Registration();
int signin();

struct signin
{
    char fname[25];
    char lname[25];
    char username[25];
    char address[100];
    int number[11];
    char password[25];
};


void gotoxy(int x,int y)   //  use  cordinate
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int loading()
{
    int i,j,a;
    printf("\n\t\t\t LOADING...\n\t\t\t");
    for(i=0; i<=11; i++)
    {
        for(j=0; j<100000000; j++)
            a=j;
        printf("%c",177);
    }
}
void welcome()
{

    printf("\n\n\n\n");
    printf("\t\t\t===================---------------------------------------------==================\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t**********************************************************************************\n");
    printf("\t\t\t*********                                                                *********\n");
    printf("\t\t\t********                                                                  ********\n");
    printf("\t\t\t*******                                                                    *******\n");
    printf("\t\t\t******                     W E L C O M E    TO                              ******\n");
    printf("\t\t\t*****                                                                        *****\n");
    printf("\t\t\t****                               T H E                                      ****\n");
    printf("\t\t\t***                                                                            ***\n");
    printf("\t\t\t**                                                                              **\n");
    printf("\t\t\t**                        H U N G R Y  - P A N D A                               *\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t* ...............................................................................*\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t*                                                                                *\n");
    printf("\t\t\t**********************************************************************************\n");
}


int main()
{
    int enter;
    welcome();

    gotoxy(8,32);
    printf("Press any key to continue :......");
    getch();

    logIn();

    scanf("%d",&enter);
    if(enter==1)
    {
        system("CLS");
        Registration();
    }
    else if(enter==2)
    {
        system("CLS");
        signin();
    }

    return 0;
}


int signin()
{
    char username[25];
    char password[25];
    FILE*HungryPanda;
    HungryPanda=fopen("HungryPanda1.txt","r");
    struct signin f;

    gotoxy(20,3);
    printf("UserName: ");

    scanf("%s",&username);
    gotoxy(20,6);
    printf("Password: ");
    scanf("%s",&password);

    while (fread(&f,sizeof(f),1,HungryPanda))
    {
        if(strcmp(username,f.username)==0 && strcmp(password,f.password)==0)
        {
            system("CLS");
            loading();
            system("CLS");
            gotoxy(20,6);
            printf("\n\t\t\tYou have successfully logged in...\n ");
            //gotoxy(10,8);
            //printf("Welcome to Hungry Panda");
           welcome();

            printf("\n\n\n\t\t\tChoose any option : ");
            printf("\n\n\t\t\t\t\t1. Order\n");
            printf("\n\t\t\t\t\t2. Awaiting Food List\n");
            printf("\n\t\t\t\t\t3. Information & Quiz \n");
            printf("\n\t\t\t\t\t4. Exit\n");
        }
        else
        {
            system("CLS");
            loading();
            system("CLS");

            gotoxy(10,10);
            printf("\n\t\tOops! Wrong userID or password.Please enter the correct userID and password\n\n");

            gotoxy(10,2);
            signin();
        }
    }
    fclose(HungryPanda);
}

int Registration()
{
    FILE*HungryPanda;
    HungryPanda=fopen("HungryPanda1.txt","w");
    struct signin f;

    gotoxy(10,6);
    printf("Enter Frist name: ");
    scanf("%s",f.fname);

    gotoxy(10,8);
    printf("Enter Last name: ");
    scanf("%s",f.lname);

    gotoxy(10,10);
    printf("Enter username: ");
    scanf("%s",f.username);

    gotoxy(10,12);
    printf("Enter your address: ");
    scanf("%s",f.address);

    gotoxy(10,14);
    printf("Enter your Number: ");
    scanf("%s",f.number);

    gotoxy(10,16);
    printf("Enter your password: ");
    scanf("%s",f.password);
    fwrite(&f,sizeof(f),1,HungryPanda);
    fclose(HungryPanda);

    loading();
    system("CLS");



    gotoxy(10,6);
    printf("Your User name is %s\n",f.username);

    gotoxy(10,8);
    printf("Now Sign-in to Hungry Panda with your userID and password");

    gotoxy(10,10);
    printf("Press any key to continue : ...");

    getch();
    system("CLS");

    signin();
}


void  logIn()
{
    system("CLS");
    gotoxy(40,4);
    printf("Some Information :-");

    gotoxy(10,6);
    printf("=> For the very first time you must be REGISTRATION  and later on  SIGN IN option work");

    gotoxy(10,8);
    printf("=> Be careful !!  when you  Input your name  and your password ");

    gotoxy(10,10);
    printf("=> Your user name is Your User ID");

    gotoxy(10,12);
    printf("=> Note that 'You can only Registration one device for one Account'");


    gotoxy(10,16);
    printf("Press 1 : Registration \t Press 2 : Sign in\n");
}
