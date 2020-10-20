int  bal()
{
    int n, in, qu;
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
level:
    printf ("How many items you want to order?\n ");
    scanf ("%d", &n);
    getchar ();
    while (n--)
    {
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in)
        {
            system("CLS");
            int a;
            printf("\n\tTotal cost = %d\n", totalcost);
            printf("\n1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n");
            scanf("%d",&a);
        case 1:
            //system("CLS");
            Breakfast();
            break;
        case 2 :
            lunch();
            break;
        case 3 :
            Dinner();
            break;
        case 4 :
            Others();
        case 5 :
            teaDrinks();
            break;

        default :
        {
            printf ("Invalid selection try again\n");
            n++;
        }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level ;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    system("CLS");
    loading();
    system("CLS");
    printf ("\nThank you %s for your order. Your bill is %d taka.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
    printf("PLease select payment method.\n");
    payment ();
}
