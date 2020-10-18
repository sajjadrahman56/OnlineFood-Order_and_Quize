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

        while(m--)
        {
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
        };
        break;

    case 2:

        system("cls");

        printf("\n\n\n");

        printf("\n\t\t\t\t************************************************\n");
        printf("\n\t\t\t\t|----Welcome to The Entertainment world...!!----|\n");
        printf("\n\t\t\t\t************************************************\n");

        printf("\n\n\n\tEnter any number between 3 to infinite\n");

        int v,b;

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
                system("cls");

                printf("\n\t\t*****************************\n");
                printf("\n\t\t|----- Top 10 Footballer -----|\n");
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
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,nam[m],salary[m]);
                }
                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t************************************\n");
                printf("\n\t\t\t\t|----- All Time Best 10 Movies -----|\n");
                printf("\n\t\t\t\t*************************************\n\n\n");


                printf("\n\t\t\tNo\t\tMovie name\n");
                printf("\n\t\t\t1\t\tInception\n");
                printf("\n\t\t\t2\t\tTitanic\n");
                printf("\n\t\t\t3\t\tLone Survivor\n");
                printf("\n\t\t\t4\t\tThe Prestige\n");
                printf("\n\t\t\t5\t\tShutter Island\n");
                printf("\n\t\t\t6\t\tA Beautiful Mind\n");
                printf("\n\t\t\t7\t\tAqua Man\n");
                printf("\n\t\t\t8\t\tAvengers\n");
                printf("\n\t\t\t9\t\tJames Bond\n");
                printf("\n\t\t\t10\t\tJurassic Park\n");

                break;

            case 3:
                system("cls");

                printf("\n\t\t*****************************\n");
                printf("\n\t\t|----- Top 10 On-line Game -----|\n");
                printf("\n\t\t*****************************\n");

                char *onlineGame[] = {" Player Unknown Battle Grounds            ",
                                      " Fortanite Battle Royal                   ",
                                      " Apex Legends                             ",
                                      " League Of Legends                        ",
                                      " Count Strike                             ",
                                      " Hearth Stone                             ",
                                      " Maine craft                              ",
                                      " Dota 2                                   ",
                                      " The Division                             ",
                                      " The Splatoon 2                           "
                                     };
                int year[10]= {2018,2017,2019,2009,2014,2012,2011,2015,2019,2015};

                printf("\n\t\tNo \t\t  Game Name\t\t\t\t   Lunched Year\n");

                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,onlineGame[m],year[m]);
                }
                break;

            default:
                printf("\n\t\terror !! you limit our cross , go home");
            }
        };
        break;

    case 3:
        system("cls");

        printf("\n\n\n");

        printf("\n\t\t\t\t************************************************\n");
        printf("\n\t\t\t\t|----- Welcome Book Lover to the zone...!!-----|\n");
        printf("\n\t\t\t\t************************************************\n");

        printf("\n\n\n\tEnter any number between 3 to infinite\n");

        int q,w;

        scanf("%d",&q);
        printf("\n");


        char *bookNam[] = {"Don Quixote                               ",
                           "Xinhuan Zidian                            ",
                           "A Tale Of Two Cities                      ",
                           "The Lord Of The Rings                     ",
                           "The Little Prince                         ",
                           "Harry Poter                               ",
                           "And Then There Were None                  ",
                           "Dream Of The Red Chember                  ",
                           "The Hobbit                                ",
                           "The Lion The Witch & The Wardorbe         "
                          };
        int copySold[10]= {500,400,200,150,142,120,100,100,100,85};


        char *BanglaBookNam[] = {"Shesher Kobitha and Gura                      ",
                                 "Prodush Pakritojon                            ",
                                 "Luhokopat                                     ",
                                 "Ontorlina                                     ",
                                 "Khuabnama                                     ",
                                 "Shun Bor Nari                                 ",
                                 "Kobi                                          ",
                                 "Tobu o akdin                                  ",
                                 "Lalshalu                                      ",
                                 "Hazar Bosor Dore                              "
                                };
        while(q--)
        {
            printf("\n\n\t1.All Time Top 10 Best Selling Book\t\t2.Bangla Literature\n");
            printf("\n\n\tchose one !!\n");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                system("cls");

                printf("\n\t\t\t\t*************************************\n");
                printf("\n\t\t\t\t|----- All time 10 Best Selling -----|\n");
                printf("\n\t\t\t\t**************************************\n");


                //printf("\n\t\tNo \t\tBook Name\t\tCopy sold(Million)\n");

                printf("\n\t\tNo \t\tBook Name\t\t\t\tCopy sold(Million)\n");

                for(m = 0 ; m <10 ; m++)
                {
                    printf("\n\t\t%d\t %s\t\t%d\n",m+1,bookNam[m],copySold[m]);
                }

                break;

            case 2:
                system("cls");

                printf("\n\t\t\t\t*************************************\n");
                printf("\n\t\t\t\t|-----   Top 10 Bangla Novel   -----|\n");
                printf("\n\t\t\t\t**************************************\n");
                for(int o = 0 ; o < 10; o++)
                {
                    printf("\n\t\t%d = %s\n",o+1,BanglaBookNam[o]);
                }
                break;

            default:
                printf("\nWrong  input\n");
            }
        };
        break;

    default:
        printf("\n\tError 404 !! try again\n");

    }
}


