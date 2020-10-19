#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];
int order_count = 0, served_count = 0, waiting_now = 0,totalcost=0;

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void st(int in)
{
    int qu;
    switch(in)
    {
    case 1 :
    {
        printf ("Roti \n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();
        p[order_count].number_of_food +=qu;
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
        p[order_count].cost += (5*qu);
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
        totalcost += (20*qu);
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
            p[order_count].cost += (15*qu);
        else if (i==2)
            p[order_count].cost += (25*qu);
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



void breakfast()
{
    printf("Breakfast"
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

    totalcost+=p[order_count].cost;

    //main();

    printf("\n\tDo you want to order again ? y\n");

    char temp;
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        main();





}



void lunch()
{
    printf("Lunch\n"
           "1.Mixed Vegetables------------------------------------20/-      \n"
           "2.Boal Fish Curry_------------------------------------110/-    \n"
           "3.Rui Fish Curry--------------------------------------100/-     \n"
           "4.Katla Fish Curry----------2piece/3piece-------------60/120/-   \n"
           "5.Pabda Fish Curry----------2piece/3piece-------------50/110/-   \n"
           "6.Ilish Fish Curry----------2piece/3piece-------------70/135/-   \n"
           "7.Kalbaus---------------------------------------------200/-    \n"
           "8.Egg Curry-------------------------------------------25/-    \n"
           "9.Chicken Curry-------------half/full-----------------80/130-  \n"
           "10.Chicken Roast-------------1piece/2piece-------------90/150- \n"
           "11.Chicken Bhuna---------------------------------------90/-\n"
           "12.Mutton Curry----------------------------------------110/-\n"
           "13.Mutton Bhuna--------------half/full-----------------140/220-\n");

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





int main()
{
    int a;
    printf("Total cost = %d\n", totalcost);
    printf("1: BreakFast  2: Lunch  3: Dinner  4: Others    5: Tea And Drinks \n");
    scanf("%d",&a);
    if(a==1)
    {
        breakfast();
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


