#include<stdio.h>

char* productName[] = {"roti","parata","specialParata"};
int price[] = {290,300,790};
int productQuant[] = {0,0,0};


void menu();
void breakfast();
void lunch();
void dinner();
void others();
void teadrinks();

int getOrder();
void reviewOrder();

int main()
{
    int  next ;
    scanf("%d",&next);
    int ba = next < 5;
    printf("Welcome to my resturent\n\n\n");


    do
    {
        menu();
        printf("\n-----------------------------------------------\n");
        reviewOrder();
        next = getOrder();
        system("cls");


    }
    while(ba);

    getch();
}


void menu()
{
    //printf("code\t\tname\t\tprice\n\n");
    printf("1.\tBreakfast\t2.\tLunch\n");
    printf("\n3.\tDinner\t4.Others\n");
    printf("\n\t\t5.TEA-DRINKS\n");
    printf("\nEnter your food list ");
    int n ;
    scanf("%d",&n);
    switch(n)
    {
    case 0:
         printf("error");
        break;
    case 1:
        breakfast();
        break;
    case 2:
        lunch();
        break;
    case 3:
        dinner();
        break;
    case 4:
        others();
        break;
    case 5:
        teadrinks();
        break;
    default:
        printf("\n\n\tWrong menu number\n");
    }
}


void breakfast()
{
    printf("\n1.Breakfast\n"
           "1.Roti--------------------------------------------5/-\n"
           "2.Paratha-----------------------------------------7/-\n"
           "3.Special Paratha---------------------------------10/-\n"
           "4.Egg Omlete--------------------------------------15/-\n"
           "5.Moong Dal---------------------------------------20/-\n"
           "6.Vegetables--------------------------------------15/-\n"
           "7.Khichuri----------------------------------------25/-\n"
           "8.Special Khichuri--------------------------------40/-\n");
}
void lunch()
{
    printf("\n2.Lunch\n"
           "10.Rice--------------------------------------------10/-\n"
           "11.Dal---------------------------------------------7/-\n"
           "12.Mixed Vegetables--------------------------------20/-\n"
           "13.Boal Fish Curry_--------------------------------180/-\n"
           "14.Rui Fish Curry----------------------------------150/-\n"
           "15.Katla Fish Curry--------------------------------120/-\n"
           "16.Pabda Fish Curry--------------------------------130/-\n"
           "17.Ilish Fish Curry--------------------------------170/-\n"
           "18.Small Fish--------------------------------------100/-\n"
           "19.Egg Curry---------------------------------------25/-\n"
           "20.Chicken Curry-----------------------------------80/-\n"
           "21.Chicken Roast-----------------------------------90/-\n"
           "22.Chicken Bhuna-----------------------------------85/-\n"
           "23.Mutton Curry------------------------------------130/-\n"
           "24.Mutton Bhuna------------------------------------140/-\n");
}
void dinner()
{
    printf("\n3.Dinner\n"
           "25.Rice--------------------------------------------10/-\n"
           "26.Dal---------------------------------------------7/-\n"
           "27.Egg Curry---------------------------------------25/-\n"
           "28.Chicken Curry-----------------------------------80/-\n"
           "29.Chicken Roast-----------------------------------85/-\n"
           "30.Chicken Bhuna-----------------------------------140/-\n"
           "31.Mutton Curry------------------------------------130/-\n"
           "32.Mutton Bhuna------------------------------------140/-\n"
           "33.Chicken Biriyani--------------------------------130/-\n"
           "34.Mutton Biriyani---------------------------------185/-\n"
           "35.Kachhi Biriyani---------------------------------130/-\n"
           " Deserts\n"
           "36.Curd--------------------------------------------20/-\n"
           "37.Faluda------------------------------------------80/-\n"
           "38.Firni-------------------------------------------30/-\n"
           "39.Jorda-------------------------------------------25/-\n"
           "40.Sweets------------------------------------------30/-\n");
}
void others()
{
    printf("\n4.Others\n"
           "41.Naan--------------------------------------------15/-\n"
           "42.Special Naan------------------------------------30/-\n"
           "43.Chicken Grill(Full)-----------------------------225/-\n"
           "44.Chicken Chap(Full)------------------------------210/-\n"
           "45.Chicken BBQ(Full)-------------------------------240/-\n"
           "46.Chicken Tikka-----------------------------------100/-\n"
           "47.Chicken Korai-----------------------------------110/-\n"
           "48.Vegetable Fried Rice----------------------------90/-\n"
           "49.Egg Fried Rice----------------------------------100/-\n"
           "50.Chicken Fried Rice------------------------------120/-\n");
}
void teadrinks()
{
    printf("\n5.Tea & Drinks\n"
           "51.Tea---------------------------------------------15/-\n"
           "52.Coffee------------------------------------------30/-\n"
           "53.Cold Coffee-------------------------------------50/-\n"
           "54.Special Coffee----------------------------------70/-\n"
           "55.Special Lassi-----------------------------------25/-\n"
           "56.Cold Drinks-------------------------------------20/-\n"
           " Blasters\n"
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
    for(int i = 0 ; i < 6 ; i++)
    {
        if(productQuant[i]>0)
        {
            printf("\nCode : %d \tQuty = %d",i+1,productQuant[i]);
        }
    }
}
