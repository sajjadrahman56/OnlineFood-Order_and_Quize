#include <stdio.h>
#include <string.h>
#include <conio.h>

struct signin
{

    char fname[25];
    char lname[25];
    char username[25];
    char address[100];
    int number[11];
    char password[25];
};
int Registration()
{

    FILE*HungryPanda;
    HungryPanda=fopen("HungryPanda1.txt","w");//open HungryPanda file in writing mode
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
    fwrite(&f,sizeof(f),1,HungryPanda);//store data in file HungryPanda

    fclose(HungryPanda);

    printf("\n\n\nyour User name is nameID\n");
    printf("\nNow sign in in HungryPand with nameID and password\n");
    printf("\nPress any key to continue........");
    getch();
    system("CLS");//hold the screen after press enter.
    signin();

}

int signin()
{
    char username[25];
    char password[25];
    FILE*HungryPanda;
    HungryPanda=fopen("HungryPanda1.txt","r"); //read the registe HungryPanda file for signin
    struct signin f;
    printf("NameID: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s",&password);

    while (fread(&f,sizeof(f),1,HungryPanda))//to check the stored username and password from HungryPanda file
    {
        if(strcmp(username,f.username)==0 && strcmp(password,f.password)==0)
        {
            printf("Welcome To HunGryPanda\n ");
        }
        else
        {
            printf("Ooops!Enter correct nameID and Password");

        }
    }

    fclose(HungryPanda);
}
void color()
{
    int enter;
    system("COLOR 6A");
    printf("Hello there!Are you Hungry?\nThen Order food in HunGryPanda.\n");
    printf("Enter '1' for registration\nEnter '2' for signin\n");
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
}


int order();
int receive ();
int display ();
int items ();
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
        goto order_addition  ; //  level
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
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
