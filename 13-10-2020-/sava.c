#include<stdio.h>
int main()
{
    int n;

    printf("\n\tEnter any number please : ");

    scanf("%d",&n);

    switch(n)
    {
    case 1:
        system("cls");
        printf("\n\tSanjida I love you \n\n");
        printf("\n\t1.tour\t\t2.kabar\t\t3.Sports\n\n");

        int m,n;
        printf("\n\tchose one whatever you want !!\n");
        scanf("%d",&m);

        while(m--)
        {
            printf("\n\t\tchose one   !!\n");
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
    }


}
