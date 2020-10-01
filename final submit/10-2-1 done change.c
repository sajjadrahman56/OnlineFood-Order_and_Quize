#include<stdio.h>

char* productName[] = {"rice","dal","mixedveg","boalfish","rui","curd","faluda","firni","jorda","sweets"};
int price[] = {10,7,20,180,150,20,80,30,25,30};
int productQuant[] = {0,0,0};
int total ;

void menu();
void menu1();

void morning();
void afternoon();
void dinner();
void others();
void teaCoffee();
void drinks();

int getOrder();
void reviewOrder();
void payment();


int main()
{
    int  next;
    printf("\n\n\t\t\tWelcome to my Team Bondo\n\n\n");

    do
    {
        menu();
        menu1();
        printf("\n-----------------------------------------------\n");
        reviewOrder();
        next = getOrder();
        system("cls");
    }
    while(next);
    payment();
    getch();
}

void menu()
{
    //printf("code\t\tname\t\tprice\n\n");
    printf("\t1.Morning  \t\t2.Afternoon\n\n");
    printf("\t3.Dinner  \t\t4.Others\n\n");
    printf("\t5.Tea & Coffee\t\t6.Drinks\n\n");
    //printf("\nEnter your food list ");

}
void menu1()
{
    printf("\n\n\tEnter your food List = ");

    int n ;
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        morning();
        break;
    case 2:
        afternoon();
        break;
    case 3:
        dinner();
        break;
    case 4:
        others();
        break;
    case 5:
        teaCoffee();
        break;
    case 6:
        drinks();
        break;
    default:
        printf("\nwrong input");
        printf("\n\nyou should be print code 0 for exixt\n");

    }

}
void morning()
{
    printf("\n\n"
           "1.Rice--------------------------------------------10/-\n"
           "2.Dal---------------------------------------------7/-\n"
           "3.Mixed Vegetables--------------------------------20/-\n"
           "4.Boal Fish Curry_--------------------------------180/-\n"
           "5.Rui Fish Curry----------------------------------150/-\n");
}
void afternoon()
{

    printf("\n\n"
           "6.Curd--------------------------------------------20/-\n"
           "7.Faluda------------------------------------------80/-\n"
           "8.Firni-------------------------------------------30/-\n"
           "9.Jorda-------------------------------------------25/-\n"
           "10.Sweets------------------------------------------30/-\n"
          );
}
void dinner()
{
    printf("\n3.Dinner\n"
           "11.Rice--------------------------------------------10/-\n"
           "12.Dal---------------------------------------------7/-\n"
           "13.Egg Curry---------------------------------------25/-\n"
           "14.Chicken Curry-----------------------------------80/-\n"
           "15.Chicken Roast-----------------------------------85/-\n"
           "16.Chicken Bhuna-----------------------------------140/-\n"
           "17.Mutton Curry------------------------------------130/-\n"
           "18.Mutton Bhuna------------------------------------140/-\n"
           "19.Chicken Biriyani--------------------------------130/-\n"
           "20.Mutton Biriyani---------------------------------185/-\n");
}
void others()
{
    printf("\n"
           "41.Naan--------------------------------------------15/-\n"
           "42.Special Naan------------------------------------30/-\n"
           "43.Chicken Grill(Full)-----------------------------225/-\n"
           "44.Chicken Chap(Full)------------------------------210/-\n"
           "45.Chicken BBQ(Full)-------------------------------240/-\n"
          );
}
void teaCoffee()
{
    printf("\n"
           "51.Tea---------------------------------------------15/-\n"
           "52.Coffee------------------------------------------30/-\n"
           "53.Cold Coffee-------------------------------------50/-\n"
           "54.Special Coffee----------------------------------70/-\n"
           "55.Special Lassi-----------------------------------25/-\n"
           "56.Cold Drinks-------------------------------------20/-\n"
          );
}

void drinks()
{
    printf("\n"
           "57.Refresher Blaster-------------------------------160/-\n"
           "58.Apple Blaster-----------------------------------160/-\n"
           "59.Malta Blaster-----------------------------------170/-\n"
           "60.Mango Blaster-----------------------------------170/-\n"
           "61.Strawberry Blaster------------------------------180/-\n"
           "62.Melon Blaster-----------------------------------200/-\n"
           "63.Pine-apple Blaster------------------------------190/-\n"
           "64.Chocolate Blaster-------------------------------200/-\n");
}
int getOrder()
{
    //printf("\n\t\tGet Order \n");
    int code, qut;
    printf("\n\ncode : ");
    scanf("%d",&code);
    if(code == 0)
    {
        return 0;
    }
    else
    {
        printf("Qut : ");
        scanf("%d",&qut);
        productQuant[code - 1] += qut;
        if(productQuant[code - 1] < 0)
        {
            productQuant[code - 1] = 0;
        }
        return 1;
    }
}

void reviewOrder()
{
    printf("\n\tRivew Orders\n");
    for(int i = 0 ; i < 8 ; i++)
    {
        if(productQuant[i]>0)
        {
            printf("\nCode : %d\tPrice : %d\tQuty = %d\tproduct price: %d",i+1,price[i],productQuant[i],price[i]*productQuant[i]);
        }
    }
    for(int i = 0 ; i < 8 ; i++)
    {
        total +=price[i] * productQuant[i];
    }
    printf("\n\tYour Payment Total = %d",total);
}

void payment()
{
    int cash, change ;
    do
    {
        printf("\nTotal Pay  = %d",total);
        printf("\nCash = ");
        scanf("%d",&cash);

        if(cash>=total)
        {
            change = cash - total ;
            printf("\nChange = %d\n",change);
            break;
        }

    }
    while(1);
}

