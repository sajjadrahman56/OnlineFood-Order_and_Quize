#include<stdio.h>
int main()
{
    int n;

    printf("\n\t1. Trip Advisor\t\t2. World News\t\t3. Best Books\n\n");
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


            printf("\n\n\t\tchose one   !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("\nDhaka\n");
                break;
            case 2:
                printf("\nJalkati\n");
                break;
            default:
                printf("\n\t\terror !! you limit our cross , go home");
            }
        };
        break;

    case 2:
        break;

    case 3:
        break;
    default:
        printf("\n\tError 404 !! try again\n");

    }
}
