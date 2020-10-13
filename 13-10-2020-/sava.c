#include<stdio.h>
int main()
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

        char *name[5]= {"Bisnakndi","Ratargul","Jaflong","Dorgah","EidGah"};
        for(int i = 0 ; i < 5 ; i++)
        {
            printf("\t%d. = %s",i,name[i]);
        }

        while(m--)
        {


            printf("\n\n\t\tchose one !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("\nBinakandi\n");
                break;
            case 2:
                printf("\nRatargu\n");

            default:
                printf("\n\t\terror !! you limit our cross , go home");
            }
        };
        break;

    case 2:
        system("cls");
        printf("\n\tWelcome to  The Entertainment world\n\n");

        int v,b;
        printf("\n\tHow many times you wanna see go over again!!( press 3-no limit)\n");
        scanf("%d",&v);

        char *namer[]= {"FOOTBALLAR","MOVIE","ONLINE GAME","tVSERIES"};
        for(int i = 0 ; i < 4 ; i++)
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

                char *nam[] = {"Cristiano Ronaldo","Neymar","Messi","Mabppe","Lawandoski"};
                int salary[5]={90,65,43,23,12};
                printf("\n\t\tNo \t\tname");
                for(m = 0 ; m <5 ;m++)
                {
                    printf("\n\t\t%d\t %s",m+1,nam[m]);
                }

                break;
            case 2:
                 printf("\n\t\t*****************************\n");
                printf("\n\t\t***** Top 10 Footballer *****\n");
                printf("\n\t\t*****************************\n");

                char *Movinam[] = {"Cristiano Ronaldo","Neymar","Messi","Mabppe","Lawandoski"};
                int pricedam[5]={90,65,43,23,12};
                printf("\n\t\tNo \t\tname");
                for(m = 0 ; m <5 ;m++)
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
