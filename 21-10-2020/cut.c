if(order_count == 0)
    {
        printf("\n\n\n\n");
        printf ("\n\t\t\tTotal order taken: %d\n", (order_count));
        printf ("\n\t\t\tNumber of Currently waiting to be served: %d\n", (order_count-served_count));
        printf ("\n\t\t\tCurrently preparing food for order no. %d\n\n", p[served_count].order_number);

        printf("\n\t For order Press : 1\n");
        int p;
        scanf("%d",&p);

        if(p==1)
            returnMenu();
    }

    else
    {
        printf("\n\n\n\n");
        printf ("\n\t\t\tTotal order taken: %d\n", (order_count));
        printf ("\n\t\t\tNumber of Currently waiting to be served: %d\n", (order_count-served_count));
        printf ("\n\t\t\tCurrently preparing food for order no. %d\n\n", p[served_count].order_number);
    }

