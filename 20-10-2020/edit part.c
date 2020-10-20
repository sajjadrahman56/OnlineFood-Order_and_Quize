int enter;
printf("\t \t Hello there!Are you Hungry?\n\t \t ''' Then order food from HungryPanda '''\n");
printf("Enter '1' for registration\nEnter '2' for signin\n");
scanf("%d",&enter);
if(enter==1)
{
    system("CLS");
    Registration();
}
else if(enter==2)
{
    system("CLS");
    signin();
}
while (1)
{
    int in;

    printf("\n1: Order 2:  Receive  3:  Awaiting Food   4: Exit  \n");

    if(in == 1)
    {
        int a;
        printf("\n\tTotal cost = %d\n", totalcost);
        printf("\n1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n");
        scanf("%d",&a);
        if(a==1)
        {
            Breakfast();
        }
        else if(a==2)
        {
            lunch();
        }
        else if(a==3)
        {
            Dinner();
        }
        else if(a==4)
        {
            Others();
        }

        else if(a==5)
        {
            teaDrinks();
        }

    }

    else if(in == 2)
    {
        receive();
    }
    else if(in == 3)
    {
        awaitingFood();
    }
    else if(in == 4)
    {
        Exit();
    }
}
