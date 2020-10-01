#include<stdio.h>

char* productName[] = {"rice","dal","mixedveg","boalfish","rui","curd","faluda","firni","jorda","sweets"};
int price[] = {10,7,20,180,150,20,80,30,25,30};
int productQuant[] = {0,0,0};
int total ;

void menu();
void menu1();
void morning();
void afternoon();
int getOrder();
void reviewOrder();
void payment();


int main()
{
    int  next ;
    printf("Welcome to Our resturent \n\n");
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
    printf("1.\tSokal\t2.\tbikal\n");
    printf("\n2\t\tMula\t\t300\n");
    printf("\n3\t\tBurgur\t\t790\n");
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
            printf("\nCode : %d\tPrice : %d\tQuty = %d\tsubtoal : %d",i+1,price[i],productQuant[i],price[i]*productQuant[i]);
        }
    }
    for(int i = 0 ; i < 8 ;i++)
    {
        total +=price[i] * productQuant[i];
    }
    printf("\n\tYour Payment Total = %d",total);
}

void payment()
{
     int cash , change ;
     do{
        printf("\nTotal = %d",total);
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

