#include<stdio.h>

void menu();
void main()
{
    printf("Ordering system \n");
    menu();
}

void menu()
{
    char*  productName[3] ={"Burger","Mango","Yango"} ;
    int price[3] = {768,890,78} ;

    printf("\n\t%s\t%d\n",productName[0],price[0]);
    printf("\n\t%s\t%d\n",productName[1],price[1]);
    printf("\n\t%s\t%d\n",productName[2],price[2]);
}

