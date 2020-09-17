#include<stdio.h>
#include <stdlib.h>

 void  main()
{
    int n ,i;

    printf("\tpress - 1: alu \t\t press - 2: kodu\n");
    printf("\n\tpress - 3: kumra \t\t press - 4: kira\n");

    printf("\t\n\nEnter any number 1 - 3 : \n\n");

    scanf("%d",&n);

    switch(n)
    {
    case 1:
        system("COLOR BC");
        printf("\nprice = 100/-\nQuality =1\nDiscount = 25%\n");
         getch();

    case 2:
        system("COLOR BC");
        printf("\nprice = 200/-\nQuality =1\nDiscount = 25%\n");
     getch();

    case 3:
        system("COLOR BC");
        printf("\nprice = 300/-\nQuality =1\nDiscount = 25%\n");
        getch();

    case 4 :
        printf("\n---------------\n");
             for (i = 1 ; i <= 3 ; i++)
             {
                  if(n ==  1 || n ==  2 )
                  {
                      printf("\nsum = %d",300);
                  }
             }
            getch();

    default:
        printf("\nWrong baba ji ");
    }
}
