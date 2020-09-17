#include<stdio.h>
#include<string.h>

void menu();
void main()
{
    printf("Ordering system \n");
    menu();
}

void menu()
{
    char*  productName[5] = {"Burger","Mango","Yango","salad","alu chop"};

    int i,price[5] = {768,890,78,500,789} ;

    /* printf("\n\t%s\t%d\n",productName[0],price[0]);
     printf("\n\t%s\t%d\n",productName[1],price[1]);
     printf("\n\t%s\t%d\n",productName[2],price[2]); */

    int productLen = sizeof(productName)/4;
    int largeNum = 0;


    //get space for equal
     for(int i =0  ; i <  productLen ; i++)
    {
        if(largeNum < strlen(productName[i]))
        {
            largeNum = strlen(productName[i]);
        }
    }


    //printf("Large name = %d\n",largeNum);

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n\t%s",productName[i]);

        int longSpace = largeNum - strlen(productName[i])+10; //space equal
        for (int j = 0 ; j < longSpace ; j++)
        {
            printf(" ");
        }
        printf("%d",price[i]);
    }





}

