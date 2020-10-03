#include <stdio.h>
#include <string.h>
#include <conio.h>

int order();
int receive ();
int display ();
int items ();

void nfo();

struct order
{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
} p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;


int main ()
{
    printf ("\t\t     Hungry Panda\n");
    while (1)
    {
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in)
        {
        case 1 :
        {
            order ();
            //nfo();
            break;
        }
        case 2 :
        {
            receive();
            break;
        }
        case 3 :
        {
            display();

            break;
        }
        }
    }
}

int order()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
//nfo:
   // nfo();

order_addition:                    //here used level
    printf ("How many items you want to order? ");
    scanf ("%d", &n);
    getchar ();
    while (n--)
    {
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in)
        {
        case 1 :
        {
            printf ("Enter the size of Roti : 1.half 2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();
            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();
            p[order_count].number_of_food +=qu;
            if (i==1)
                p[order_count].cost += (5*qu);
            else
                p[order_count].cost += (10*qu);
            break;
        }
        case 2 :
        {
            printf ("Enter the size of Paratha: 1.half 2.full\n");
            int i;
            scanf ("%d", &i);
            getchar();
            printf ("Please enter the quantity: ");
            scanf ("%d", &qu);
            getchar();
            p[order_count].number_of_food +=qu;
            if (i==1)
                p[order_count].cost += (7*qu);
            else
                p[order_count].cost += (12*qu);
            break;
        }

        default :
        {
            printf ("Invalid selection try again\n");
            n++;
        }
        }
    }
    char temp;

    printf ("Do you want to order anything else?(y/n)\n ");

    scanf("%c", &temp);

    if (temp == 'y' || temp == 'Y')
    {
        goto order_addition ;
    }
    //else
       // goto nfo;



    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %d taka.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);

    order_count ++;

}
int receive ()
{
    if (order_count==0)
    {
        printf ("Please order first\n");
    }
    else if (served_count == order_count)
    {
        printf ("All order served\n");
    }
    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;

   // printf("\nyou must be wait 30 min , do you time pass just press 1 \n ");
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);

    printf("\n\nyou must be wait 30 min , do you time pass just press 1 \n ");
    int n ;
    scanf("%d",&n);
    if(n == 1)
        printf("\n\tBabu kaiso");
        printf("\n\tyes babu");
}
int items ()
{
    printf("\n\n..................................MENU....................................\n");
    printf("Item Code#   Description-------------------Size--------------------Price(tk)\n");
    printf("\n1.Breakfast\n"
           "1.Roti------------------------------------half/full--------5/10-\n"
           "2.Paratha---------------------------------half/full--------7/12-\n"
           "3.Special Paratha-------------------------half/full------- 10/15-\n"
           "4.Egg Omlete------------------------------half/full--------15/20-\n"
           "5.Moong Dal-------------------------------half/full--------20/25-\n"
           "6.Vegetables------------------------------half/full--------15/20-\n"
           "7.Khichuri--------------------------------half/full--------25/35-\n"
           "8.Special Khichuri------------------------half/full--------40/65-\n");
    printf("\n2.Lunch\n"
           "9.Rice-----------------------------------half/full--------10/15-\n"
           "10.Dal------------------------------------half/full--------7/15-\n"
           "11.Mixed Vegetables-----------------------half/full--------20/30\n"
           "12.Boal Fish Curry_----------------------1pice/2pice-------70/140-\n"
           "13.Rui Fish Curry------------------------1pice/2pice-------50/100-\n"
           "14.Katla Fish Curry----------------------1pice/2pice-------60/120-\n"
           "15.Pabda Fish Curry----------------------1pice/2pice-------50/-\n");
}

void nfo()
{
    printf("\n\t  I have a friend ship with ofo\n");
}

