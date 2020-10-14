#include<stdio.h>

int dada();


int main()
{
    dada();
    return 0;
}


int dada()
{
    int n;

    printf("\n\t1. Trip Advisor\t\t2. Entertainment\t\t3. Best Books\n\n");
    printf("\n\tEnter any number please : ");

    scanf("%d",&n);

    switch(n)
    {
    case 1:
        system("cls");
        printf("\n\tWelcome to Green Sylhet\n\n");

        int m,n;
        printf("\n\tHow many times you wanna see go over again!!( press 3-no limit)\n");
        scanf("%d",&m);
        printf("\n");

        /*char *name[]= {" N A T U R E and  P A R K "," O T H E R S "};

        for(int i = 0 ; i < 2 ; i++)
        {
            printf("\t%d. = %s\t\t",i+1,name[i]);
        }
        */

        char *naturePark[]= {"Ratargul Swamp Forest","Bisnakandi\t\t","Jaflong\t\t","Lalakhal\t\t","Khadimnagar National Park","Tilagor Eco Park\t","Sreemangol Tea Garden","Madavkundo\t\t","Malnichara Tea state","Lakkatura Tea Garden"};

        char *others[] = {"Shahi Edgah","Shajalal Mazar","Surma Bridge","Kadir Bazar Bridge","King Bridge and Ali Amzad clock","Pantumai Waterfall","Rema-kalenga Wildlife","Adventure World","Osmani Museum","Osmani Park","Dreamlend","Jakariya City"};

        while(m--)
        {
            printf("\n\n\t\t1.  N A T U R E and  P A R K  \t2. O T H E R S ");
            printf("\n\n\tchose one !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                /*
                {
                    printf("\n\t%d = %s\t\t%d = %s\n",o+1,naturePark[o],o+2,naturePark[o+1]);
                    printf("\n\t%d = %s\t\t%d = %s\n",o+3,naturePark[o+2],o+4,naturePark[o+3]);
                    printf("\n\t%d = %s\t\t%d = %s\n",o+5,naturePark[o+4],o+6,naturePark[o+5]);
                    printf("\n\t%d = %s\t\t%d = %s\n",o+7,naturePark[o+6],o+8,naturePark[o+7]);
                    printf("\n\t%d = %s\t\t%d = %s\n",o+9,naturePark[o+8],o+10,naturePark[o+9]);

                }
                */
                for(int m = 0 ; m < 10; m++)
                {
                    printf("\n\t%d = %s\n",m+1,naturePark[m]);
                }

                break;

            case 2:
                for(int o = 0 ; o < 12; o++)
                {
                    printf("\n\t%d = %s\n",o+1,others[o]);
                }
                break;

            default:
                printf("\nWrong  input\n");
            }
        };
        break;

    case 2:
        system("cls");
        printf("\n\tWelcome to  The Entertainment world\n\n");

        int v,b;
        printf("\n\tHow many times you wanna see go over again!!( press 3-no limit)\n");
        scanf("%d",&v);

        char *namer[]= {"FOOTBALLAR","MOVIE","ONLINE GAME"};
        for(int i = 0 ; i < 3 ; i++)
        {
            printf("\t%d. = %s\t",i+1,namer[i]);
        }

        while(v--)
        {


            printf("\n\n\t\tchose one !!\n");
            scanf("%d",&b);
            switch(b)
            {
            case 1:
                printf("\n\t\t*****************************\n");
                printf("\n\t\t***** Top 5 Footballer *****\n");
                printf("\n\t\t*****************************\n");

                char *nam[] = {"Lionel Messi     ",
                               "Cristiano Ronaldo",
                               "Neymar jr        ",
                               "K. Mbappe        ",
                               "M. Salah         ",
                               "Paul Pogba       ",
                               "Griezman         ",
                               "Greate Bale      ",
                               "De Maria         ",
                               "David de Gea     "
                              };
                int salary[10]= {126,117,108,42,37,35,33,29,26,22};

                printf("\n\t\tNo \t\tName\t\tSalary(Million usd $)\n");
                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d",m+1,nam[m],salary[m]);
                }

                break;
            case 2:
                printf("\n\t\t*****************************\n");
                printf("\n\t\t***** Top 10 Footballer *****\n");
                printf("\n\t\t*****************************\n");

               // char *Movinam[] = {"Cristiano Ronaldo","Neymar","Messi","Mabppe","Lawandoski"};
                //int pricedam[5]= {90,65,43,23,12};
                printf("\n\t\tNo \t\tname");
                for(m = 0 ; m <5 ; m++)
                {
                    printf("\n\t\t%d\t %s",m+1,nam[m]);
                }
                printf("\n\n");

            default:
                printf("\n\t\terror !! you limit our cross , go home");
            }
        };
        break;

    case 3:

        break;
    default:
        printf("\n\tError 404 !! try again\n");

    }
}
