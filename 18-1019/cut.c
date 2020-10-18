#include<stdio.h>

int  entertainment();


int main()
{
    entertainment();
    return 0;
}


int entertainment()
{
    int n;

    printf("\n\t1. Trip Advisor\t\t2. Entertainment\t\t3. Best Books\n\n");
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
    }
}
