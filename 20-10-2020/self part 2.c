#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x,int y);
void st(int in);

void Breakfast();
void lunch();
void Dinner();
void  teaDrinks();
void Others();
void st(int in);

/*main file*/

int loading();
int receive ();
int entertainment();
int awaitingFood ();
int information();
int quize();
int Exit ();
int payment();
int close();


int signin();
int Registration();

struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];

int order_count = 0, served_count = 0, waiting_now = 0,totalcost=0;
struct signin
{
    char fname[25];
    char lname[25];
    char username[25];
    char address[100];
    int number[11];
    char password[25];
};


int main()
{
    int a;
    printf("\n\tTotal cost = %d\n", totalcost);
    printf("\n1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n");
    scanf("%d",&a);
    if(a==1)
    {
        Breakfast();
    }
    else if(a==2)
    {
        lunch();
    }
    else if(a==3)
    {
        Dinner();
    }
    else if(a==4)
    {
        Others();
    }

    else if(a==5)
    {
        teaDrinks();
    }

    return 0;
}
















void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int signin()
{
    char username[25];
    char password[25];
    FILE*HungryPanda;
    HungryPanda=fopen("HungryPanda1.txt","r");
    struct signin f;
    printf("UserID: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s",&password);
    while (fread(&f,sizeof(f),1,HungryPanda))
    {
        if(strcmp(username,f.username)==0 && strcmp(password,f.password)==0)
        {
            system("CLS");
            loading();
            system("CLS");
            printf("You have successfully logged in...\n ");
            printf("Welcome to HungryPanda\n");
            printf ("1. Order\n2. Serve\n3. Awaiting Food\n4. Exit the program\n");
        }
        else
        {
            system("CLS");
            loading();
            system("CLS");
            printf("Oops! Wrong userID or password.Please enter the correct userID and password\n");
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
    printf("Enter Frist name: ");
    scanf("%s",f.fname);
    printf("Enter Last name: ");
    scanf("%s",f.lname);
    printf("Enter username: ");
    scanf("%s",f.username);
    printf("Enter your address: ");
    scanf("%s",f.address);
    printf("Enter your Number: ");
    scanf("%s",f.number);
    printf("Enter your password: ");
    scanf("%s",f.password);
    fwrite(&f,sizeof(f),1,HungryPanda);
    fclose(HungryPanda);
    loading();
    system("CLS");
    printf("\n\n\nYour User name is %s\n",f.username);
    printf("\nNow signin to HungryPanda with your userID and password\n");
    printf("\nPress any key to continue........");
    getch();
    system("CLS");
    signin();
}


void Breakfast()
{
    printf("\nBreakfast\n"
           "1.Roti-------------------------------------------------5/- \n"
           "2.Paratha----------------------------------------------7/- \n"
           "3.Special Paratha------------------------------------- 20/-\n"
           "4.Egg Omlete-----------------half/full-----------------15/25-\n"
           "5.Moong Dal------------------half/full-----------------20/35-\n"
           "6.Vegetables-----------------half/full-----------------20/25-\n"
           "7.Khichuri---------------------------------------------45/-\n"
           "8.Special Khichuri-------------------------------------75/-  ");
    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\nEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in);
    }
    printf("%d\n",p[order_count].cost);

    totalcost += p[order_count].cost;

    //main();

    printf("\n\tDo you want to order again ? 'y'\'n'");

    char temp;
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        main();

    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    system("CLS");
    loading();
    system("CLS");
    printf ("\nThank you %s for your order. Your bill is %d taka.\n\n", p[order_count].name,totalcost);
    order_count ++;
    printf("PLease select payment method.\n");
    payment ();





}



void lunch()
{
    printf("Lunch\n"
           "1.Rice------------------------------------------------20/-      \n"
           "2.Dal-----------------------half/full-----------------10/20    \n"
           "3.Mixed Vegetables------------------------------------20/-      \n"
           "4.Boal Fish Curry_------------------------------------110/-    \n"
           "5.Rui Fish Curry--------------------------------------100/-     \n"
           "6.Katla Fish Curry----------2piece/3piece-------------60/120/-   \n"
           "7.Pabda Fish Curry----------2piece/3piece-------------50/110/-   \n"
           "8.Ilish Fish Curry----------2piece/3piece-------------70/135/-   \n"
           "9.Kalbaus---------------------------------------------200/-    \n"
           "10.Egg Curry-------------------------------------------25/-    \n"
           "11.Chicken Curry-------------half/full-----------------80/130-  \n"
           "12.Chicken Roast-------------1piece/2piece-------------90/150- \n"
           "13.Chicken Bhuna---------------------------------------90/-\n"
           "14.Mutton Curry----------------------------------------110/-\n"
           "15.Mutton Bhuna--------------half/full-----------------140/220-\n");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\nEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in+23);
    }
    printf("%d\n",p[order_count].cost);

    totalcost+=p[order_count].cost;
    main();

}

void Dinner()
{
    printf("Dinner\n"
           "1.Rice-----------------------------------------15/-\n"
           "2.Dal----------------------half/full-----------7/14/-\n"
           "3.Egg Curry------------------------------------25/-\n"
           "4.Chicken Curry------------half/full-----------80/130- \n"
           "5.Chicken Roast------------1piece/2piece-------90/150- \n"
           "6.Chicken Bhuna---------------------------------90/- \n"
           "7.Mutton Curry---------------------------------110/- \n"
           "8.Mutton Bhuna-------------half/full-----------140/220- \n"
           "9.Chicken Biriyani---------quarter/full--------60/120-\n"
           "10.Mutton Biriyani----------quarter/full--------85/150-\n"
           "11.Kachhi Biriyani----------quarter/full--------90/160-\n");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\nEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in+23);
    }
    printf("%d\n",p[order_count].cost);

    totalcost+=p[order_count].cost;
    main();

}

void Others()
{
    printf("Others\n"
           "1.Naan---------------------half/full-----------15/25-\n"
           "2.Special Naan-------------half/full-----------20/40-\n"
           "3.Chicken Grill------------half/full-----------180/350- \n"
           "4.Chicken Chap-------------half/full-----------155/210- \n"
           "5.Chicken BBQ--------------half/full-----------120/240- \n"
           "6.Chicken Tikka------------half/full-----------100/180- \n"
           "7.Chicken Korai------------half/full-----------55/110-\n"
           "8.Vegetable Fried Rice-----quarter/full--------60/240-\n"
           "9.Chicken Fried Rice-------quarter/full--------120/480- \n");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\nEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in + 34);
    }
    printf("%d\n",p[order_count].cost);

    totalcost+=p[order_count].cost;
    main();

}

void  teaDrinks()
{
    printf("Tea & Drinks\n"
           "1.Tea-------------------------------------------------15/-\n"
           "2.Coffee--------------------hot/cold------------------30/45-\n"
           "3.Cold Drinks---------------250mg/500mg---------------20/35-\n"
           "4.Lassi-----------------------------------------------40/-\n"
           "5Special coffee--------------------------------------50/-\n"
           "6.Special lassi---------------------------------------70/-\n"
           "7.Cappuccino------------------------------------------90/-\n");

    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while(n--)
    {
        printf ("\nEnter chosen item code :- ");
        scanf("%d",&in);
        getchar();
        st(in + 43);
    }
    printf("%d\n",p[order_count].cost);

    totalcost+=p[order_count].cost;
    main();

}



void st(int in)
{
    int qu;
    switch(in)
    {
    case 1 :
    {
        printf ("\nRoti \n");
        printf ("\nPlease enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        p[order_count].cost += (5*qu);

        break;
    }
    case 2 :
    {
        printf ("   Paratha \n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (7*qu);

        break;
    }
    case 3 :
    {
        printf ("Special Paratha\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (20*qu);

        break;
    }
    case 4 :
    {
        printf ("Enter the size of Egg Omlete:  1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (15*qu);

        }
        else if (i==2)
        {
            p[order_count].cost += (25*qu);

        }
        break;

    }
    case 5 :
    {
        printf ("Enter the size of Moong Dal: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (20*qu);
        else
            p[order_count].cost += (35*qu);
        break;
    }
    case 6 :
    {
        //gotoxy(56, 15);
        printf ("Enter the size of Vegetables: 1. half  2. full\n");
        int i;
        //gotoxy(56,16);
        scanf ("%d", &i);
        getchar();

        //gotoxy(56,17);
        printf ("Please enter the quantity: ");
        //gotoxy(56,18);
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (20*qu);
        else
            p[order_count].cost += (25*qu);
        break;
    }
    case 7 :
    {
        printf ("Khichuri\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (45*qu);
        break;
    }
    case 8 :
    {
        printf ("Special khichuri\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (75*qu);
        break;
    }
    case 9 :
    {
        printf ("Rice\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (15*qu);
        break;
    }
    case 10 :
    {
        printf ("Enter the size of Dal: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (10*qu);
        else
            p[order_count].cost += (20*qu);
        break;
    }
    case 11 :
    {
        printf ("Mixed Vegetables\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (20*qu);
        break;
    }
    case 12 :
    {
        printf ("Boal Fish Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 13 :
    {
        printf ("Rui Fish Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (100*qu);
        break;
    }
    case 14 :
    {
        printf ("Enter the size of Katla Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (60*qu);
        else
            p[order_count].cost += (120*qu);
        break;
    }
    case 15 :
    {
        printf ("Enter the size of Pabda Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (50*qu);
        }
        else
        {
            p[order_count].cost += (110*qu);
        }
        break;
    }
    case 16 :
    {
        printf ("Enter the size of Ilish Fish Curry: 1. 2pice 2.3pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (70*qu);
        else
            p[order_count].cost += (135*qu);
        break;
    }
    case 17 :
    {
        printf ("Kalbaus\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (200*qu);
        break;
    }
    case 18 :
    {
        printf ("Egg Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (25*qu);
        break;
    }
    case 19 :
    {
        printf ("Enter the size of Chicken Curry: 1.half 2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (80*qu);
        else
            p[order_count].cost += (130*qu);
        break;
    }
    case 20 :
    {
        printf ("Enter the size of Chicken Roast: 1.pice 2.2 pice\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
        {
            p[order_count].cost += (90*qu);
        }
        else
        {
            p[order_count].cost += (90*qu);
        }
        break;
    }
    case 21 :
    {
        printf ("Chicken Bhuna\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    case 22 :
    {
        printf ("Mutton Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 23 :
    {
        printf ("Enter the size of Mutton Bhuna: 1.half 2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (140*qu);
        else
            p[order_count].cost += (220*qu);
        break;
    }
    case 24 :
    {
        printf ("Rice\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (15*qu);
        break;




    }
    case 25 :
    {
        printf ("Enter the size of Dal: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (7*qu);
        else
            p[order_count].cost += (14*qu);
        break;
    }
    case 26 :
    {
        printf ("Egg Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (25*qu);
        break;
    }
    case 27 :
    {
        printf ("Enter the size of Chicken curry: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        if (i==1)
            p[order_count].cost += (80 * qu);
        else
            p[order_count].cost += (135 * qu);
        break;
    }
    case 28 :
    {
        gotoxy(56,10);
        printf ("Enter the size of Chicken Roast: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (90 * qu);
        else
            p[order_count].cost += (150 * qu);
        break;
    }
    case 29 :
    {
        printf ("Chicken Bhuna\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    case 30 :
    {
        printf ("Mutton Curry\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (110*qu);
        break;
    }
    case 31 :
    {
        printf ("Enter the size of Mutton Buna: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (140 * qu);
        else
            p[order_count].cost += (220 * qu);
        break;
    }
    case 32 :
    {
        printf ("Enter the size of Chicken Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (60 * qu);
        else
            p[order_count].cost += (120 * qu);
        break;
    }
    case 33 :
    {
        printf ("Enter the size of Mutton Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (85 * qu);
        else
            p[order_count].cost += (150 * qu);
        break;
    }
    case 34 :
    {
        printf ("Enter the size of  Kachhi  Biriyani: 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (90 * qu);
        else
            p[order_count].cost += (160 * qu);
        break;
    }
    case 35 :
    {
        printf ("Enter the size of  Naan: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (15 * qu);
        else
            p[order_count].cost += (25 * qu);
        break;
    }
    case 36 :
    {
        printf ("Enter the size of Special Naan: 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (20 * qu);
        else
            p[order_count].cost += (40 * qu);
        break;
    }
    case 37 :
    {
        printf ("Enter the size of   Chicken Grill : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (180 * qu);
        else
            p[order_count].cost += (350 * qu);
        break;
    }
    case 38 :
    {
        printf ("Enter the size of   Chicken Chap : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (155 * qu);
        else
            p[order_count].cost += (210 * qu);
        break;
    }
    case 39 :
    {
        printf ("Enter the size of   Chicken BBQ : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (120 * qu);
        else
            p[order_count].cost += (240 * qu);
        break;
    }
    case 40 :
    {
        printf ("Enter the size of   Chicken Tikka : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (110 * qu);
        else
            p[order_count].cost += (220 * qu);
        break;
    }
    case 41 :
    {
        printf ("Enter the size of   Chicken Korai : 1. half  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (55 * qu);
        else
            p[order_count].cost += (110 * qu);
        break;
    }
    case 42 :
    {
        printf ("Enter the size of Vegetable fried rice : 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (60 * qu);
        else
            p[order_count].cost += (240 * qu);
        break;
    }
    case 43 :
    {
        printf ("Enter the size of  Chicken fried rice : 1. quarter  2.full\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (120 * qu);
        else
            p[order_count].cost += (480 * qu);
        break;
    }
    case 44 :
    {
        printf ("Tea\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (15*qu);
        break;
    }
    case 45:
    {
        printf ("Enter the size of  Coffee: 1. Hot  2.Cold\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (30 * qu);
        else
            p[order_count].cost += (45 * qu);
        break;
    }
    case 46:
    {
        printf ("Enter the size of  Coffee: 1. 250 mg  2. 500 mg\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food += qu;
        if (i==1)
            p[order_count].cost += (10 * qu);
        else
            p[order_count].cost += (35 * qu);
        break;
    }
    case 47 :
    {
        printf ("Lassi\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (40*qu);
        break;
    }
    case 48 :
    {
        printf ("Special coffee\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (50*qu);
        break;
    }
    case 49 :
    {
        printf ("Special lassi\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 50 :
    {
        printf ("Special lassi\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
        p[order_count].cost += (90*qu);
        break;
    }
    default :
    {
        printf ("Invalid selection try again\n");
    }
    }
}


int loading()
{
    int i,j,a;
    printf("LOADING...\n");
    for(i=0; i<=11; i++)
    {
        for(j=0; j<10000000; j++)
            a=j;
        printf("%c",177);
    }
}


int payment()
{
    int card,cash,enter5,enter7,code,pt;
    system ("COLOR 2");
    puts("Enter'1'Pay with Card or Mobile account\nEnter'2'Cash of delivery\nEnter'3'For Back\n");
    scanf("%d",&pt);
    switch (pt)
    {
    case 1 :
        system("CLS");
        puts("1.visa\n2.Your Bank\n3.Natwest\n4.Bkash\n5.Rocket\n6.Nagad\n\n\nEnter'0'For Back\n");
        scanf("%d",&enter5);
        if(enter5==1)
        {
            system("CLS");
            puts("Enter your card number:");
            scanf("%d",&card);
            puts("Enter your code:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==2)
        {
            system("CLS");
            puts("Enter your card number:");
            scanf("%d",&card);
            puts("Enter your code:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==3)
        {
            system("CLS");
            puts("Enter your card number:");
            scanf("%d",&card);
            puts("Enter your code:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==4)
        {
            system("CLS");
            puts("Enter your Bkash number:");
            scanf("%d",&card);
            puts("Enter your Bkash Pin:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==5)
        {
            system("CLS");
            puts("Enter your Rocket number:");
            scanf("%d",&card);
            puts("Enter your Rocket Pin:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==6)
        {
            system("CLS");
            puts("Enter your Nagad number:");
            scanf("%d",&card);
            puts("Enter your Nagad Pin:");
            scanf("%d",&code);
            loading();
            system("CLS");
        }
        if(enter5==0)
        {
            system("CLS");
            payment();
        }
        system("CLS");
        puts("Your Food is on the way please wait 20 minutes.");
        printf("Enter'1'Awaitng Food\nEnter'2'receive\nEnter'3'Both\n");
        scanf("%d",&enter7);
        if(enter7==1)
        {
            system("CLS");
            awaitingFood();
        }
        else if(enter7==2)
        {
            system("CLS");
            receive ();
        }
        else if(enter7==3)
        {
            system("CLS");
            awaitingFood();
            receive();
        }
        printf("If you want to pass your waiting time\n");
        int enter9;
        printf("Enter'1'For Entertainment\n");
        scanf("%d",&enter9);
        if(enter9==1)
        {
            system("CLS");
            int enter10;
            printf("Enter'1'For Information\nEnter'2'For Food quiz\n \n \nEnter'0'For Back\n");
            scanf("%d",&enter10);

            if(enter10==1)
            {
                system("CLS");
                information();
                Exit();
            }
            else if(enter10==2)
            {
                system("CLS");
                quize();
                Exit();
            }
            else if(enter10==0)
            {
                system("CLS");
                entertainment();
            }
        }


        break;
    case 2 :
        loading();
        system("CLS");
        puts("Please keep the amount on delivery time");
        printf("Enter'1'Awaiting Food\nEnter'2'receive\nEnter'3'Both\n \n \nEnter'0'For Back\n");
        scanf("%d",&enter7);
        if(enter7==1)
        {
            system("CLS");
            awaitingFood();
        }
        else if(enter7==2)
        {
            system("CLS");
            receive ();
        }
        else if(enter7==3)
        {
            system("CLS");
            awaitingFood();
            receive();
        }
        else if(enter7==0)
        {
            system("CLS");
            payment();
        }
        Exit();
        break;
    case 3:
        main();
        break;

    }
}




int awaitingFood ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
int Exit ()
{
    int enter2,enter3,enter4,enter6,et;
    system ("COLOR 2");
    printf("Thanks for chosen Hungry Panda\n");
    printf("If you are not satisfied with our service then report our restaurant or else Rating our restaurant.\n");
    printf("Enter'1' Rating\nEnter'2' Report\n");
    scanf("%d",&et);
    switch(et)
    {
    case 1 :
        system("CLS");
        printf("Enter'1'for 5 STAR\nEnter'2'for 3 STAR\nEnter'3'for 1 STAR\n");
        scanf("%d",&enter3);
        if(enter3==1)
        {
            system("CLS");
            system ("COLOR 5");
            printf("Wow! THANK YOU FOR YOUR RATING\n");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        else if(enter3==2)
        {
            system("CLS");
            system ("COLOR 3");
            printf("THNAK YOU FOR YOUR RATING\n");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        else if(enter3==3)
        {
            system("CLS");
            system ("COLOR 4");
            printf("THANK YOU\n");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        break;
    case 2 :
        system("CLS");
        printf("1.I have no mood for rating thats why choice report option\n2.Food quality not good\n3.late delivery.\n");
        scanf("%d",&enter4);
        if(enter4==1)
        {
            system("CLS");
            system ("COLOR 4");
            printf("OK!when you are in mood rate our restaurant.THANK YOU");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        else if(enter4==2)
        {
            system("CLS");
            system ("COLOR 5");
            printf("OK!We will improve our food Quality.THANK YOU");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        else if(enter4==3)
        {
            system("CLS");
            system ("COLOR 3");
            printf("OK!We will deliver our food faster.THANK YOU");
            printf("Enter'1'for order-again\nEnter'2'for exit\n");
            scanf("%d",&enter6);
            if(enter6==1)
            {
                main();
            }
            else if(enter6==2)
            {
                system("CLS");
                close();
            }
        }
        break;
    }
}
int receive ()
{
    if (order_count==0)
    {
        printf ("Please order first\n");
        printf ("Order no. %d\n", p[served_count].order_number);
        int enter8;
        printf("Enter'1'for Order\n");
        scanf("%d",&enter8);
        if(enter8==1)
        {
            main();
        }

    }
    else if (served_count == order_count)
    {
        printf ("All order served\n");
        printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
        printf ("Enjoy your meal\n\n");
    }

    served_count++;
}
int close()
{
    exit(0);
}
int entertainment()
{
    int enter9;
    printf("Enter'1'For Entertainment\n");
    scanf("%d",&enter9);
    if(enter9==1)
    {
        system("CLS");
        int enter10;
        printf("Enter'1'For Information\nEnter'2'For Food quiz\n \n \nEnter'0'For Back\n");
        scanf("%d",&enter10);

        if(enter10==1)
        {
            system("CLS");
            information();
            Exit();
        }
        else if(enter10==2)
        {
            system("CLS");
            quize();
            Exit();
        }
        else if(enter10==0)
        {
            system("CLS");
            entertainment();
        }
    }

}
int information()
{
    system("CLS");
    int n,enter12;

    printf("\n\t1. Trip Advisor\t\t2. News\t\t3. Best Books\t \t4.Back\n");
    printf("\n\tEnter any number please : ");

    scanf("%d",&n);

    switch(n)
    {
    /*About Green Sylhet*/

    case 1:
        system("cls");

        printf("\n\n\n");

        printf("\n\t\t\t\t************************************************\n");
        printf("\n\t\t\t\t|----Welcome to EVER GREEN SYLHET ...!!----|\n");
        printf("\n\t\t\t\t************************************************\n");

        printf("\n\n\n\tEnter any number between 3 to infinite\n");

        int m,n;

        scanf("%d",&m);
        printf("\n");

        char *naturePark[]= {"Ratargul Swamp Forest","Bisnakandi\t\t","Jaflong\t\t","Lalakhal\t\t","Khadimnagar National Park","Tilagor Eco Park\t","Sreemangol Tea Garden","Madavkundo\t\t","Malnichara Tea state","Lakkatura Tea Garden"};

        char *others[] = {"Shahi Edgah","Shajalal Mazar","Surma Bridge","Kadir Bazar Bridge","King Bridge and Ali Amzad clock","Pantumai Waterfall","Rema-kalenga Wildlife","Adventure World","Osmani Museum","Osmani Park","Dreamlend","Jakariya City"};

        while(m--)
        {
            printf("\n\n\n\t\t1.  N A T U R E and  P A R K  \t2. O T H E R S ");
            printf("\n\n\tchose one !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                system("cls");
                for(int m = 0 ; m < 10; m++)
                {
                    printf("\n\t%d = %s\n",m+1,naturePark[m]);
                }

                break;

            case 2:
                system("cls");
                for(int o = 0 ; o < 12; o++)
                {
                    printf("\n\t%d = %s\n",o+1,others[o]);
                }
                break;

            default:
                printf("\n\n\t\t\tWrong  input -----!!!!\n");
                printf("\n\t\t\tPlease input between 1 - 2\n");
            }
        };
        break;

    case 2:

        system("cls");

        printf("\n\n\n");

        printf("\n\t\t\t\t************************************************\n");
        printf("\n\t\t\t\t|----Welcome to The News world...!!----|\n");
        printf("\n\t\t\t\t************************************************\n");

        printf("\n\n\n\tEnter any number between 3 to infinite\n");

        int v,b;

        scanf("%d",&v);

        char *namer[]= {"FOOTBALLAR","MOVIE","ONLINE GAME"};

        for(int i = 0 ; i < 3 ; i++)
        {
            printf("\t%d. = %s\t",i+1,namer[i]);
        }

        while(v--)
        {

            printf("\n\n\t\tchose one !!\n");
            scanf("%d",&b);
            switch(b)
            {
            case 1:
                system("cls");

                printf("\n\t\t*****************************\n");
                printf("\n\t\t|----- Top 10 Footballer -----|\n");
                printf("\n\t\t*****************************\n");

                char *nam[] = {"Lionel Messi     ",
                               "Cristiano Ronaldo",
                               "Neymar jr        ",
                               "K. Mbappe        ",
                               "M. Salah         ",
                               "Paul Pogba       ",
                               "Griezman         ",
                               "Greate Bale      ",
                               "De Maria         ",
                               "David de Gea     "
                              };
                int salary[10]= {126,117,108,42,37,35,33,29,26,22};

                printf("\n\t\tNo \t\tName\t\tSalary(Million usd $)\n");

                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,nam[m],salary[m]);
                }
                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t************************************\n");
                printf("\n\t\t\t\t|----- All Time Best 10 Movies -----|\n");
                printf("\n\t\t\t\t*************************************\n\n\n");


                printf("\n\t\t\tNo\t\tMovie name\n");
                printf("\n\t\t\t1\t\tInception\n");
                printf("\n\t\t\t2\t\tTitanic\n");
                printf("\n\t\t\t3\t\tLone Survivor\n");
                printf("\n\t\t\t4\t\tThe Prestige\n");
                printf("\n\t\t\t5\t\tShutter Island\n");
                printf("\n\t\t\t6\t\tA Beautiful Mind\n");
                printf("\n\t\t\t7\t\tAqua Man\n");
                printf("\n\t\t\t8\t\tAvengers\n");
                printf("\n\t\t\t9\t\tJames Bond\n");
                printf("\n\t\t\t10\t\tJurassic Park\n");

                break;

            case 3:
                system("cls");

                printf("\n\t\t*****************************\n");
                printf("\n\t\t|----- Top 10 On-line Game -----|\n");
                printf("\n\t\t*****************************\n");

                char *onlineGame[] = {" Player Unknown Battle Grounds            ",
                                      " Fortanite Battle Royal                   ",
                                      " Apex Legends                             ",
                                      " League Of Legends                        ",
                                      " Count Strike                             ",
                                      " Hearth Stone                             ",
                                      " Maine craft                              ",
                                      " Dota 2                                   ",
                                      " The Division                             ",
                                      " The Splatoon 2                           "
                                     };
                int year[10]= {2018,2017,2019,2009,2014,2012,2011,2015,2019,2015};

                printf("\n\t\tNo \t\t  Game Name\t\t\t\t   Lunched Year\n");

                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,onlineGame[m],year[m]);
                }
                break;

            default:
                printf("\n\t\terror !! you limit our cross , go home");
            }

        };
        break;


    case 3:
        system("cls");

        printf("\n\n\n");

        printf("\n\t\t\t\t************************************************\n");
        printf("\n\t\t\t\t|----- Welcome Book Lover to the zone...!!-----|\n");
        printf("\n\t\t\t\t************************************************\n");

        printf("\n\n\tEnter any number between 3 to infinite\n");

        int q,w;

        scanf("%d",&q);
        printf("\n");


        char *bookNam[] = {"Don Quixote                               ",
                           "Xinhuan Zidian                            ",
                           "A Tale Of Two Cities                      ",
                           "The Lord Of The Rings                     ",
                           "The Little Prince                         ",
                           "Harry Poter                               ",
                           "And Then There Were None                  ",
                           "Dream Of The Red Chember                  ",
                           "The Hobbit                                ",
                           "The Lion The Witch & The Wardorbe         "
                          };
        int copySold[10]= {500,400,200,150,142,120,100,100,100,85};


        char *BanglaBookNam[] = {"Shesher Kobitha and Gura                      ",
                                 "Prodush Pakritojon                            ",
                                 "Luhokopat                                     ",
                                 "Ontorlina                                     ",
                                 "Khuabnama                                     ",
                                 "Shun Bor Nari                                 ",
                                 "Kobi                                          ",
                                 "Tobu o akdin                                  ",
                                 "Lalshalu                                      ",
                                 "Hazar Bosor Dore                              "
                                };
        while(q--)
        {
            printf("\n\n\t1.All Time Top 10 Best Selling Book\t\t2.Bangla Literature\n");
            printf("\n\n\tchose one !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                system("cls");

                printf("\n\t\t\t\t*************************************\n");
                printf("\n\t\t\t\t|----- All time 10 Best Selling -----|\n");
                printf("\n\t\t\t\t**************************************\n");


                //printf("\n\t\tNo \t\tBook Name\t\tCopy sold(Million)\n");

                printf("\n\t\tNo \t\tBook Name\t\t\t\tCopy sold(Million)\n");

                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,bookNam[m],copySold[m]);
                }

                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t*************************************\n");
                printf("\n\t\t\t\t|-----   Top 10 Bangla Novel   -----|\n");
                printf("\n\t\t\t\t**************************************\n");
                for(int o = 0 ; o < 10; o++)
                {
                    printf("\n\t\t%d = %s\n",o+1,BanglaBookNam[o]);
                }
                break;
            default:
                printf("\nWrong  input\n");
            }

        };
        break;
    case 4:
        system("CLS");
        entertainment();
        break;

    default:
        printf("\n\tError 404 !! try again\n");
    }


}
int TripAdvisor()
{

}
int NaturePark()
{
    int m,n;
    char *naturePark[]= {"Ratargul Swamp Forest","Bisnakandi\t\t","Jaflong\t\t","Lalakhal\t\t","Khadimnagar National Park","Tilagor Eco Park\t","Sreemangol Tea Garden","Madavkundo\t\t","Malnichara Tea state","Lakkatura Tea Garden"};
//printf("\n");
//scanf("%d",&m);
    while(m--)
    {
        printf("\n\n\n\t\t1.  N A T U R E and  P A R K");
        printf("\n\n\tchose one !!\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            for(int m = 0 ; m < 10; m++)
            {
                printf("\n\t%d = %s\n",m+1,naturePark[m]);
            }

            break;
        default:
            printf("\n\n\t\t\tWrong  input -----!!!!\n");
            printf("\n\t\t\tPlease input between 1 - 2\n");
        }
    };


}
int others()
{
    int m,n;

    // scanf("%d",&m);
    //printf("\n");

    char *others[] = {"Shahi Edgah","Shajalal Mazar","Surma Bridge","Kadir Bazar Bridge","King Bridge and Ali Amzad clock","Pantumai Waterfall","Rema-kalenga Wildlife","Adventure World","Osmani Museum","Osmani Park","Dreamlend","Jakariya City"};

    while(m--)
    {
        printf("\n\n\n\2. O T H E R S ");
        printf("\n\n\tchose one !!\n");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            for(int o = 0 ; o < 12; o++)
            {
                printf("\n\t%d = %s\n",o+1,others[o]);
            }
            break;

        default:
            printf("\n\n\t\t\tWrong  input -----!!!!\n");
            printf("\n\t\t\tPlease input between 1 - 2\n");
        }
    };
}
int quize()
{

}





