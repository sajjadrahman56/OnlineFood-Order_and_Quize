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
        scanf ("%d", &in);
        getchar ();

        printf("\n1: BreakFast  2: Lunch  3: Dinner  4: Others  5: Tea And Drinks \n");

















        switch (in)
        {
        case 1 :
        {
            system("CLS");
            order ();
            break;
        }
        case 2 :
        {
            system("CLS");
            receive();
            break;
        }
        case 3 :
        {
            system("CLS");
            awaitingFood();
            break;
        }
        case 4 :
        {
            system("CLS");
            Exit();
        }

        }
    }
